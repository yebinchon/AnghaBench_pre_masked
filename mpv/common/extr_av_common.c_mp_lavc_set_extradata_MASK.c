
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int extradata_size; int extradata; } ;
typedef TYPE_1__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,void*,int) ;

int FUNC_3(AVCodecContext *VAR_1, void *VAR_2, int VAR_3)
{
    if (VAR_3) {
        FUNC_0(VAR_1->extradata);
        VAR_1->extradata_size = 0;
        VAR_1->extradata = FUNC_1(VAR_3 + VAR_0);
        if (!VAR_1->extradata)
            return -1;
        VAR_1->extradata_size = VAR_3;
        FUNC_2(VAR_1->extradata, VAR_2, VAR_3);
    }
    return 0;
}
