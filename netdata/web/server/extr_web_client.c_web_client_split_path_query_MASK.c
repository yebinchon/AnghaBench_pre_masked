
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct web_client {char separator; int url_path_length; } ;


 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (struct web_client*,char*,char*) ;

void FUNC_4(struct web_client *VAR_0, char *VAR_1) {

    char *VAR_2 = FUNC_0(VAR_1, '?');
    if(VAR_2) {
        VAR_0->separator = '?';
        FUNC_3(VAR_0, VAR_1, VAR_2);
        return;
    }







    char *VAR_3 = VAR_1;
    while (VAR_3) {
        VAR_2 = FUNC_0(VAR_3, '%');
        if(VAR_2) {
            char *VAR_4 = (VAR_2+1);
            if (!FUNC_2(VAR_4, "3f", 2) || !FUNC_2(VAR_4, "3F", 2)) {
                VAR_0->separator = *VAR_2;
                FUNC_3(VAR_0, VAR_1, VAR_2);
                return;
            }
            VAR_2++;
        }

        VAR_3 = VAR_2;
    }

    VAR_0->separator = 0x00;
    VAR_0->url_path_length = FUNC_1(VAR_1);
}
