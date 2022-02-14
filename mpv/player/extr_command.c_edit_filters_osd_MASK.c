
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPContext {TYPE_1__* opts; int log; } ;
typedef enum stream_type { ____Placeholder_stream_type } stream_type ;
struct TYPE_2__ {int osd_duration; } ;


 int VAR_0 ;
 int FUNC_0 (struct MPContext*,int ,int,char const*,char const*) ;
 char** VAR_1 ;
 int FUNC_1 (struct MPContext*,int,int ,char*) ;
 int FUNC_2 (struct MPContext*,char const*,int ) ;

__attribute__((used)) static int FUNC_3(struct MPContext *VAR_2, enum stream_type VAR_3,
                            const char *VAR_4, const char *VAR_5, bool VAR_6)
{
    int VAR_7 = FUNC_0(VAR_2, VAR_2->log, VAR_3, VAR_4, VAR_5);
    if (VAR_6) {
        if (VAR_7 >= 0) {
            const char *VAR_8 = VAR_1[VAR_3];
            FUNC_2(VAR_2, VAR_8, VAR_0);
        } else {
            FUNC_1(VAR_2, 1, VAR_2->opts->osd_duration,
                         "Changing filters failed!");
        }
    }
    return VAR_7;
}
