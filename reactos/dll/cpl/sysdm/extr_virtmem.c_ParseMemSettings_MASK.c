
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int szDrive ;
typedef int VOID ;
struct TYPE_5__ {scalar_t__ Count; TYPE_1__* Pagefile; int szPagingFiles; } ;
struct TYPE_4__ {int * pszVolume; int szDrive; int bUsed; scalar_t__ NewMaxSize; scalar_t__ NewMinSize; scalar_t__ OldMaxSize; scalar_t__ OldMinSize; } ;
typedef int TCHAR ;
typedef TYPE_2__* PVIRTMEM ;
typedef int * LPTSTR ;
typedef scalar_t__ INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int *,int,int *,int *,int *,int *,int ) ;
 int * FUNC_5 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,int) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *,int *,int) ;
 scalar_t__ FUNC_12 (int *) ;

__attribute__((used)) static VOID
FUNC_13(PVIRTMEM VAR_3)
{
    TCHAR VAR_4[1024];
    LPTSTR VAR_5 = VAR_4;
    TCHAR VAR_6[3];
    TCHAR VAR_7[VAR_1 + 1];
    INT VAR_8;
    INT VAR_9;
    INT VAR_10;
    INT VAR_11 = 0;
    INT VAR_12;

    VAR_10 = FUNC_1(1023,
                                      VAR_4);

    while (VAR_10 != 0)
    {
        VAR_12 = FUNC_12(VAR_5) + 1;
        VAR_10 -= VAR_12;

        VAR_5 = FUNC_9(VAR_5);


        FUNC_11(VAR_6, VAR_5, sizeof(VAR_6) / sizeof(TCHAR));

        if (FUNC_0(VAR_5) == VAR_0)
        {
            VAR_8 = -1;
            VAR_9 = -1;


            if (!FUNC_8(VAR_3->szPagingFiles, VAR_6, 2))
            {
                FUNC_2(VAR_3->szPagingFiles,
                                 &VAR_8,
                                 &VAR_9);
            }

            VAR_3->Pagefile[VAR_11].OldMinSize = VAR_8;
            VAR_3->Pagefile[VAR_11].OldMaxSize = VAR_9;
            VAR_3->Pagefile[VAR_11].NewMinSize = VAR_8;
            VAR_3->Pagefile[VAR_11].NewMaxSize = VAR_9;
            VAR_3->Pagefile[VAR_11].bUsed = VAR_2;
            FUNC_10(VAR_3->Pagefile[VAR_11].szDrive, VAR_6);



            if (FUNC_4(VAR_5,
                                     VAR_7,
                                     VAR_1 + 1,
                                     ((void*)0),
                                     ((void*)0),
                                     ((void*)0),
                                     ((void*)0),
                                     0))
            {
                VAR_3->Pagefile[VAR_11].pszVolume = FUNC_5(FUNC_3(),
                                                                0,
                                                                (FUNC_7(VAR_7) + 1) * sizeof(TCHAR));
                if (VAR_3->Pagefile[VAR_11].pszVolume != ((void*)0))
                    FUNC_6(VAR_3->Pagefile[VAR_11].pszVolume, VAR_7);
            }

            VAR_11++;
        }

        VAR_5 += VAR_12;
    }

    VAR_3->Count = VAR_11;
}
