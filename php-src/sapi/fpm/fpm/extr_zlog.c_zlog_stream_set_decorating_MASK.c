
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zlog_bool ;
struct zlog_stream {int decorate; scalar_t__ prefix_buffer; scalar_t__ msg_quote; } ;



void FUNC_0(struct zlog_stream *VAR_0, zlog_bool VAR_1)
{
 if (VAR_1) {
  VAR_0->decorate = 1;
 } else {
  VAR_0->decorate = 0;
  VAR_0->msg_quote = 0;
  VAR_0->prefix_buffer = 0;
 }
}
