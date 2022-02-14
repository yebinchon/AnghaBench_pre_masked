
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char*) ;

int FUNC_4(const char *VAR_1) {
        int VAR_2, VAR_3;

        FUNC_0(VAR_1);

        VAR_1 = FUNC_2(VAR_1);

        if (!FUNC_3(VAR_1, "tty") )
                return -VAR_0;

        if (VAR_1[3] < '0' || VAR_1[3] > '9')
                return -VAR_0;

        VAR_3 = FUNC_1(VAR_1+3, &VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        if (VAR_2 < 0 || VAR_2 > 63)
                return -VAR_0;

        return VAR_2;
}
