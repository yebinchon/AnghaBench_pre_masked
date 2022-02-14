
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_loaddata {int list; int count; int data; } ;


 int VAR_0 ;
 struct aa_loaddata* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct aa_loaddata*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (size_t,int ) ;
 struct aa_loaddata* FUNC_5 (int,int ) ;

struct aa_loaddata *FUNC_6(size_t VAR_2)
{
 struct aa_loaddata *VAR_3;

 VAR_3 = FUNC_5(sizeof(*VAR_3), VAR_1);
 if (VAR_3 == ((void*)0))
  return FUNC_0(-VAR_0);
 VAR_3->data = FUNC_4(VAR_2, VAR_1);
 if (!VAR_3->data) {
  FUNC_2(VAR_3);
  return FUNC_0(-VAR_0);
 }
 FUNC_3(&VAR_3->count);
 FUNC_1(&VAR_3->list);

 return VAR_3;
}
