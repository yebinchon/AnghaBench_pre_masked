
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int*) ;
 char* FUNC_3 (char const*,char*) ;

int FUNC_4(const char *VAR_4) {
        const char *VAR_5;
        int VAR_6, VAR_7;


        if (FUNC_2(VAR_4, &VAR_6) >= 0) {
                if (FUNC_0(VAR_6))
                        return VAR_6;
                else
                        return -VAR_1;
        }


        if (FUNC_3(VAR_4, "SIG"))
                VAR_4 += 3;


        VAR_6 = FUNC_1(VAR_4);
        if (VAR_6 > 0)
                return VAR_6;



        VAR_5 = FUNC_3(VAR_4, "RTMIN");
        if (VAR_5) {
                if (*VAR_5 == '\0')
                        return VAR_3;
                if (*VAR_5 != '+')
                        return -VAR_0;

                VAR_7 = FUNC_2(VAR_5, &VAR_6);
                if (VAR_7 < 0)
                        return VAR_7;

                if (VAR_6 < 0 || VAR_6 > VAR_2 - VAR_3)
                        return -VAR_1;

                return VAR_6 + VAR_3;
        }



        VAR_5 = FUNC_3(VAR_4, "RTMAX");
        if (VAR_5) {
                if (*VAR_5 == '\0')
                        return VAR_2;
                if (*VAR_5 != '-')
                        return -VAR_0;

                VAR_7 = FUNC_2(VAR_5, &VAR_6);
                if (VAR_7 < 0)
                        return VAR_7;

                if (VAR_6 > 0 || VAR_6 < VAR_3 - VAR_2)
                        return -VAR_1;

                return VAR_6 + VAR_2;
        }

        return -VAR_0;
}
