
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct uncomplete {TYPE_1__ pack; struct uncomplete* next; } ;
struct queue {struct uncomplete** hash; } ;
typedef int lua_State ;


 struct queue* FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct uncomplete*,int ,int) ;
 struct uncomplete* FUNC_3 (int) ;

__attribute__((used)) static struct uncomplete *
FUNC_4(lua_State *VAR_0, int VAR_1) {
 struct queue *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = FUNC_1(VAR_1);
 struct uncomplete * VAR_4 = FUNC_3(sizeof(struct uncomplete));
 FUNC_2(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->next = VAR_2->hash[VAR_3];
 VAR_4->pack.id = VAR_1;
 VAR_2->hash[VAR_3] = VAR_4;

 return VAR_4;
}
