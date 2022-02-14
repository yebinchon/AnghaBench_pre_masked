
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int * PINICACHESECTION ;
typedef int * PINICACHEKEY ;
typedef int * PINICACHE ;
typedef char* PCHAR ;
typedef int NTSTATUS ;
typedef int INICACHE ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int * FUNC_1 (int *,char*,int ,char*,int ) ;
 int * FUNC_2 (int *,char*,int ) ;
 char* FUNC_3 (char*,char**,int *) ;
 char* FUNC_4 (char*,char**,int *,int ) ;
 char* FUNC_5 (char*,char**,int *) ;
 char* FUNC_6 (char*) ;
 char* FUNC_7 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

NTSTATUS
FUNC_9(
    PINICACHE *VAR_4,
    PCHAR VAR_5,
    ULONG VAR_6,
    BOOLEAN VAR_7)
{
    PCHAR VAR_8;

    PINICACHESECTION VAR_9;
    PINICACHEKEY VAR_10;

    PCHAR VAR_11;
    ULONG VAR_12;

    PCHAR VAR_13;
    ULONG VAR_14;

    PCHAR VAR_15;
    ULONG VAR_16;


    *VAR_4 = (PINICACHE)FUNC_8(VAR_1,
                                        VAR_0,
                                        sizeof(INICACHE));
    if (*VAR_4 == ((void*)0))
    {
        FUNC_0("RtlAllocateHeap() failed\n");
        return VAR_2;
    }


    VAR_9 = ((void*)0);
    VAR_8 = VAR_5;
    while (VAR_8 != ((void*)0) && *VAR_8 != 0)
    {
        VAR_8 = FUNC_7(VAR_8);
        if (VAR_8 == ((void*)0))
            continue;

        if (*VAR_8 == '[')
        {
            VAR_9 = ((void*)0);
            VAR_8++;

            VAR_8 = FUNC_5(VAR_8,
                                         &VAR_11,
                                         &VAR_12);

            FUNC_0("[%.*s]\n", VAR_12, VAR_11);

            VAR_9 = FUNC_2(*VAR_4,
                                         VAR_11,
                                         VAR_12);
            if (VAR_9 == ((void*)0))
            {
                FUNC_0("IniCacheAddSection() failed\n");
                VAR_8 = FUNC_6(VAR_8);
                continue;
            }
        }
        else
        {
            if (VAR_9 == ((void*)0))
            {
                VAR_8 = FUNC_6(VAR_8);
                continue;
            }

            VAR_8 = FUNC_3(VAR_8,
                                     &VAR_13,
                                     &VAR_14);

            VAR_8 = FUNC_4(VAR_8,
                                      &VAR_15,
                                      &VAR_16,
                                      VAR_7);

            FUNC_0("'%.*s' = '%.*s'\n", VAR_14, VAR_13, VAR_16, VAR_15);

            VAR_10 = FUNC_1(VAR_9,
                                 VAR_13,
                                 VAR_14,
                                 VAR_15,
                                 VAR_16);
            if (VAR_10 == ((void*)0))
            {
                FUNC_0("IniCacheAddKey() failed\n");
            }
        }
    }

    return VAR_3;
}
