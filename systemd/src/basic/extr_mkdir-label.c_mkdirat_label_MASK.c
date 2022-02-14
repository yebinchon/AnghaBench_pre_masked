
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int,char const*,int ) ;
 int FUNC_3 (int,char const*,int ) ;
 int FUNC_4 (int,char const*,int ) ;

int FUNC_5(int VAR_1, const char *VAR_2, mode_t VAR_3) {
        int VAR_4;

        FUNC_0(VAR_2);

        VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_0);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_3);
        FUNC_1();
        if (VAR_4 < 0)
                return VAR_4;

        return FUNC_3(VAR_1, VAR_2, 0);
}
