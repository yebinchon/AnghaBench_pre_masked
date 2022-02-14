
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int bv_len; scalar_t__ bv_val; } ;
typedef int PWCHAR ;
typedef int PLDAPMessage ;
typedef int PLDAP ;
typedef scalar_t__ PCWCHAR ;
typedef scalar_t__ PCHAR ;
typedef TYPE_1__* PBERVAL ;
typedef int BERVAL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 int FUNC_3 (TYPE_1__**) ;
 TYPE_1__** FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_1__**) ;

PBERVAL FUNC_6(PLDAP VAR_1, PLDAPMessage VAR_2, PCWCHAR VAR_3)
{
 PBERVAL *VAR_4, VAR_5 = ((void*)0);
 if((VAR_4 = FUNC_4(VAR_1, VAR_2, (PWCHAR) VAR_3)))
 {
  if(FUNC_3(VAR_4) == 1)
  {
   if((VAR_5 = (PBERVAL) FUNC_0(VAR_0, sizeof(BERVAL))))
   {
    VAR_5->bv_len = VAR_4[0]->bv_len;
    if((VAR_5->bv_val = (PCHAR) FUNC_0(VAR_0, VAR_5->bv_len)))
     FUNC_2(VAR_5->bv_val, VAR_4[0]->bv_val, VAR_5->bv_len);
    else VAR_5 = (PBERVAL) FUNC_1(VAR_5);
   }
  }
  FUNC_5(VAR_4);
 }
 return VAR_5;
}
