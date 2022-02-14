
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int track_t ;
typedef int CdIo_t ;


 int FUNC_0 (int const*) ;
 unsigned int FUNC_1 (int const*,int) ;

unsigned int
FUNC_2(const CdIo_t *VAR_0, track_t VAR_1)
{
  const track_t VAR_2 = FUNC_0(VAR_0);

  if (VAR_1 >=1 && VAR_1 <= VAR_2)
    return ( FUNC_1(VAR_0, VAR_1+1)
             - FUNC_1(VAR_0, VAR_1) );
  return 0;
}
