
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {scalar_t__ Peb; } ;
typedef scalar_t__ PPEB ;
typedef TYPE_1__* PEPROCESS ;
typedef int BOOLEAN ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

BOOLEAN FUNC_7( void )
{
  PPEB VAR_4;
 PEPROCESS VAR_5;
 FUNC_1();

 VAR_3 = VAR_2;
 VAR_5 = FUNC_2();
 FUNC_0(FUNC_3((ULONG)VAR_5));
 if( VAR_5 ){
  VAR_4 = VAR_5->Peb;
  if( VAR_4 ){
   if( !FUNC_6( VAR_4 ) ){
    FUNC_4();
    return VAR_0;
   }
  }
 }
 if( !FUNC_5() ){
  FUNC_4();
  return VAR_0;
 }
 FUNC_4();
 return VAR_1;
}
