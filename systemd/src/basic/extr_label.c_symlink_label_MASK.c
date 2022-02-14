
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (char const*,int ) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;

int FUNC_5(const char *VAR_2, const char *VAR_3) {
        int VAR_4;

        FUNC_0(VAR_2);
        FUNC_0(VAR_3);

        VAR_4 = FUNC_2(VAR_3, VAR_0);
        if (VAR_4 < 0)
                return VAR_4;

        if (FUNC_4(VAR_2, VAR_3) < 0)
                VAR_4 = -VAR_1;

        FUNC_1();

        if (VAR_4 < 0)
                return VAR_4;

        return FUNC_3(VAR_3, 0);
}
