
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int LPSTR ;
typedef int INT ;
typedef int * HFONT ;
typedef int * HDC ;
typedef int DWORD ;
typedef int CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int *,int *,int ,int ,int ,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (char*) ;

__attribute__((used)) static void FUNC_13(LPSTR VAR_11, INT VAR_12, INT VAR_13, INT VAR_14)
{
    int VAR_15;
    HDC VAR_16 = ((void*)0);
    HFONT VAR_17 = ((void*)0);

    DWORD VAR_18[VAR_5];
    USHORT VAR_19;

    VAR_16 = FUNC_0(((void*)0));
    if (!VAR_16)
    {
        FUNC_11(VAR_9, "CreateCompatibleDC failed with error %d!\n", FUNC_7());
        goto Cleanup;
    }

    VAR_15 = -FUNC_8(VAR_12, FUNC_6(VAR_16, VAR_6), 72);
    VAR_17 = FUNC_1(VAR_15, 0, 0, 0, VAR_4, VAR_2, VAR_2, VAR_2,
                        VAR_0, VAR_8, VAR_1,
                        VAR_7, VAR_3, VAR_11);
    if (!VAR_17)
    {
        FUNC_11(VAR_9, "CreateFont failed with error %d!\n", FUNC_7());
        goto Cleanup;
    }

    for (VAR_19 = 0; VAR_19 < 256; VAR_19++)
    {
        FUNC_9(VAR_16, VAR_17, VAR_13, VAR_14, (CHAR)VAR_19, VAR_18);







        FUNC_4(VAR_18);

    }

Cleanup:
    if (VAR_17)
        FUNC_3(VAR_17);

    if (VAR_16)
        FUNC_2(VAR_16);
}
