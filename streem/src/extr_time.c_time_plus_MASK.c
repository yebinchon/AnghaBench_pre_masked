
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct strm_time {int utc_offset; int tv; } ;
typedef int strm_value ;
typedef int strm_stream ;


 int VAR_0 ;
 struct strm_time* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct timeval*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct timeval*,int ,int *) ;
 int FUNC_6 (int *,struct timeval*,struct timeval*) ;

__attribute__((used)) static int
FUNC_7(strm_stream* VAR_1, int VAR_2, strm_value* VAR_3, strm_value* VAR_4)
{
  struct strm_time* VAR_5;
  struct timeval VAR_6, VAR_7;

  if (VAR_2 != 2) {
    FUNC_3(VAR_1, "wrong # of arguments");
    return VAR_0;
  }
  VAR_5 = FUNC_0(VAR_3[0]);
  if (!FUNC_2(VAR_3[1])) {
    FUNC_3(VAR_1, "number required");
    return VAR_0;
  }
  FUNC_1(FUNC_4(VAR_3[1]), &VAR_6);
  FUNC_6(&VAR_5->tv, &VAR_6, &VAR_7);
  return FUNC_5(&VAR_7, VAR_5->utc_offset, VAR_4);
}
