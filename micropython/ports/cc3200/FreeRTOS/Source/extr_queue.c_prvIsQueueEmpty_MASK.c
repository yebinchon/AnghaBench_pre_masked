
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UBaseType_t ;
struct TYPE_3__ {scalar_t__ uxMessagesWaiting; } ;
typedef TYPE_1__ Queue_t ;
typedef int BaseType_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static BaseType_t FUNC_2( const Queue_t *VAR_2 )
{
BaseType_t VAR_3;

 FUNC_0();
 {
  if( VAR_2->uxMessagesWaiting == ( UBaseType_t ) 0 )
  {
   VAR_3 = VAR_1;
  }
  else
  {
   VAR_3 = VAR_0;
  }
 }
 FUNC_1();

 return VAR_3;
}
