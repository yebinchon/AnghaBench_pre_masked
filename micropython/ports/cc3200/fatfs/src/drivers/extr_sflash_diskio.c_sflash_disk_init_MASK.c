
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _i32 ;
typedef int SlFsFileInfo_t ;
typedef int DRESULT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int ,int *,int *,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int ,int *,int *) ;
 int VAR_12 ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int VAR_13 ;

DRESULT FUNC_11 (void) {
    _i32 VAR_14;
    SlFsFileInfo_t VAR_15;

    if (!VAR_10) {

        FUNC_0 ((VAR_7 = FUNC_2(VAR_4)) != ((void*)0));
        VAR_10 = 1;
        VAR_11 = VAR_6;
        VAR_9 = 0;



        FUNC_4 (VAR_3 - 1);
        FUNC_9 (&VAR_13, VAR_5);
        if (!FUNC_7(VAR_8, 0, &VAR_15)) {
            FUNC_10 (&VAR_13);
            return VAR_2;
        }
        FUNC_10 (&VAR_13);


        for (int VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
            FUNC_4 (VAR_16);
            FUNC_9 (&VAR_13, VAR_5);

            if (FUNC_7(VAR_8, 0, &VAR_15) != 0) {
                if (!FUNC_8(VAR_8, FUNC_1(VAR_4, 0), ((void*)0), &VAR_14)) {
                    FUNC_6(VAR_14, ((void*)0), ((void*)0), 0);
                    FUNC_10 (&VAR_13);
                    FUNC_3(VAR_7, 0xFF, VAR_4);
                    if (!FUNC_5(VAR_0, VAR_12)) {
                        return VAR_1;
                    }
                }
                else {

                    FUNC_10 (&VAR_13);
                    return VAR_1;
                }
            }
            FUNC_10 (&VAR_13);
        }
    }
    return VAR_2;
}
