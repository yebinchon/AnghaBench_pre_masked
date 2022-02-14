
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * ContextRecord; TYPE_1__* ExceptionRecord; } ;
struct TYPE_4__ {scalar_t__ ExceptionCode; scalar_t__* ExceptionInformation; } ;
typedef TYPE_1__ EXCEPTION_RECORD ;
typedef TYPE_2__ EXCEPTION_POINTERS ;
typedef int CONTEXT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;

int FUNC_1(EXCEPTION_POINTERS *VAR_4) {
 EXCEPTION_RECORD *VAR_5 = VAR_4->ExceptionRecord;
 CONTEXT *VAR_6 = VAR_4->ContextRecord;

 if(VAR_5->ExceptionCode == VAR_0) {

  if (FUNC_0((void *)VAR_5->ExceptionInformation[1]) == VAR_3) {
   return VAR_1;
  }
 }

 return VAR_2;
}
