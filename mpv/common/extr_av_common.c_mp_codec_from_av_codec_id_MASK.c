
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* name; } ;
struct TYPE_5__ {char* name; } ;
typedef TYPE_1__ AVCodecDescriptor ;
typedef TYPE_2__ AVCodec ;


 TYPE_1__* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int) ;

const char *FUNC_2(int VAR_0)
{
    const char *VAR_1 = ((void*)0);
    const AVCodecDescriptor *VAR_2 = FUNC_0(VAR_0);
    if (VAR_2)
        VAR_1 = VAR_2->name;
    if (!VAR_1) {
        AVCodec *VAR_3 = FUNC_1(VAR_0);
        if (VAR_3)
            VAR_1 = VAR_3->name;
    }
    return VAR_1;
}
