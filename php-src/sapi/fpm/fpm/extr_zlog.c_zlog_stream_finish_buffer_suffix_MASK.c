
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zlog_bool ;
struct zlog_stream {size_t msg_suffix_len; scalar_t__ len; size_t msg_final_suffix_len; int * msg_final_suffix; scalar_t__ msg_quote; int line; int function; int * msg_suffix; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct zlog_stream*,char) ;
 int FUNC_1 (struct zlog_stream*,int *,size_t) ;
 int FUNC_2 (struct zlog_stream*) ;
 int FUNC_3 (struct zlog_stream*,int ,int ) ;

__attribute__((used)) static inline void FUNC_4(struct zlog_stream *VAR_1)
{
 if (VAR_1->msg_quote) {
  FUNC_0(VAR_1, '"');
 }
 if (VAR_1->msg_suffix != ((void*)0)) {
  FUNC_1(VAR_1, VAR_1->msg_suffix, VAR_1->msg_suffix_len);
 }
 if (VAR_1->msg_final_suffix != ((void*)0)) {
  if (VAR_1->len + VAR_1->msg_final_suffix_len >= VAR_0) {
   zlog_bool VAR_2 = VAR_1->msg_quote;
   size_t VAR_3 = VAR_1->len + VAR_1->msg_final_suffix_len + 1 - VAR_0;
   FUNC_1(
     VAR_1, VAR_1->msg_final_suffix,
     VAR_1->msg_final_suffix_len - VAR_3);
   FUNC_0(VAR_1, '\n');
   FUNC_2(VAR_1);
   VAR_1->msg_quote = 0;
   FUNC_3(VAR_1, VAR_1->function, VAR_1->line);
   VAR_1->msg_quote = VAR_2;
   FUNC_1(
     VAR_1,
     VAR_1->msg_final_suffix + (VAR_1->msg_final_suffix_len - VAR_3),
     VAR_3);
   FUNC_0(VAR_1, '\n');
  } else {
   FUNC_1(
     VAR_1, VAR_1->msg_final_suffix, VAR_1->msg_final_suffix_len);
  }
 }
}
