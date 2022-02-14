
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct strm_time {int utc_offset; struct timeval tv; int ns; int type; } ;
typedef int strm_value ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strm_time* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct strm_time*) ;

__attribute__((used)) static int
FUNC_2(struct timeval* VAR_4, int VAR_5, strm_value* VAR_6)
{
  struct strm_time* VAR_7 = FUNC_0(sizeof(struct strm_time));

  if (!VAR_7) return VAR_0;
  VAR_7->type = VAR_2;
  VAR_7->ns = VAR_3;
  VAR_7->tv = *VAR_4;
  VAR_7->utc_offset = VAR_5;
  *VAR_6 = FUNC_1(VAR_7);
  return VAR_1;
}
