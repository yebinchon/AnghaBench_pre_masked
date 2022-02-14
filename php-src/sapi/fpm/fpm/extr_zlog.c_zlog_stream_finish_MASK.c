
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zlog_bool ;
struct zlog_stream {int finished; scalar_t__ len; scalar_t__ decorate; scalar_t__ use_buffer; } ;


 int VAR_0 ;
 int FUNC_0 (struct zlog_stream*) ;
 int FUNC_1 (struct zlog_stream*,char*,int) ;
 int FUNC_2 (struct zlog_stream*) ;
 int FUNC_3 (struct zlog_stream*) ;

zlog_bool FUNC_4(struct zlog_stream *VAR_1)
{
 if (VAR_1->finished || VAR_1->len == 0) {
  return VAR_0;
 }

 if (VAR_1->use_buffer) {
  if (VAR_1->decorate) {
   FUNC_2(VAR_1);
  }
  FUNC_0(VAR_1);
 } else {
  if (VAR_1->decorate) {
   FUNC_3(VAR_1);
  } else {
   FUNC_1(VAR_1, "\n", 1);
  }
 }
 VAR_1->finished = 1;

 return VAR_0;
}
