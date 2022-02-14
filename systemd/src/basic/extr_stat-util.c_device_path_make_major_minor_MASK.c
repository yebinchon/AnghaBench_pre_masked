
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char**,char*,char const*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(mode_t VAR_2, dev_t VAR_3, char **VAR_4) {
        const char *VAR_5;



        if (FUNC_1(VAR_2))
                VAR_5 = "char";
        else if (FUNC_0(VAR_2))
                VAR_5 = "block";
        else
                return -VAR_0;

        if (FUNC_2(VAR_4, "/dev/%s/%u:%u", VAR_5, FUNC_3(VAR_3), FUNC_4(VAR_3)) < 0)
                return -VAR_1;

        return 0;
}
