
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct TYPE_3__ {scalar_t__ audio_status; int playback_initialized; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,void*,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_3, struct m_property *VAR_4,
                                int VAR_5, void *VAR_6)
{
    MPContext *VAR_7 = VAR_3;
    if (!VAR_7->playback_initialized || VAR_7->audio_status < VAR_2 ||
        VAR_7->audio_status >= VAR_1)
        return VAR_0;

    return FUNC_1(VAR_5, VAR_6, FUNC_0(VAR_7));
}
