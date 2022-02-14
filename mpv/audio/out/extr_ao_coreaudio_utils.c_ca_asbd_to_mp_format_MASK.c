
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mChannelsPerFrame; int mSampleRate; int member_0; } ;
typedef TYPE_1__ AudioStreamBasicDescription ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__*,int,int ,int ) ;

int FUNC_3(const AudioStreamBasicDescription *VAR_2)
{
    for (int VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {
        AudioStreamBasicDescription VAR_4 = {0};
        FUNC_2(&VAR_4, VAR_3, VAR_2->mSampleRate, VAR_2->mChannelsPerFrame);
        if (FUNC_1(&VAR_4, VAR_2))
            return FUNC_0(VAR_3) ? VAR_1 : VAR_3;
    }
    return 0;
}
