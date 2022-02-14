
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int inbuf ;
typedef int RedisSock ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int *,char*,int,size_t*) ;
 char* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*,size_t) ;
 int FUNC_7 (int ,int ,char*,char) ;

char *
FUNC_8(RedisSock *VAR_1, int *VAR_2)
{
    char VAR_3[4096];
    size_t VAR_4;

    *VAR_2 = 0;
    if (FUNC_4(VAR_1, VAR_3, sizeof(VAR_3) - 1, &VAR_4) < 0) {
        return ((void*)0);
    }

    switch(VAR_3[0]) {
        case '-':
            FUNC_6(VAR_1, VAR_3+1, VAR_4);


            FUNC_3(VAR_1);

            return ((void*)0);
        case '$':
            *VAR_2 = FUNC_0(VAR_3 + 1);
            return FUNC_5(VAR_1, *VAR_2);

        case '*':

            if(FUNC_2(VAR_3 + 1, "-1", 2) == 0) {
                return ((void*)0);
            }


        case '+':
        case ':':


            if (VAR_4 > 1) {
                *VAR_2 = VAR_4;
                return FUNC_1(VAR_3, *VAR_2);
            }
        default:
            FUNC_7(VAR_0, 0,
                "protocol error, got '%c' as reply type byte\n",
                VAR_3[0]
            );
    }

    return ((void*)0);
}
