
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (char const*,int ) ;

int FUNC_5(const char *VAR_1, mode_t VAR_2) {
        int VAR_3;

        FUNC_0(VAR_1);

        VAR_3 = FUNC_2(VAR_1, VAR_0);
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_4(VAR_1, VAR_2);
        FUNC_1();
        if (VAR_3 < 0)
                return VAR_3;

        return FUNC_3(VAR_1, 0);
}
