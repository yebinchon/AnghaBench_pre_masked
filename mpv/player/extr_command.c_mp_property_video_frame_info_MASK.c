
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_image {int pict_type; int fields; } ;
struct m_sub_property {char* member_0; int unavailable; int member_1; } ;
struct m_property {int dummy; } ;
struct TYPE_2__ {scalar_t__ video_out; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct m_sub_property*,int,void*) ;
 int FUNC_3 (struct mp_image*) ;
 struct mp_image* FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(void *VAR_4, struct m_property *VAR_5,
                                        int VAR_6, void *VAR_7)
{
    MPContext *VAR_8 = VAR_4;
    struct mp_image *VAR_9 =
        VAR_8->video_out ? FUNC_4(VAR_8->video_out) : ((void*)0);
    if (!VAR_9)
        return VAR_3;

    const char *VAR_10[] = {0, "I", "P", "B"};
    const char *VAR_11 = VAR_9->pict_type >= 1 && VAR_9->pict_type <= 3
                          ? VAR_10[VAR_9->pict_type] : ((void*)0);

    struct m_sub_property VAR_12[] = {
        {"picture-type", FUNC_1(VAR_11), .unavailable = !VAR_11},
        {"interlaced", FUNC_0(!!(VAR_9->fields & VAR_0))},
        {"tff", FUNC_0(!!(VAR_9->fields & VAR_2))},
        {"repeat", FUNC_0(!!(VAR_9->fields & VAR_1))},
        {0}
    };

    FUNC_3(VAR_9);
    return FUNC_2(VAR_12, VAR_6, VAR_7);
}
