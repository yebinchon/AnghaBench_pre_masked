
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int streamID ;
typedef int raxNode ;
struct TYPE_3__ {int numele; int numnodes; } ;
typedef TYPE_1__ rax ;



size_t FUNC_0(rax *VAR_0) {
    size_t VAR_1;
    VAR_1 = VAR_0->numele * sizeof(streamID);
    VAR_1 += VAR_0->numnodes * sizeof(raxNode);

    VAR_1 += VAR_0->numnodes * sizeof(long)*30;
    return VAR_1;
}
