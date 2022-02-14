
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ,int ,int ,...) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int,char const*,int ,int ) ;
 scalar_t__ FUNC_2 (int,char const*,int,char const*,int ) ;
 scalar_t__ FUNC_3 (int,char const*,int,char const*) ;
 scalar_t__ FUNC_4 (int,char const*,int,char const*,int ) ;
 scalar_t__ FUNC_5 (int,char const*,int ) ;

int FUNC_6(int VAR_10, const char *VAR_11, int VAR_12, const char *VAR_13) {
        int VAR_14;


        if (FUNC_4(VAR_10, VAR_11, VAR_12, VAR_13, VAR_8) >= 0)
                return 0;



        if (!FUNC_0(VAR_9, VAR_2, VAR_4, VAR_5))
                return -VAR_9;




        if (FUNC_2(VAR_10, VAR_11, VAR_12, VAR_13, 0) >= 0) {

                if (FUNC_5(VAR_10, VAR_11, 0) < 0) {
                        VAR_14 = -VAR_9;
                        (void) FUNC_5(VAR_12, VAR_13, 0);
                        return VAR_14;
                }

                return 0;
        }

        if (!FUNC_0(VAR_9, VAR_2, VAR_4, VAR_5, VAR_6))
                return -VAR_9;




        if (FUNC_1(VAR_12, VAR_13, VAR_7, VAR_0) >= 0)
                return -VAR_1;
        if (VAR_9 != VAR_3)
                return -VAR_9;

        if (FUNC_3(VAR_10, VAR_11, VAR_12, VAR_13) < 0)
                return -VAR_9;

        return 0;
}
