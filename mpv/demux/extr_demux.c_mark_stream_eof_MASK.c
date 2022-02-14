
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demux_stream {int eof; } ;


 int FUNC_0 (struct demux_stream*,int *) ;
 int FUNC_1 (struct demux_stream*) ;
 int FUNC_2 (struct demux_stream*) ;

__attribute__((used)) static void FUNC_3(struct demux_stream *VAR_0)
{
    if (!VAR_0->eof) {
        VAR_0->eof = 1;
        FUNC_0(VAR_0, ((void*)0));
        FUNC_1(VAR_0);
        FUNC_2(VAR_0);
    }
}
