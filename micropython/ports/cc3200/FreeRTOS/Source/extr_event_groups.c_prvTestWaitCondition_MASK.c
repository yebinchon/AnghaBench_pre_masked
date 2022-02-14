
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const EventBits_t ;
typedef scalar_t__ BaseType_t ;


 int FUNC_0 () ;
 scalar_t__ const VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static BaseType_t FUNC_1( const EventBits_t VAR_2, const EventBits_t VAR_3, const BaseType_t VAR_4 )
{
BaseType_t VAR_5 = VAR_0;

 if( VAR_4 == VAR_0 )
 {


  if( ( VAR_2 & VAR_3 ) != ( EventBits_t ) 0 )
  {
   VAR_5 = VAR_1;
  }
  else
  {
   FUNC_0();
  }
 }
 else
 {


  if( ( VAR_2 & VAR_3 ) == VAR_3 )
  {
   VAR_5 = VAR_1;
  }
  else
  {
   FUNC_0();
  }
 }

 return VAR_5;
}
