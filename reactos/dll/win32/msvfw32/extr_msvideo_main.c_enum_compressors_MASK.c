
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ szDescription; int fccHandler; int fccType; } ;
struct codec_info {scalar_t__ hic; TYPE_2__ icinfo; } ;
typedef int icinfo ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {int biCompression; } ;
struct TYPE_11__ {TYPE_1__ bmiHeader; } ;
struct TYPE_10__ {TYPE_7__* lpbiIn; int fccType; } ;
typedef int LPARAM ;
typedef TYPE_2__ ICINFO ;
typedef int HWND ;
typedef scalar_t__ HIC ;
typedef int DWORD ;
typedef TYPE_3__ COMPVARS ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,TYPE_7__*,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__,TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,TYPE_2__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (char*,int ,int ) ;
 struct codec_info* FUNC_7 (int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static BOOL FUNC_9(HWND VAR_4, COMPVARS *VAR_5, BOOL VAR_6)
{
    UINT VAR_7, VAR_8 = 0;
    ICINFO VAR_9;

    VAR_7 = 0;

    while (FUNC_3(VAR_5->fccType, VAR_7, &VAR_9))
    {
        struct codec_info *VAR_10;
        DWORD VAR_11;
        HIC VAR_12;

        VAR_7++;

        VAR_12 = FUNC_4(VAR_9.fccType, VAR_9.fccHandler, VAR_3);

        if (VAR_12)
        {



            DWORD VAR_13 = VAR_9.fccHandler;

            if (!VAR_6 && VAR_5->lpbiIn)
            {
                if (FUNC_1(VAR_12, VAR_5->lpbiIn, ((void*)0)) != VAR_2)
                {
                    FUNC_6("fccHandler %s doesn't support input DIB format %d\n",
                          FUNC_8(VAR_9.fccHandler), VAR_5->lpbiIn->bmiHeader.biCompression);
                    FUNC_0(VAR_12);
                    continue;
                }
            }

            FUNC_2(VAR_12, &VAR_9, sizeof(VAR_9));
            VAR_9.fccHandler = VAR_13;

            VAR_11 = FUNC_5(VAR_4, VAR_0, 0, (LPARAM)VAR_9.szDescription);

            VAR_10 = FUNC_7(sizeof(*VAR_10));
            VAR_10->icinfo = VAR_9;
            VAR_10->hic = VAR_12;
            FUNC_5(VAR_4, VAR_1, VAR_11, (LPARAM)VAR_10);
        }
        VAR_8++;
    }

    return VAR_8 != 0;
}
