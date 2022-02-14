
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num; } ;
struct mp_aframe {int format; TYPE_2__ chmap; TYPE_1__* av_frame; } ;
typedef int ch ;
struct TYPE_4__ {int sample_rate; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,int,TYPE_2__*) ;
 char* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*,int,char*,char*) ;
 int FUNC_4 (char*,size_t,char*,int,char*,int,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

char *FUNC_6(char *VAR_0, size_t VAR_1, struct mp_aframe *VAR_2)
{
    char VAR_3[128];
    FUNC_1(VAR_3, sizeof(VAR_3), &VAR_2->chmap);
    char *VAR_4 = FUNC_2(&VAR_2->chmap);
    if (FUNC_5(VAR_4, VAR_3) != 0)
        FUNC_3(VAR_3, sizeof(VAR_3), " (%s)", VAR_4);
    FUNC_4(VAR_0, VAR_1, "%dHz %s %dch %s", VAR_2->av_frame->sample_rate,
             VAR_3, VAR_2->chmap.num, FUNC_0(VAR_2->format));
    return VAR_0;
}
