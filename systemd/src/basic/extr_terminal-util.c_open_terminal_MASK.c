
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
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const*,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

int FUNC_4(const char *VAR_6, int VAR_7) {
        unsigned VAR_8 = 0;
        int VAR_9;
        if (VAR_7 & VAR_3)
                return -VAR_0;

        for (;;) {
                VAR_9 = FUNC_1(VAR_6, VAR_7, 0);
                if (VAR_9 >= 0)
                        break;

                if (VAR_5 != VAR_1)
                        return -VAR_5;


                if (VAR_8 >= 20)
                        return -VAR_5;

                FUNC_3(50 * VAR_4);
                VAR_8++;
        }

        if (FUNC_0(VAR_9) <= 0) {
                FUNC_2(VAR_9);
                return -VAR_2;
        }

        return VAR_9;
}
