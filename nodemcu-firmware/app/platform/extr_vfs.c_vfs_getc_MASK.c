
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,unsigned char*,int) ;

int FUNC_4( int VAR_1 )
{
  unsigned char VAR_2 = 0xFF;
  int32_t VAR_3;

  if(!FUNC_1( VAR_1 )) {
    if (1 != FUNC_3( VAR_1, &VAR_2, 1 )) {
      FUNC_0("getc errno %i\n", FUNC_2( VAR_1 ));
      return VAR_0;
    } else {
      return (int)VAR_2;
    }
  }
  return VAR_0;
}
