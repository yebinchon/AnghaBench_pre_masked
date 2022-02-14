
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int dummy; } ;
struct buffer {int pos; char* string; } ;


 int FUNC_0 (struct sd*,struct buffer*,char) ;
 int FUNC_1 (struct sd*,char**,struct buffer*) ;

__attribute__((used)) static void FUNC_2(struct sd *VAR_0, int VAR_1, struct buffer *VAR_2)
{
    int VAR_3 = VAR_2->pos;
    if (VAR_1 < 0 || VAR_1 >= VAR_3)
        return;
    FUNC_0(VAR_0, VAR_2, '\0');


    while (VAR_2->string[VAR_1] == '{') {
        while (VAR_2->string[VAR_1] && VAR_2->string[VAR_1] != '}') {
            VAR_1++;
        }
        if (VAR_2->string[VAR_1])
            VAR_1++;
    }


    if (VAR_2->string[VAR_1] != '-') {
        VAR_2->pos = VAR_3;
        return;
    }

    char *VAR_4 = &VAR_2->string[VAR_1];
    VAR_2->pos = VAR_1;
    VAR_4++;
    FUNC_1(VAR_0, &VAR_4, VAR_2);
    while (VAR_4[0] == ' ') {
        VAR_4++;
        FUNC_1(VAR_0, &VAR_4, VAR_2);
    }
    while (*VAR_4) {

        FUNC_0(VAR_0, VAR_2, VAR_4[0]);
        VAR_4++;
    }
}
