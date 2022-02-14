
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UBaseType_t ;
struct TYPE_7__ {scalar_t__ uxPriority; scalar_t__ uxTCBNumber; } ;
typedef TYPE_1__ TCB_t ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_8( TCB_t *VAR_5 )
{


 FUNC_4();
 {
  VAR_2++;
  if( VAR_1 == ((void*)0) )
  {


   VAR_1 = VAR_5;

   if( VAR_2 == ( UBaseType_t ) 1 )
   {



    FUNC_3();
   }
   else
   {
    FUNC_0();
   }
  }
  else
  {



   if( VAR_4 == VAR_0 )
   {
    if( VAR_1->uxPriority <= VAR_5->uxPriority )
    {
     VAR_1 = VAR_5;
    }
    else
    {
     FUNC_0();
    }
   }
   else
   {
    FUNC_0();
   }
  }

  VAR_3++;







  FUNC_7( VAR_5 );

  FUNC_2( VAR_5 );

  FUNC_1( VAR_5 );
 }
 FUNC_5();

 if( VAR_4 != VAR_0 )
 {


  if( VAR_1->uxPriority < VAR_5->uxPriority )
  {
   FUNC_6();
  }
  else
  {
   FUNC_0();
  }
 }
 else
 {
  FUNC_0();
 }
}
