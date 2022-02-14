
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int _u8 ;
typedef scalar_t__ _u32 ;
typedef int _i32 ;
struct TYPE_3__ {int FileLen; } ;
typedef TYPE_1__ SlFsFileInfo_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int*,scalar_t__) ;
 int VAR_3 ;
 int* VAR_4 ;
 int * VAR_5 ;
 int FUNC_3 (int ,int *,int *,int ) ;
 int FUNC_4 (int *,int ,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,int ,int *,int *) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,int*,int) ;
 int FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 (char const*,char const*) ;

__attribute__((used)) static bool FUNC_9 (_u8 *VAR_6) {
    SlFsFileInfo_t VAR_7;
    _u32 VAR_8, VAR_9 = 0;
    _i32 VAR_10;


    if (0 == FUNC_5(VAR_6, VAR_3, ((void*)0), &VAR_10)) {

        FUNC_4(VAR_6, 0, &VAR_7);

        if (VAR_7.FileLen > VAR_2) {
            VAR_7.FileLen -= VAR_2;
            FUNC_1(VAR_1, VAR_7.FileLen);
            do {
                if ((VAR_7.FileLen - VAR_9) > VAR_0) {
                    VAR_8 = VAR_0;
                }
                else {
                    VAR_8 = VAR_7.FileLen - VAR_9;
                }

                VAR_9 += FUNC_6(VAR_10, VAR_9, VAR_4, VAR_8);
                FUNC_2(VAR_4, VAR_8);
            } while (VAR_9 < VAR_7.FileLen);

            FUNC_0 (VAR_4);


            for (_u32 VAR_11 = 0; VAR_11 < (VAR_2 / 2); VAR_11++) {
                FUNC_7 ((char *)&VAR_5[(VAR_11 * 2)], 3, "%02x", VAR_4[VAR_11]);
            }


            FUNC_6(VAR_10, VAR_9, VAR_4, VAR_2);
            FUNC_3 (VAR_10, ((void*)0), ((void*)0), 0);
            VAR_4[VAR_2] = '\0';

            if (!FUNC_8((const char *)VAR_5, (const char *)VAR_4)) {

                return 1;
            }
        }

        FUNC_3(VAR_10, ((void*)0), ((void*)0), 0);
    }
    return 0;
}
