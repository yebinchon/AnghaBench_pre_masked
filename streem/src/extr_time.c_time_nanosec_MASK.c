
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tv_usec; } ;
struct strm_time {TYPE_1__ tv; } ;
typedef int strm_value ;
typedef int strm_stream ;


 int VAR_0 ;
 struct strm_time* FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int *,char*,int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(strm_stream* VAR_1, int VAR_2, strm_value* VAR_3, strm_value* VAR_4)
{
  strm_value VAR_5;
  struct strm_time *VAR_6;

  FUNC_1(VAR_1, VAR_2, VAR_3, "v", &VAR_5);
  VAR_6 = FUNC_0(VAR_5);
  *VAR_4 = FUNC_2(VAR_6->tv.tv_usec*1000);
  return VAR_0;
}
