
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ MaximumLength; scalar_t__ Buffer; } ;
typedef scalar_t__ PWSTR ;
typedef TYPE_1__* PUNICODE_STRING ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_2 ;

BOOL FUNC_2(PUNICODE_STRING VAR_3, PUNICODE_STRING VAR_4)
{
 BOOL VAR_5 = VAR_0;
 if(VAR_3 && VAR_4 && VAR_3->MaximumLength && VAR_3->Buffer)
 {
  *VAR_4 = *VAR_3;
  if((VAR_4->Buffer = (PWSTR) FUNC_0(VAR_1, VAR_3->MaximumLength)))
  {
   VAR_5 = VAR_2;
   FUNC_1(VAR_4->Buffer, VAR_3->Buffer, VAR_3->MaximumLength);
  }
 }
 return VAR_5;
}
