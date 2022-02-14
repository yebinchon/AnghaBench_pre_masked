
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct strm_time {int tv; } ;
typedef int strm_value ;
typedef int strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 struct strm_time* FUNC_0 (int ) ;
 int FUNC_1 (double) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 double FUNC_4 (int ) ;
 int FUNC_5 (int *,int,int *,int *) ;
 int FUNC_6 (int *,int *,struct timeval*) ;
 double FUNC_7 (struct timeval*) ;

__attribute__((used)) static int
FUNC_8(strm_stream* VAR_2, int VAR_3, strm_value* VAR_4, strm_value* VAR_5)
{
  struct strm_time *VAR_6;
  struct strm_time *VAR_7;
  struct timeval VAR_8;
  double VAR_9;

  if (VAR_3 != 2) {
    FUNC_3(VAR_2, "wrong # of arguments");
    return VAR_0;
  }
  if (FUNC_2(VAR_4[1])) {
    VAR_9 = FUNC_4(VAR_4[1]);
    VAR_4[1] = FUNC_1(-VAR_9);
    return FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5);
  }
  VAR_6 = FUNC_0(VAR_4[0]);
  VAR_7 = FUNC_0(VAR_4[1]);
  FUNC_6(&VAR_6->tv, &VAR_7->tv, &VAR_8);
  VAR_9 = FUNC_7(&VAR_8);
  *VAR_5 = FUNC_1(VAR_9);
  return VAR_1;
}
