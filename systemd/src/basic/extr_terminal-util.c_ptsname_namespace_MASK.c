
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char**,char*,int) ;
 int VAR_3 ;
 int FUNC_1 (int,int ,int*) ;

__attribute__((used)) static int FUNC_2(int VAR_4, char **VAR_5) {
        int VAR_6 = -1, VAR_7;




        VAR_7 = FUNC_1(VAR_4, VAR_2, &VAR_6);
        if (VAR_7 < 0)
                return -VAR_3;

        if (VAR_6 < 0)
                return -VAR_0;

        if (FUNC_0(VAR_5, "/dev/pts/%i", VAR_6) < 0)
                return -VAR_1;

        return 0;
}
