
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PSTR ;
typedef int PLDAPMessage ;
typedef int PLDAP ;
typedef scalar_t__ PCSTR ;


 int FUNC_0 (int **,int *) ;
 int FUNC_1 (int **) ;
 int ** FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int **) ;

PSTR FUNC_4(PLDAP VAR_0, PLDAPMessage VAR_1, PCSTR VAR_2)
{
 PSTR *VAR_3, VAR_4 = ((void*)0);

 if((VAR_3 = FUNC_2(VAR_0, VAR_1, (PSTR) VAR_2)))
 {
  if(FUNC_1(VAR_3) == 1)
   FUNC_0(&VAR_4, VAR_3[0]);
  FUNC_3(VAR_3);
 }
 return VAR_4;
}
