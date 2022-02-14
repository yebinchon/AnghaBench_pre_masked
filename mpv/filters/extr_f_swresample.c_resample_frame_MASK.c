
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mp_aframe {int dummy; } ;
struct AVAudioResampleContext {int dummy; } ;
struct TYPE_3__ {int nb_samples; int * linesize; int * extended_data; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct AVAudioResampleContext*,int *,int ,int ,int *,int ,int ) ;
 TYPE_1__* FUNC_2 (struct mp_aframe*) ;

__attribute__((used)) static int FUNC_3(struct AVAudioResampleContext *VAR_0,
                          struct mp_aframe *VAR_1, struct mp_aframe *VAR_2,
                          int VAR_3)
{



    AVFrame *VAR_4 = VAR_2 ? FUNC_2(VAR_2) : ((void*)0);
    AVFrame *VAR_5 = VAR_1 ? FUNC_2(VAR_1) : ((void*)0);
    return FUNC_1(VAR_0,
        VAR_5 ? VAR_5->extended_data : ((void*)0),
        VAR_5 ? VAR_5->linesize[0] : 0,
        VAR_5 ? VAR_5->nb_samples : 0,
        VAR_4 ? VAR_4->extended_data : ((void*)0),
        VAR_4 ? VAR_4->linesize[0] : 0,
        VAR_4 ? FUNC_0(VAR_4->nb_samples, VAR_3) : 0);
}
