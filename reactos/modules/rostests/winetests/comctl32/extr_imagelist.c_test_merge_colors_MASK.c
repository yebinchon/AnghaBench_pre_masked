
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hbmMask; int hbmImage; } ;
typedef TYPE_1__ IMAGEINFO ;
typedef int * HIMAGELIST ;
typedef int * HICON ;


 int * FUNC_0 (int ,int,int,int,int,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int,char*,...) ;
 int * FUNC_4 (int,int,int,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,TYPE_1__*) ;
 int * FUNC_7 (int *,int ,int *,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int *,int,int *) ;

__attribute__((used)) static void FUNC_9(void)
{
    HIMAGELIST VAR_10[8], VAR_11;
    int VAR_12[] = { VAR_0, VAR_0 | VAR_7, VAR_4, VAR_5, VAR_1, VAR_2, VAR_3, VAR_6 };
    HICON VAR_13;
    IMAGEINFO VAR_14;
    int VAR_15, VAR_16, VAR_17;

    VAR_13 = FUNC_0(VAR_8, 32, 32, 1, 1, VAR_9, VAR_9);
    FUNC_3(VAR_13 != ((void*)0), "failed to create hicon1\n");

    for (VAR_16 = 0; VAR_16 < 8; VAR_16++)
    {
        VAR_10[VAR_16] = FUNC_4(32, 32, VAR_12[VAR_16], 0, 3);
        FUNC_3(VAR_10[VAR_16] != ((void*)0), "failed to create himl[%d]\n", VAR_16);
        FUNC_3(0 == FUNC_8(VAR_10[VAR_16], -1, VAR_13), "Failed to add icon1 to himl[%d].\n", VAR_16);
        if (VAR_16 == 0 || VAR_16 == 1 || VAR_16 == 7)
        {
            FUNC_6(VAR_10[VAR_16], 0, &VAR_14);
            VAR_12[VAR_16] = FUNC_2(VAR_14.hbmImage);
        }
    }
    FUNC_1(VAR_13);
    for (VAR_16 = 0; VAR_16 < 8; VAR_16++)
        for (VAR_17 = 0; VAR_17 < 8; VAR_17++)
        {
            VAR_11 = FUNC_7(VAR_10[VAR_16], 0, VAR_10[VAR_17], 0, 0, 0);
            FUNC_3(VAR_11 != ((void*)0), "merge himl[%d], himl[%d] failed\n", VAR_16, VAR_17);

            FUNC_6(VAR_11, 0, &VAR_14);
            VAR_15 = FUNC_2(VAR_14.hbmImage);

            if (VAR_16 == 4 && VAR_17 == 7)
                FUNC_3(VAR_15 == 16,
                    "wrong biBitCount %d when merging lists %d (%d) and %d (%d)\n", VAR_15, VAR_16, VAR_12[VAR_16], VAR_17, VAR_12[VAR_17]);
            else
                FUNC_3(VAR_15 == (VAR_16 > VAR_17 ? VAR_12[VAR_16] : VAR_12[VAR_17]),
                    "wrong biBitCount %d when merging lists %d (%d) and %d (%d)\n", VAR_15, VAR_16, VAR_12[VAR_16], VAR_17, VAR_12[VAR_17]);
            FUNC_3(VAR_14.hbmMask != 0, "Imagelist merged from %d and %d had no mask\n", VAR_16, VAR_17);

            FUNC_5(VAR_11);
        }

    for (VAR_16 = 0; VAR_16 < 8; VAR_16++)
        FUNC_5(VAR_10[VAR_16]);
}
