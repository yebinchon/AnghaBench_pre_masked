
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int len; int name; } ;
typedef TYPE_1__ ltree_level ;
struct TYPE_9__ {int numlevel; } ;
typedef TYPE_2__ ltree ;
typedef int BITVECP ;


 int FUNC_0 (int ,int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(BITVECP VAR_0, ltree *VAR_1)
{
 int VAR_2 = VAR_1->numlevel;
 ltree_level *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 while (VAR_2 > 0)
 {
  VAR_4 = FUNC_3(VAR_3->name, VAR_3->len);
  FUNC_0(VAR_0, VAR_4);
  VAR_3 = FUNC_1(VAR_3);
  VAR_2--;
 }
}
