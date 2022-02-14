
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zlog_stream {scalar_t__ use_buffer; scalar_t__ full; scalar_t__ len; scalar_t__ finished; } ;
typedef int ssize_t ;


 int FUNC_0 (struct zlog_stream*,char const*,size_t) ;
 int FUNC_1 (struct zlog_stream*,char const*,size_t) ;

ssize_t FUNC_2(struct zlog_stream *VAR_0, const char *VAR_1, size_t VAR_2)
{

 if (VAR_0->finished) {
  VAR_0->finished = 0;
  VAR_0->len = 0;
  VAR_0->full = 0;
 } else if (VAR_0->full) {

  return 0;
 }

 if (VAR_0->use_buffer) {
  return FUNC_0(VAR_0, VAR_1, VAR_2);
 }

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
