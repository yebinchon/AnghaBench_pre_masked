
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct m_option {scalar_t__ max; } ;
struct demuxer {scalar_t__ num_editions; int edition; } ;
struct TYPE_4__ {int stop_play; int playback_initialized; struct demuxer* demuxer; } ;
typedef TYPE_1__ MPContext ;




 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,struct m_property*,int,void*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(void *VAR_3, struct m_property *VAR_4,
                               int VAR_5, void *VAR_6)
{
    MPContext *VAR_7 = VAR_3;
    struct demuxer *VAR_8 = VAR_7->demuxer;
    if (!VAR_7->playback_initialized || !VAR_8 || VAR_8->num_editions <= 0)
        return FUNC_0(VAR_7, VAR_4, VAR_5, VAR_6);

    int VAR_9 = VAR_8->edition;

    switch (VAR_5) {
    case 130:
        *(int *)VAR_6 = VAR_9;
        return VAR_1;
    case 128: {
        VAR_9 = *(int *)VAR_6;
        if (VAR_9 != VAR_8->edition) {
            if (!VAR_7->stop_play)
                VAR_7->stop_play = VAR_2;
            FUNC_1(VAR_7);
            break;
        }
        return VAR_1;
    }
    case 129: {
        int VAR_10 = FUNC_0(VAR_7, VAR_4, VAR_0, VAR_6);
        ((struct m_option *)VAR_6)->max = VAR_8->num_editions - 1;
        return VAR_10;
    }
    }
    return FUNC_0(VAR_7, VAR_4, VAR_5, VAR_6);
}
