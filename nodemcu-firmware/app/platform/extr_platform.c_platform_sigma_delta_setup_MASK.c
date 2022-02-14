
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 () ;

uint8_t FUNC_8( uint8_t VAR_7 )
{
  if (VAR_7 < 1 || VAR_7 > VAR_1)
    return 0;

  FUNC_7();


  FUNC_5( VAR_7, VAR_4, VAR_2 );
  FUNC_6( VAR_7, VAR_3 );


  FUNC_4(FUNC_1(FUNC_0(VAR_6[VAR_7])),
                 (FUNC_3(FUNC_1(FUNC_0(VAR_6[VAR_7]))) &(~VAR_0)) |
                 FUNC_2( VAR_5 ));

  return 1;
}
