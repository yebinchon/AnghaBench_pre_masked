
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int szSaveFileName ;
typedef int sfn ;
struct TYPE_12__ {int lStructSize; int nMaxFile; int Flags; size_t nFilterIndex; int Clsid; int FormatID; int FilenameExtension; int FormatDescription; struct TYPE_12__* lpstrFilter; struct TYPE_12__* lpstrFile; int hInstance; int hwndOwner; } ;
typedef TYPE_1__ WCHAR ;
typedef size_t UINT ;
typedef TYPE_1__ OPENFILENAMEW ;
typedef TYPE_1__ ImageCodecInfo ;
typedef int HWND ;
typedef int GUID ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (size_t,size_t,TYPE_1__*) ;
 int FUNC_2 (size_t*,size_t*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int ,int ,int ,int *) ;
 int FUNC_9 (TYPE_1__*,size_t,TYPE_1__**,size_t*,int ,char*,int ,...) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__* FUNC_12 (size_t) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(HWND VAR_10)
{
    OPENFILENAMEW VAR_11;
    ImageCodecInfo *VAR_12;
    WCHAR VAR_13[VAR_2];
    WCHAR *VAR_14;
    GUID VAR_15;
    UINT VAR_16;
    UINT VAR_17;
    size_t VAR_18;
    UINT VAR_19;
    WCHAR *VAR_20;

    FUNC_2(&VAR_16, &VAR_17);
    VAR_12 = FUNC_12(VAR_17);
    if (!VAR_12)
    {
        FUNC_0("malloc() failed in pSaveImageAs()\n");
        return;
    }

    FUNC_1(VAR_16, VAR_17, VAR_12);
    FUNC_3(VAR_8, &VAR_15);

    VAR_18 = 0;

    for (VAR_19 = 0; VAR_19 < VAR_16; ++VAR_19)
    {

        VAR_18 = VAR_18 + (((FUNC_13(VAR_12[VAR_19].FormatDescription) + (FUNC_13(VAR_12[VAR_19].FilenameExtension) * 2) + 5) * sizeof(WCHAR)));
    }


    VAR_18 = VAR_18 + (sizeof(WCHAR) * 2);

    VAR_14 = FUNC_12(VAR_18);
    if (!VAR_14)
    {
        FUNC_0("cannot allocate memory for filter mask in pSaveImageAs()");
        FUNC_11(VAR_12);
        return;
    }

    FUNC_10(VAR_13, sizeof(VAR_13));
    FUNC_10(VAR_14, VAR_18);
    FUNC_10(&VAR_11, sizeof(VAR_11));
    VAR_11.lStructSize = sizeof(VAR_11);
    VAR_11.hwndOwner = VAR_10;
    VAR_11.hInstance = VAR_7;
    VAR_11.lpstrFile = VAR_13;
    VAR_11.lpstrFilter = VAR_14;
    VAR_11.nMaxFile = VAR_2;
    VAR_11.Flags = VAR_4 | VAR_3;

    VAR_20 = VAR_14;

    for (VAR_19 = 0; VAR_19 < VAR_16; ++VAR_19)
    {
        FUNC_9(VAR_20, VAR_18, &VAR_20, &VAR_18, 0, L"%ls (%ls)", VAR_12[VAR_19].FormatDescription, VAR_12[VAR_19].FilenameExtension);


        VAR_20++;
        VAR_18 -= sizeof(*VAR_20);

        FUNC_9(VAR_20, VAR_18, &VAR_20, &VAR_18, 0, L"%ls", VAR_12[VAR_19].FilenameExtension);


        VAR_20++;
        VAR_18 -= sizeof(*VAR_20);

        if (FUNC_6(&VAR_15, &VAR_12[VAR_19].FormatID) != VAR_1)
        {
            VAR_11.nFilterIndex = VAR_19 + 1;
        }
    }

    if (FUNC_5(&VAR_11))
    {
        if (VAR_9)
        {

            FUNC_7(VAR_6, VAR_0);

            FUNC_0("FIXME: save animation\n");
            if (FUNC_4(VAR_8, VAR_13, &VAR_12[VAR_11.nFilterIndex - 1].Clsid, ((void*)0)) != VAR_5)
            {
                FUNC_0("GdipSaveImageToFile() failed\n");
            }

            FUNC_8(VAR_6, VAR_0, 0, ((void*)0));
        }
        else
        {

            if (FUNC_4(VAR_8, VAR_13, &VAR_12[VAR_11.nFilterIndex - 1].Clsid, ((void*)0)) != VAR_5)
            {
                FUNC_0("GdipSaveImageToFile() failed\n");
            }
        }
    }

    FUNC_11(VAR_14);
    FUNC_11(VAR_12);
}
