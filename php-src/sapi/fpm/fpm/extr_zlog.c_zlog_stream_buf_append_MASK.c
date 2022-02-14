
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
struct zlog_stream {size_t len; size_t msg_suffix_len; size_t msg_quote; char const* msg_suffix; int full; TYPE_1__ buf; int line; int function; scalar_t__ wrap; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct zlog_stream*,char) ;
 scalar_t__ FUNC_1 (struct zlog_stream*,char const*,size_t) ;
 int FUNC_2 (struct zlog_stream*) ;
 size_t FUNC_3 (struct zlog_stream*,int ,int ) ;
 size_t FUNC_4 (int ,size_t,int ) ;

__attribute__((used)) static ssize_t FUNC_5(
  struct zlog_stream *VAR_1, const char *VAR_2, size_t VAR_3)
{
 int VAR_4 = 0;
 size_t VAR_5, VAR_6, VAR_7;

 if (VAR_1->len == 0) {
  VAR_1->len = FUNC_3(VAR_1, VAR_1->function, VAR_1->line);
 }


 VAR_7 = VAR_1->len + VAR_1->msg_suffix_len + VAR_1->msg_quote;
 VAR_6 = VAR_7 + VAR_3;
 if (VAR_6 >= VAR_0) {
  VAR_4 = 1;
  VAR_5 = VAR_0 - VAR_7 - 1;
 } else {
  VAR_5 = VAR_3;
 }

 if (FUNC_1(VAR_1, VAR_2, VAR_5) < 0) {
  return -1;
 }

 if (!VAR_4) {
  return VAR_5;
 }

 if (VAR_1->wrap) {
  if (VAR_1->msg_quote) {
   FUNC_0(VAR_1, '"');
  }
  if (VAR_1->msg_suffix != ((void*)0)) {
   FUNC_1(VAR_1, VAR_1->msg_suffix, VAR_1->msg_suffix_len);
  }
  FUNC_2(VAR_1);
  FUNC_3(VAR_1, VAR_1->function, VAR_1->line);
  return VAR_5 + FUNC_5(
    VAR_1, VAR_2 + VAR_5, VAR_3 - VAR_5);
 }

 VAR_1->len = FUNC_4(VAR_1->buf.data, VAR_1->len, 0);
 VAR_1->full = 1;
 return VAR_5;
}
