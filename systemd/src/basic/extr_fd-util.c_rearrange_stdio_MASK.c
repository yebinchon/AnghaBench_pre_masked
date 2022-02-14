
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_5 ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

int FUNC_7(int VAR_6, int VAR_7, int VAR_8) {

        int VAR_9[3] = {
                VAR_6,
                VAR_7,
                VAR_8
        };

        int VAR_10, VAR_11,
                VAR_12 = -1,
                VAR_13[3] = { -1, -1, -1 };
        bool VAR_14, VAR_15;
        VAR_14 = VAR_6 < 0;
        VAR_15 = VAR_7 < 0 || VAR_8 < 0;


        if (VAR_14 || VAR_15) {


                VAR_12 = FUNC_4("/dev/null", (VAR_14 && VAR_15 ? VAR_3 :
                                             VAR_14 ? VAR_2 : VAR_4) | VAR_1);
                if (VAR_12 < 0) {
                        VAR_10 = -VAR_5;
                        goto finish;
                }


                if (VAR_12 < 3) {
                        int VAR_16;

                        VAR_16 = FUNC_2(VAR_12, VAR_0, 3);
                        if (VAR_16 < 0) {
                                VAR_10 = -VAR_5;
                                goto finish;
                        }

                        FUNC_5(VAR_12);
                        VAR_12 = VAR_16;
                }
        }


        for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {

                if (VAR_9[VAR_11] < 0)
                        VAR_9[VAR_11] = VAR_12;
                else if (VAR_9[VAR_11] != VAR_11 && VAR_9[VAR_11] < 3) {

                        VAR_13[VAR_11] = FUNC_2(VAR_9[VAR_11], VAR_0, 3);
                        if (VAR_13[VAR_11] < 0) {
                                VAR_10 = -VAR_5;
                                goto finish;
                        }

                        VAR_9[VAR_11] = VAR_13[VAR_11];
                }
        }




        for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {

                if (VAR_9[VAR_11] == VAR_11) {


                        VAR_10 = FUNC_3(VAR_11, 0);
                        if (VAR_10 < 0)
                                goto finish;

                } else {
                        FUNC_0(VAR_9[VAR_11] > 2);

                        if (FUNC_1(VAR_9[VAR_11], VAR_11) < 0) {
                                VAR_10 = -VAR_5;
                                goto finish;
                        }
                }
        }

        VAR_10 = 0;

finish:


        FUNC_6(VAR_6);
        if (VAR_7 != VAR_6)
                FUNC_6(VAR_7);
        if (VAR_8 != VAR_6 && VAR_8 != VAR_7)
                FUNC_6(VAR_8);


        for (VAR_11 = 0; VAR_11 < 3; VAR_11++)
                FUNC_5(VAR_13[VAR_11]);


        FUNC_6(VAR_12);

        return VAR_10;
}
