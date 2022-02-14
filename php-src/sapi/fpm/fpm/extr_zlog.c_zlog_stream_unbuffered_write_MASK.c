
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zlog_stream {size_t len; size_t msg_suffix_len; size_t msg_quote; char const* msg_suffix; int full; scalar_t__ wrap; int line; int function; } ;
typedef scalar_t__ ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct zlog_stream*,char const*,size_t) ;
 scalar_t__ FUNC_1 (struct zlog_stream*,char const*,size_t,char const*,size_t) ;
 size_t FUNC_2 (struct zlog_stream*,int ,int ) ;

__attribute__((used)) static inline ssize_t FUNC_3(
  struct zlog_stream *VAR_1, const char *VAR_2, size_t VAR_3)
{
 const char *VAR_4;
 size_t VAR_5 = 0, VAR_6, VAR_7;
 ssize_t VAR_8;

 if (VAR_1->len == 0) {
  VAR_1->len = FUNC_2(VAR_1, VAR_1->function, VAR_1->line);
 }


 VAR_7 = VAR_1->len + VAR_1->msg_suffix_len + VAR_1->msg_quote;
 VAR_6 = VAR_7 + VAR_3;
 if (VAR_6 >= VAR_0) {
  if (VAR_1->wrap) {
   size_t VAR_9;
   if (VAR_6 == VAR_0) {
    VAR_4 = ((void*)0);
    VAR_5 = 0;
   } else {
    VAR_4 = "\n";
    VAR_5 = 1;
   }
   VAR_9 = VAR_0 - VAR_7 - 1;
   FUNC_0(VAR_1, VAR_2, VAR_9);
   if (VAR_4 != ((void*)0)) {
    if (VAR_1->msg_quote) {
     FUNC_0(VAR_1, "\"", 1);
    }
    if (VAR_1->msg_suffix) {
     FUNC_0(VAR_1, VAR_1->msg_suffix, VAR_1->msg_suffix_len);
    }
    FUNC_0(VAR_1, VAR_4, VAR_5);
   }
   VAR_1->len = 0;
   VAR_8 = FUNC_3(
     VAR_1, VAR_2 + VAR_9, VAR_3 - VAR_9);
   if (VAR_8 > 0) {
    return VAR_9 + VAR_8;
   }

   return VAR_8;
  }

  VAR_1->full = 1;
  if (VAR_6 == VAR_0) {
   VAR_4 = ((void*)0);
  } else {
   VAR_4 = "...";
   VAR_5 = sizeof("...") - 1;
   VAR_3 = VAR_0 - VAR_1->len - VAR_5;
  }
 }

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_8 > 0) {


  VAR_1->len += VAR_8;
 }

 return VAR_8;
}
