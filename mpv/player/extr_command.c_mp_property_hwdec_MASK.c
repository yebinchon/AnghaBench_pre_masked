
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct track {struct mp_decoder_wrapper* dec; } ;
struct mp_decoder_wrapper {int dummy; } ;
struct m_property {int dummy; } ;
struct TYPE_4__ {double last_vo_pts; struct track*** current_track; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mp_decoder_wrapper*,int ,int *) ;
 int FUNC_3 (TYPE_1__*,struct m_property*,int,void*) ;
 int FUNC_4 (TYPE_1__*,int ,double,int ,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(void *VAR_8, struct m_property *VAR_9,
                             int VAR_10, void *VAR_11)
{
    MPContext *VAR_12 = VAR_8;
    struct track *VAR_13 = VAR_12->current_track[0][VAR_6];
    struct mp_decoder_wrapper *VAR_14 = VAR_13 ? VAR_13->dec : ((void*)0);

    if (VAR_10 == VAR_5) {
        char *VAR_15 = *(char **)VAR_11;
        char *VAR_16 = ((void*)0);
        if (FUNC_3(VAR_12, VAR_9, VAR_3, &VAR_16) < 1)
            VAR_16 = ((void*)0);

        bool VAR_17 = FUNC_1(FUNC_0(VAR_16), FUNC_0(VAR_15));

        FUNC_3(VAR_12, VAR_9, VAR_5, &VAR_15);

        FUNC_5(VAR_16);

        if (!VAR_14 || VAR_17)
            return VAR_4;

        FUNC_2(VAR_14, VAR_7, ((void*)0));
        double VAR_18 = VAR_12->last_vo_pts;
        if (VAR_18 != VAR_2)
            FUNC_4(VAR_12, VAR_0, VAR_18, VAR_1, 0);

        return VAR_4;
    }
    return FUNC_3(VAR_12, VAR_9, VAR_10, VAR_11);
}
