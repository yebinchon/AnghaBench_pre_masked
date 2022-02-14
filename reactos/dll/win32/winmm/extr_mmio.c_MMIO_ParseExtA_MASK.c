
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPSTR ;
typedef int * LPCSTR ;
typedef int FOURCC ;
typedef int CHAR ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int,char) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,char) ;

__attribute__((used)) static FOURCC FUNC_10(LPCSTR VAR_1)
{



    FOURCC VAR_2 = 0;


    LPSTR VAR_3;
    LPSTR VAR_4;

    FUNC_1("(%s)\n", FUNC_3(VAR_1));

    if (!VAR_1)
 return VAR_2;


    VAR_4 = FUNC_9(VAR_1,'.');

    if (!VAR_4) {
         FUNC_0("No . in szFileName: %s\n", FUNC_3(VAR_1));
    } else {
        CHAR VAR_5[5];


        VAR_3 = FUNC_7(VAR_4,'+');
        if (VAR_3) {

            if (VAR_3 - VAR_4 - 1 > 4)
                FUNC_2("Extension length > 4\n");
            FUNC_4(VAR_5, VAR_4 + 1, FUNC_5(VAR_3-VAR_4,5));

        } else {

            if (FUNC_8(VAR_4) > 4) {
                FUNC_2("Extension length > 4\n");
            }
            FUNC_4(VAR_5, VAR_4 + 1, 5);
        }
        FUNC_1("Got extension: %s\n", FUNC_3(VAR_5));


        VAR_2 = FUNC_6(VAR_5, VAR_0);
    }
    return VAR_2;
}
