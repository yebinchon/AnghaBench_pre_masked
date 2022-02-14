
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ifindex ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int,int ,int ,int*,int) ;
 int FUNC_3 (int,char*) ;

int FUNC_4(int VAR_6, int VAR_7) {
        char VAR_8[VAR_1 + 1];

        FUNC_0(VAR_6 >= 0);

        if (VAR_7 <= 0) {

                if (FUNC_2(VAR_6, VAR_2, VAR_3, ((void*)0), 0) < 0)
                        return -VAR_5;

                return 0;
        }

        if (FUNC_2(VAR_6, VAR_2, VAR_4, &VAR_7, sizeof(VAR_7)) >= 0)
                return 0;
        if (VAR_5 != VAR_0)
                return -VAR_5;


        if (!FUNC_1(VAR_7, VAR_8))
                return -VAR_5;

        return FUNC_3(VAR_6, VAR_8);
}
