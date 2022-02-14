
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hFile; } ;
typedef TYPE_1__ SIP_SUBJECTINFO ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int *,scalar_t__,scalar_t__*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,TYPE_1__*,scalar_t__*,scalar_t__,scalar_t__*,int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static BOOL FUNC_4(SIP_SUBJECTINFO *VAR_5,
 DWORD *VAR_6, DWORD VAR_7, DWORD *VAR_8,
 BYTE *VAR_9)
{
    BOOL VAR_10;

    FUNC_3("(%p %p %d %p %p)\n", VAR_5, VAR_6, VAR_7,
          VAR_8, VAR_9);

    if (!VAR_9)
    {
        *VAR_8 = FUNC_0(VAR_5->hFile, ((void*)0));
         VAR_10 = VAR_3;
    }
    else
    {
        DWORD VAR_11 = FUNC_0(VAR_5->hFile, ((void*)0));

        if (*VAR_8 < VAR_11)
        {
            *VAR_8 = VAR_11;
            FUNC_2(VAR_0);
            VAR_10 = VAR_1;
        }
        else
        {
            VAR_10 = FUNC_1(VAR_5->hFile, VAR_9, VAR_11,
             VAR_8, ((void*)0));
            if (VAR_10)
                *VAR_6 = VAR_4 | VAR_2;
        }
    }
    return VAR_10;
}
