
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demux_stream {int eof; int need_wakeup; int * reader_head; } ;



__attribute__((used)) static void FUNC_0(struct demux_stream *VAR_0)
{
    VAR_0->reader_head = ((void*)0);
    VAR_0->eof = 0;
    VAR_0->need_wakeup = 1;
}
