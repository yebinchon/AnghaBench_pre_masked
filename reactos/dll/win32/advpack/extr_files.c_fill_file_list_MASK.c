
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct FILELIST {struct FILELIST* next; int DoExtract; int FileName; } ;
struct TYPE_4__ {int Operation; struct FILELIST* FileList; } ;
typedef TYPE_1__ SESSION ;
typedef int LPCSTR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static DWORD FUNC_2(SESSION *VAR_3, LPCSTR VAR_4, LPCSTR VAR_5)
{
    DWORD VAR_6 = 0;
    struct FILELIST *VAR_7;

    VAR_3->Operation |= VAR_0;
    if (FUNC_1(VAR_3, VAR_4) != VAR_2)
    {
        VAR_3->Operation &= ~VAR_0;
        return -1;
    }

    VAR_7 = VAR_3->FileList;
    while (VAR_7)
    {
        if (!FUNC_0(VAR_7->FileName, VAR_5))
            VAR_7->DoExtract = VAR_1;
        else
            VAR_6++;

        VAR_7 = VAR_7->next;
    }

    VAR_3->Operation &= ~VAR_0;
    return VAR_6;
}
