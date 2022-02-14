
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct m_property {scalar_t__ priv; } ;
struct demuxer {int dummy; } ;
struct TYPE_4__ {struct demuxer* demuxer; TYPE_1__*** current_track; } ;
struct TYPE_3__ {struct demuxer* demuxer; } ;
typedef TYPE_2__ MPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct demuxer*,double*) ;
 int FUNC_1 (double) ;
 int FUNC_2 (int,void*,int ) ;
 char* FUNC_3 (int *,char*,double) ;

__attribute__((used)) static int FUNC_4(void *VAR_4, struct m_property *VAR_5,
                                      int VAR_6, void *VAR_7)
{
    MPContext *VAR_8 = VAR_4;
    int VAR_9 = (uintptr_t)VAR_5->priv & ~0x100;
    bool VAR_10 = (uintptr_t)VAR_5->priv & 0x100;

    struct demuxer *VAR_11 = ((void*)0);
    if (VAR_8->current_track[0][VAR_9])
        VAR_11 = VAR_8->current_track[0][VAR_9]->demuxer;
    if (!VAR_11)
        VAR_11 = VAR_8->demuxer;
    if (!VAR_11)
        return VAR_2;

    double VAR_12[VAR_3];
    FUNC_0(VAR_11, VAR_12);
    if (VAR_12[VAR_9] < 0)
        return VAR_2;


    double VAR_13 = VAR_12[VAR_9] * 8;


    if (VAR_10)
        return FUNC_2(VAR_6, VAR_7, FUNC_1(VAR_13 / 1000.0));

    if (VAR_6 == VAR_1) {
        VAR_13 /= 1000;
        if (VAR_13 < 1000) {
            *(char **)VAR_7 = FUNC_3(((void*)0), "%d kbps", (int)VAR_13);
        } else {
            *(char **)VAR_7 = FUNC_3(((void*)0), "%.3f mbps", VAR_13 / 1000.0);
        }
        return VAR_0;
    }
    return FUNC_2(VAR_6, VAR_7, FUNC_1(VAR_13));
}
