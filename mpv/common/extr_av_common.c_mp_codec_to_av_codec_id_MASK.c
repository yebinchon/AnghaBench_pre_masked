
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int id; } ;
struct TYPE_5__ {int id; } ;
typedef TYPE_1__ AVCodecDescriptor ;
typedef TYPE_2__ AVCodec ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (char const*) ;
 TYPE_2__* FUNC_1 (char const*) ;

int FUNC_2(const char *VAR_1)
{
    int VAR_2 = VAR_0;
    if (VAR_1) {
        const AVCodecDescriptor *VAR_3 = FUNC_0(VAR_1);
        if (VAR_3)
            VAR_2 = VAR_3->id;
        if (VAR_2 == VAR_0) {
            AVCodec *VAR_4 = FUNC_1(VAR_1);
            if (VAR_4)
                VAR_2 = VAR_4->id;
        }
    }
    return VAR_2;
}
