
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int time; int * type; } ;
struct TYPE_5__ {int retrycount; scalar_t__ justid; scalar_t__ force; TYPE_1__ idle; } ;
typedef TYPE_2__ xclaimOptions ;



__attribute__((used)) static int FUNC_0(xclaimOptions *VAR_0) {
    int VAR_1 = 0;

    if (VAR_0->idle.type != ((void*)0) && VAR_0->idle.time != -1)
        VAR_1 += 2;
    if (VAR_0->retrycount != -1)
        VAR_1 += 2;
    if (VAR_0->force)
        VAR_1++;
    if (VAR_0->justid)
        VAR_1++;

    return VAR_1;
}
