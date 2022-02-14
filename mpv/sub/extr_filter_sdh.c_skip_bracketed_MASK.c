
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int dummy; } ;
struct buffer {int pos; } ;


 int FUNC_0 (struct sd*,char**,struct buffer*) ;

__attribute__((used)) static bool FUNC_1(struct sd *VAR_0, char **VAR_1, struct buffer *VAR_2)
{
    char *VAR_3 = *VAR_1;
    int VAR_4 = VAR_2->pos;

    VAR_3++;

    while (*VAR_3 && VAR_3[0] != ']') {
        if (VAR_3[0] == '{') {
            FUNC_0(VAR_0, &VAR_3, VAR_2);
        } else {
            VAR_3++;
        }
    }
    if (!*VAR_3) {

        VAR_2->pos = VAR_4;
        return 0;
    }
    VAR_3++;

    while (VAR_3[0] == ' ') {
        VAR_3++;
    }
    *VAR_1 = VAR_3;

    return 1;
}
