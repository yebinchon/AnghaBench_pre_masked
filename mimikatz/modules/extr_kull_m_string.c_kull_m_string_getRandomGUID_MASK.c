
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int MaximumLength; int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int * PWSTR ;
typedef int GUID ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;

PWSTR FUNC_6()
{
 UNICODE_STRING VAR_1;
 GUID VAR_2;
 PWSTR VAR_3 = ((void*)0);
 if(FUNC_1(FUNC_5(&VAR_2)))
 {
  if(FUNC_1(FUNC_4(&VAR_2, &VAR_1)))
  {
   if((VAR_3 = (PWSTR) FUNC_0(VAR_0, VAR_1.MaximumLength)))
    FUNC_2(VAR_3, VAR_1.Buffer, VAR_1.MaximumLength);
   FUNC_3(&VAR_1);
  }
 }
 return VAR_3;
}
