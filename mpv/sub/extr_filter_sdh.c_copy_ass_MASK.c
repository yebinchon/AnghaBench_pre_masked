
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int dummy; } ;
struct buffer {int dummy; } ;


 char FUNC_0 (struct sd*,struct buffer*,char) ;

__attribute__((used)) static void FUNC_1(struct sd *VAR_0, char **VAR_1, struct buffer *VAR_2)
{
    char *VAR_3 = *VAR_1;

    while (VAR_3[0] == '{') {
        while (*VAR_3) {
            char VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3[0]);
            VAR_3++;
            if (VAR_4 == '}')
                break;
        }
    }
    *VAR_1 = VAR_3;

    return;
}
