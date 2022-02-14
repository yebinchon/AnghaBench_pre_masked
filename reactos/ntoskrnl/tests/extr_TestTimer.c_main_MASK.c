
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double QuadPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;

int FUNC_5 ( int VAR_0, char** VAR_1, char** VAR_2 )
{
 LARGE_INTEGER VAR_3;
 LARGE_INTEGER VAR_4;
 LARGE_INTEGER VAR_5;

 FUNC_1 ( &VAR_3 );
 FUNC_4 ( "HIGH RESOLUTION PERFOMANCE COUNTER Frequency = %I64d CLOCKS IN SECOND\n",
      VAR_3.QuadPart );


 if (VAR_3.QuadPart == 0)
 {
 FUNC_4("Your computer does not support High Resolution Performance counter\n");
 return;
 }

 FUNC_4 ( "Press <ENTER> to start test...\n" );
 FUNC_3();

 FUNC_4 ( "\nPress any key to quit test\n\n" );
 FUNC_0 ( &VAR_4 );
 for (;;)
 {
 FUNC_0 ( &VAR_5 );
 FUNC_4("Elapsed Time : %8.6f mSec\r",
          ((double)( (VAR_5.QuadPart - VAR_4.QuadPart)* (double)1000.0/(double)VAR_3.QuadPart )) );
 if (FUNC_2())
  break;
 }


}
