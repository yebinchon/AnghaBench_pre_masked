
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Qdisc_class_hash {int hashelems; int * hash; int hashmask; } ;
struct Qdisc_class_common {int hnode; int classid; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 unsigned int FUNC_2 (int ,int ) ;

void FUNC_3(struct Qdisc_class_hash *VAR_0,
        struct Qdisc_class_common *VAR_1)
{
 unsigned int VAR_2;

 FUNC_0(&VAR_1->hnode);
 VAR_2 = FUNC_2(VAR_1->classid, VAR_0->hashmask);
 FUNC_1(&VAR_1->hnode, &VAR_0->hash[VAR_2]);
 VAR_0->hashelems++;
}
