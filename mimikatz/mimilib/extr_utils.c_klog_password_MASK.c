
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Length; scalar_t__ Buffer; } ;
typedef TYPE_1__* PUNICODE_STRING ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int*) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;

void FUNC_3(FILE * VAR_3, PUNICODE_STRING VAR_4)
{
 int VAR_5 = VAR_0 | VAR_1;
 if(VAR_4->Buffer)
 {
  if(FUNC_0(VAR_4->Buffer, VAR_4->Length, &VAR_5))
   FUNC_1(VAR_3, L"%wZ", VAR_4);
  else FUNC_2(VAR_3, VAR_4, VAR_2);


 }
}
