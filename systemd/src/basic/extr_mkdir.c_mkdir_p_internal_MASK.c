
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;
typedef int (* mkdir_func_t ) (char const*,int ) ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (char const*,char const*,int ,int (*) (char const*,int )) ;

int FUNC_4(const char *VAR_1, const char *VAR_2, mode_t VAR_3, mkdir_func_t VAR_4) {
        int VAR_5;



        FUNC_0(VAR_4 != FUNC_2);

        VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_5 = VAR_4(VAR_2, VAR_3);
        if (VAR_5 < 0 && (VAR_5 != -VAR_0 || FUNC_1(VAR_2, 1) <= 0))
                return VAR_5;

        return 0;
}
