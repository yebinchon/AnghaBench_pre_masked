
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* data; int size; } ;
struct zlog_stream {char const* function; int line; size_t len; size_t prefix_len; char* msg_prefix; int msg_prefix_len; scalar_t__ msg_quote; int use_syslog; int flags; TYPE_1__ buf; scalar_t__ use_buffer; scalar_t__ wrap; int prefix_buffer; } ;
typedef int ssize_t ;


 size_t FUNC_0 (char const*,int,int ,char*,int,int ) ;
 int FUNC_1 (struct zlog_stream*) ;
 int FUNC_2 (struct zlog_stream*,char) ;
 int FUNC_3 (struct zlog_stream*,char*,int) ;
 int FUNC_4 (struct zlog_stream*,char*,int) ;

ssize_t FUNC_5(struct zlog_stream *VAR_0, const char *VAR_1, int VAR_2)
{
 size_t VAR_3;

 if (!VAR_0->prefix_buffer) {
  return 0;
 }
 if (VAR_0->wrap && VAR_0->function == ((void*)0)) {
  VAR_0->function = VAR_1;
  VAR_0->line = VAR_2;
 }

 if (VAR_0->use_buffer) {
  if (!FUNC_1(VAR_0)) {
   return -1;
  }
  VAR_3 = FUNC_0(
    VAR_1, VAR_2, VAR_0->flags,
    VAR_0->buf.data, VAR_0->buf.size, VAR_0->use_syslog);
  VAR_0->len = VAR_0->prefix_len = VAR_3;
  if (VAR_0->msg_prefix != ((void*)0)) {
   FUNC_3(VAR_0, VAR_0->msg_prefix, VAR_0->msg_prefix_len);
  }
  if (VAR_0->msg_quote) {
   FUNC_2(VAR_0, '"');
  }
  return VAR_0->len;
 } else {
  char VAR_4[1024];
  ssize_t VAR_5;
  VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_0->flags, VAR_4, 1024, VAR_0->use_syslog);
  VAR_5 = FUNC_4(VAR_0, VAR_4, VAR_3);
  if (VAR_0->msg_prefix != ((void*)0)) {
   VAR_5 += FUNC_4(
     VAR_0, VAR_0->msg_prefix, VAR_0->msg_prefix_len);
  }
  if (VAR_0->msg_quote) {
   VAR_5 += FUNC_4(VAR_0, "\"", 1);
  }
  return VAR_5;
 }
}
