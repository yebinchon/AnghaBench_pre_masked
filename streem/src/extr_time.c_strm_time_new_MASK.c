
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; long tv_usec; } ;
typedef int strm_value ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct timeval*,int,int *) ;

strm_value
FUNC_2(long VAR_1, long VAR_2, int VAR_3)
{
  struct timeval VAR_4;
  strm_value VAR_5;

  VAR_4.tv_sec = VAR_1;
  VAR_4.tv_usec = VAR_2;
  if (FUNC_1(&VAR_4, VAR_3, &VAR_5) == VAR_0) {
    return FUNC_0();
  }
  return VAR_5;
}
