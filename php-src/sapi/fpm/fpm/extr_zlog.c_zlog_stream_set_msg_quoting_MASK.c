
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zlog_bool ;
struct zlog_stream {int msg_quote; scalar_t__ decorate; } ;



void FUNC_0(struct zlog_stream *VAR_0, zlog_bool VAR_1)
{
 VAR_0->msg_quote = VAR_1 && VAR_0->decorate ? 1 : 0;
}
