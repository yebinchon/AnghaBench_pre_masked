
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int data ;
typedef int VOID ;
typedef int ULONG ;
typedef int PCONFIGURATION_COMPONENT_DATA ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int *,int *,int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,char*,int) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int,char*,char*) ;
 int FUNC_8 (int,char*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,char*) ;
 char* FUNC_13 (char*,char) ;

VOID FUNC_14
(PCONFIGURATION_COMPONENT_DATA VAR_2,
 char *VAR_3,
 int VAR_4,
 ULONG *VAR_5,
 ULONG *VAR_6,
 ULONG *VAR_7)
{
    int VAR_8 = 0, VAR_9 = VAR_4;
    char *VAR_10, VAR_11[64], VAR_12[256], *VAR_13, VAR_14[64];
    wchar_t VAR_15[64];
    PCONFIGURATION_COMPONENT_DATA VAR_16;

    FUNC_1(VAR_15, VAR_3);


    FUNC_0
        (VAR_2,
         VAR_0,
         VAR_1,
         0,
         0,
         (ULONG)-1,
         ((void*)0),
         ((void*)0),
         0,
         &VAR_16);


    for (VAR_10 = ""; FUNC_7(VAR_9, VAR_10, VAR_11) == 1; )
    {
        VAR_8 = FUNC_6(VAR_9, VAR_11);
        if (VAR_8 > 256 || VAR_8 < 0)
        {
            FUNC_10("Warning: not getting prop %s (too long: %d)\n",
                   VAR_11, VAR_8);
            continue;
        }
        FUNC_5(VAR_9, VAR_11, VAR_12, sizeof(VAR_12));


        if (!FUNC_11(VAR_11, "device_type"))
            FUNC_12(VAR_14, (char *)VAR_12);

        FUNC_1(VAR_15, VAR_11);


        FUNC_12(VAR_12, VAR_11);
        VAR_10 = VAR_12;
    }
    for (VAR_9 = FUNC_4(VAR_9); VAR_9; VAR_9 = FUNC_9(VAR_9))
    {
        FUNC_8(VAR_9, VAR_12, sizeof(VAR_12));
        VAR_13 = FUNC_13(VAR_12, '/');
        if (VAR_13) VAR_13++; else continue;
        FUNC_14
            (VAR_16, VAR_13, VAR_9, VAR_5, VAR_6, VAR_7);
    }
}
