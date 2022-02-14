
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int szSearchPath ;
typedef int szFileTypes ;
struct TYPE_9__ {int * cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATAW ;
typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_10__ {struct TYPE_10__* Prev; struct TYPE_10__* Next; int * FileName; int FilenameExtension; } ;
typedef TYPE_2__ SHIMGVW_FILENODE ;
typedef int LPWSTR ;
typedef TYPE_2__ ImageCodecInfo ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_1__*) ;
 int FUNC_4 (size_t,size_t,TYPE_2__*) ;
 int FUNC_5 (size_t*,size_t*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 void* FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int * FUNC_13 (int *,char*) ;

__attribute__((used)) static SHIMGVW_FILENODE*
FUNC_14(LPWSTR VAR_2)
{
    HANDLE VAR_3;
    WCHAR *VAR_4;
    WCHAR VAR_5[VAR_1];
    WCHAR VAR_6[VAR_1];
    WCHAR VAR_7[VAR_1];
    WIN32_FIND_DATAW VAR_8;
    SHIMGVW_FILENODE *VAR_9 = ((void*)0);
    SHIMGVW_FILENODE *VAR_10 = ((void*)0);
    SHIMGVW_FILENODE *VAR_11 = ((void*)0);
    ImageCodecInfo *VAR_12;
    UINT VAR_13;
    UINT VAR_14;
    UINT VAR_15;

    FUNC_8(VAR_5, sizeof(VAR_5), VAR_2);
    FUNC_7(VAR_5);

    FUNC_5(&VAR_13, &VAR_14);
    VAR_12 = FUNC_11(VAR_14);
    if (!VAR_12)
    {
        FUNC_0("malloc() failed in pLoadFileList()\n");
        return ((void*)0);
    }

    FUNC_4(VAR_13, VAR_14, VAR_12);

    VAR_10 = FUNC_11(sizeof(SHIMGVW_FILENODE));
    if (!VAR_10)
    {
        FUNC_0("malloc() failed in pLoadFileList()\n");
        FUNC_10(VAR_12);
        return ((void*)0);
    }

    VAR_11 = VAR_10;

    for (VAR_15 = 0; VAR_15 < VAR_13; ++VAR_15)
    {
        FUNC_8(VAR_7, sizeof(VAR_7), VAR_12[VAR_15].FilenameExtension);

        VAR_4 = FUNC_13(VAR_7, L";");
        while (VAR_4 != ((void*)0))
        {
            FUNC_6(VAR_6, VAR_5, VAR_4);

            VAR_3 = FUNC_2(VAR_6, &VAR_8);
            if (VAR_3 != VAR_0)
            {
                do
                {
                    FUNC_6(VAR_11->FileName, VAR_5, VAR_8.cFileName);



                    if (FUNC_12(VAR_2, VAR_11->FileName) == 0)
                    {
                        VAR_9 = VAR_11;
                    }

                    VAR_11->Next = FUNC_11(sizeof(SHIMGVW_FILENODE));


                    if (!VAR_11->Next)
                    {
                        FUNC_0("malloc() failed in pLoadFileList()\n");

                        VAR_11->Next = VAR_10;
                        VAR_10->Prev = VAR_11;

                        FUNC_1(VAR_3);
                        FUNC_10(VAR_12);
                        return VAR_11;
                    }

                    VAR_11->Next->Prev = VAR_11;
                    VAR_11 = VAR_11->Next;
                }
                while (FUNC_3(VAR_3, &VAR_8) != 0);

                FUNC_1(VAR_3);
            }

            VAR_4 = FUNC_13(((void*)0), L";");
        }
    }



    if (VAR_9 == ((void*)0))
    {
        FUNC_9(VAR_11->FileName, VAR_1, VAR_2);
        VAR_9 = VAR_11;
    }
    else
    {
        VAR_11 = VAR_11->Prev;
        FUNC_10(VAR_11->Next);
    }


    VAR_11->Next = VAR_10;
    VAR_10->Prev = VAR_11;
    VAR_11 = VAR_9;

    FUNC_10(VAR_12);

    return VAR_11;
}
