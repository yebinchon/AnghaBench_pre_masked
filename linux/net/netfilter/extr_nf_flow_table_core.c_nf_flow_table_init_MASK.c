
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_flowtable {int list; int gc_work; int rhashtable; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int VAR_5 ;

int FUNC_6(struct nf_flowtable *VAR_6)
{
 int VAR_7;

 FUNC_0(&VAR_6->gc_work, VAR_4);

 VAR_7 = FUNC_5(&VAR_6->rhashtable,
         &VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_4(VAR_5,
      &VAR_6->gc_work, VAR_0);

 FUNC_2(&VAR_1);
 FUNC_1(&VAR_6->list, &VAR_2);
 FUNC_3(&VAR_1);

 return 0;
}
