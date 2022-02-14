
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_streams; scalar_t__ cur_stream; int * graph; int * splitter; int * source; int * cur_pin; } ;
typedef TYPE_1__ MediaDetImpl ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(MediaDetImpl *VAR_0)
{
    if (VAR_0->cur_pin) FUNC_2(VAR_0->cur_pin);
    VAR_0->cur_pin = ((void*)0);
    if (VAR_0->source) FUNC_0(VAR_0->source);
    VAR_0->source = ((void*)0);
    if (VAR_0->splitter) FUNC_0(VAR_0->splitter);
    VAR_0->splitter = ((void*)0);
    if (VAR_0->graph) FUNC_1(VAR_0->graph);
    VAR_0->graph = ((void*)0);
    VAR_0->num_streams = -1;
    VAR_0->cur_stream = 0;
}
