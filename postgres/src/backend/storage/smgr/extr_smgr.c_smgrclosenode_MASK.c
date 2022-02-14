
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * SMgrRelation ;
typedef int RelFileNodeBackend ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 (int *,void*,int ,int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(RelFileNodeBackend VAR_2)
{
 SMgrRelation VAR_3;


 if (VAR_1 == ((void*)0))
  return;

 VAR_3 = (SMgrRelation) FUNC_0(VAR_1,
           (void *) &VAR_2,
           VAR_0, ((void*)0));
 if (VAR_3 != ((void*)0))
  FUNC_1(VAR_3);
}
