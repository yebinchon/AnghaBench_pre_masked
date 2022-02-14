
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int oid; } ;
typedef int Oid ;
typedef int FuncDetailCode ;
typedef TYPE_1__* FuncCandidateList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *,TYPE_1__*,TYPE_1__**) ;
 TYPE_1__* FUNC_1 (int,int *,TYPE_1__*) ;

__attribute__((used)) static FuncDetailCode
FUNC_2(int VAR_4,
       Oid *VAR_5,
       FuncCandidateList VAR_6,
       Oid *VAR_7)
{
 int VAR_8;





 VAR_8 = FUNC_0(VAR_4, VAR_5,
           VAR_6, &VAR_6);


 if (VAR_8 == 0)
 {
  *VAR_7 = VAR_3;
  return VAR_2;
 }
 if (VAR_8 == 1)
 {
  *VAR_7 = VAR_6->oid;
  return VAR_1;
 }





 VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_6);

 if (VAR_6)
 {
  *VAR_7 = VAR_6->oid;
  return VAR_1;
 }

 *VAR_7 = VAR_3;
 return VAR_0;
}
