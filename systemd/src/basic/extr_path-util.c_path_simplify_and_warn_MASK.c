
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,int ,char const*,unsigned int,int ,char*,char const*,char*,char*) ;
 int FUNC_4 (char const*,int ,char const*,unsigned int,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

int FUNC_11(
                char *VAR_5,
                unsigned VAR_6,
                const char *VAR_7,
                const char *VAR_8,
                unsigned VAR_9,
                const char *VAR_10) {

        bool VAR_11 = VAR_6 & VAR_3;

        FUNC_2(!FUNC_0(VAR_6, VAR_2 | VAR_4));

        if (!FUNC_10(VAR_5))
                return FUNC_4(VAR_7, VAR_1, VAR_8, VAR_9, VAR_5);

        if (VAR_6 & (VAR_2 | VAR_4)) {
                bool VAR_12;

                VAR_12 = FUNC_5(VAR_5);

                if (!VAR_12 && (VAR_6 & VAR_2))
                        return FUNC_3(VAR_7, VAR_1, VAR_8, VAR_9, FUNC_1(VAR_0),
                                          "%s= path is not absolute%s: %s",
                                          VAR_10, VAR_11 ? "" : ", ignoring", VAR_5);

                if (VAR_12 && (VAR_6 & VAR_4))
                        return FUNC_3(VAR_7, VAR_1, VAR_8, VAR_9, FUNC_1(VAR_0),
                                          "%s= path is absolute%s: %s",
                                          VAR_10, VAR_11 ? "" : ", ignoring", VAR_5);
        }

        FUNC_8(VAR_5, 1);

        if (!FUNC_7(VAR_5))
                return FUNC_3(VAR_7, VAR_1, VAR_8, VAR_9, FUNC_1(VAR_0),
                                  "%s= path has invalid length (%zu bytes)%s.",
                                  VAR_10, FUNC_9(VAR_5), VAR_11 ? "" : ", ignoring");

        if (!FUNC_6(VAR_5))
                return FUNC_3(VAR_7, VAR_1, VAR_8, VAR_9, FUNC_1(VAR_0),
                                  "%s= path is not normalized%s: %s",
                                  VAR_10, VAR_11 ? "" : ", ignoring", VAR_5);

        return 0;
}
