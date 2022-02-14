
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,int ,int ) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 () ;
 unsigned int* VAR_3 ;

uint32_t FUNC_6( unsigned VAR_4, uint32_t VAR_5, unsigned VAR_6 )
{
  uint32_t VAR_7;
  if ( VAR_4 < VAR_0)
  {
    FUNC_0(VAR_4, VAR_2, VAR_1);
    if(!FUNC_2(VAR_4))
      return 0;

    FUNC_3(0, VAR_4);
    VAR_3[VAR_4] = VAR_6;
    FUNC_4((uint16_t)VAR_5, VAR_4);
  } else {
    return 0;
  }
  VAR_7 = FUNC_1( VAR_4 );
  if (!FUNC_5()) {
    return 0;
  }
  return VAR_7;
}
