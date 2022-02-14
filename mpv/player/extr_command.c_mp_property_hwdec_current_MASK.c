
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct track {struct mp_decoder_wrapper* dec; } ;
struct mp_decoder_wrapper {int dummy; } ;
struct m_property {int dummy; } ;
struct TYPE_2__ {struct track*** current_track; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,void*,char*) ;
 int FUNC_1 (struct mp_decoder_wrapper*,int ,char**) ;

__attribute__((used)) static int FUNC_2(void *VAR_3, struct m_property *VAR_4,
                                     int VAR_5, void *VAR_6)
{
    MPContext *VAR_7 = VAR_3;
    struct track *VAR_8 = VAR_7->current_track[0][VAR_1];
    struct mp_decoder_wrapper *VAR_9 = VAR_8 ? VAR_8->dec : ((void*)0);

    if (!VAR_9)
        return VAR_0;

    char *VAR_10 = ((void*)0);
    FUNC_1(VAR_9, VAR_2, &VAR_10);
    if (!VAR_10)
        VAR_10 = "no";
    return FUNC_0(VAR_5, VAR_6, VAR_10);
}
