
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ExtractFlags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const**,char**,char const*,int) ;
 int FUNC_1 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;

int FUNC_2(
                const char **VAR_4,
                char **VAR_5,
                const char *VAR_6,
                ExtractFlags VAR_7,
                const char *VAR_8,
                const char *VAR_9,
                unsigned VAR_10,
                const char *VAR_11) {





        const char *VAR_12;
        int VAR_13;

        VAR_12 = *VAR_4;
        VAR_13 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);
        if (VAR_13 >= 0)
                return VAR_13;

        if (VAR_13 == -VAR_0 && !(VAR_7 & VAR_1)) {


                *VAR_4 = VAR_12;
                VAR_13 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7|VAR_1);
                if (VAR_13 >= 0) {

                        FUNC_1(VAR_8, VAR_3, VAR_9, VAR_10, VAR_0, "Ignoring unknown escape sequences: \"%s\"", *VAR_5);
                        return VAR_13;
                }


                if (VAR_13 == -VAR_0)
                        return FUNC_1(VAR_8, VAR_2, VAR_9, VAR_10, VAR_13, "Unbalanced quoting, ignoring: \"%s\"", VAR_11);
        }


        return FUNC_1(VAR_8, VAR_2, VAR_9, VAR_10, VAR_13, "Unable to decode word \"%s\", ignoring: %m", VAR_11);
}
