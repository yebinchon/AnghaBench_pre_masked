
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {TYPE_1__* opts; } ;
struct buffer {int pos; } ;
struct TYPE_2__ {int sub_filter_SDH_harder; } ;


 int FUNC_0 (struct sd*,struct buffer*,char) ;
 int FUNC_1 (struct sd*,char**,struct buffer*) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;

__attribute__((used)) static void FUNC_5(struct sd *VAR_0, char **VAR_1, struct buffer *VAR_2)
{
    int VAR_3 = VAR_0->opts->sub_filter_SDH_harder;
    char *VAR_4 = *VAR_1;
    int VAR_5 = VAR_2->pos;

    FUNC_1(VAR_0, &VAR_4, VAR_2);

    if (VAR_4[0] == '-') {
        FUNC_0(VAR_0, VAR_2, VAR_4[0]);
        VAR_4++;
    }
    FUNC_1(VAR_0, &VAR_4, VAR_2);
    while (VAR_4[0] == ' ') {
        FUNC_0(VAR_0, VAR_2, VAR_4[0]);
        VAR_4++;
        FUNC_1(VAR_0, &VAR_4, VAR_2);
    }

    while (*VAR_4 && VAR_4[0] != ':') {
        if (VAR_4[0] == '{') {
            FUNC_1(VAR_0, &VAR_4, VAR_2);
        } else if ((FUNC_2(VAR_4[0]) &&
                    (VAR_3 || FUNC_4(VAR_4[0]) || VAR_4[0] == 'l')) ||
                   FUNC_3(VAR_4[0]) ||
                   VAR_4[0] == ' ' || VAR_4[0] == '\'' ||
                   (VAR_3 && (VAR_4[0] == '(' || VAR_4[0] == ')')) ||
                   VAR_4[0] == '#' || VAR_4[0] == '.' || VAR_4[0] == ',') {
            VAR_4++;
        } else {
            VAR_2->pos = VAR_5;
            return;
         }
    }
    if (!*VAR_4) {

        VAR_2->pos = VAR_5;
        return;
    }
    VAR_4++;
    FUNC_1(VAR_0, &VAR_4, VAR_2);
    if (!*VAR_4) {

    } else if (VAR_4[0] == '\\' && VAR_4[1] == 'N') {

        VAR_4 += 2;
    } else if (VAR_4[0] == ' ') {
        while (VAR_4[0] == ' ') {
            VAR_4++;
        }
        if (VAR_4[0] == '\\' && VAR_4[1] == 'N') {

            VAR_4 += 2;
        }
    } else {

        VAR_2->pos = VAR_5;
        return;
    }
    *VAR_1 = VAR_4;

    return;
}
