
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CF2_Int ;
typedef int CF2_Fixed ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static CF2_Int
  FUNC_1( CF2_Fixed VAR_0,
                          CF2_Fixed VAR_1,
                          CF2_Fixed VAR_2,
                          CF2_Fixed VAR_3 )
  {



    return ( VAR_0 >> 16 ) * ( FUNC_0( VAR_3, VAR_1 ) >> 16 ) -
           ( VAR_1 >> 16 ) * ( FUNC_0( VAR_2, VAR_0 ) >> 16 );
  }
