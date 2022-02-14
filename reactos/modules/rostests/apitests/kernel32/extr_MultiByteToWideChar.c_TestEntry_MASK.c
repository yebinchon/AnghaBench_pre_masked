
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {scalar_t__ DestLen; char const* Src; int CheckLen; int Return; int * CheckDest; int LineNo; int Error; int SrcLen; int Flags; int CodePage; scalar_t__ SamePointer; } ;
typedef TYPE_1__ ENTRY ;
typedef int DWORD ;
typedef int Buffer ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,char const*,int ,int *,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,int ,...) ;

__attribute__((used)) static void FUNC_5(const ENTRY *VAR_1)
{
    int VAR_2, VAR_3;
    WCHAR VAR_4[VAR_0];
    DWORD VAR_5;

    FUNC_0(VAR_4, sizeof(VAR_4), 0x7F);
    FUNC_3(0xBEAF);

    if (VAR_1->DestLen == 0)
    {

        VAR_2 = FUNC_2(VAR_1->CodePage, VAR_1->Flags, VAR_1->Src,
                                  VAR_1->SrcLen, ((void*)0), 0);
    }
    else
    {
        FUNC_4(VAR_1->DestLen >= VAR_1->CheckLen - 1,
           "Line %d: DestLen was shorter than (CheckLen - 1)\n", VAR_1->LineNo);

        if (VAR_1->SamePointer)
        {

            VAR_2 = FUNC_2(VAR_1->CodePage, VAR_1->Flags,
                                      (const char *)VAR_4, VAR_1->SrcLen,
                                      VAR_4, VAR_1->DestLen);
        }
        else
        {

            VAR_2 = FUNC_2(VAR_1->CodePage, VAR_1->Flags,
                                      VAR_1->Src, VAR_1->SrcLen,
                                      VAR_4, VAR_1->DestLen);
        }
    }

    VAR_5 = FUNC_1();


    FUNC_4(VAR_2 == VAR_1->Return, "Line %d: ret expected %d, got %d\n",
       VAR_1->LineNo, VAR_1->Return, VAR_2);


    FUNC_4(VAR_5 == VAR_1->Error,
       "Line %d: Wrong last error. Expected %lu, got %lu\n",
       VAR_1->LineNo, VAR_1->Error, VAR_5);

    if (VAR_1->DestLen)
    {

        for (VAR_3 = 0; VAR_3 < VAR_1->CheckLen; ++VAR_3)
        {
            FUNC_4(VAR_4[VAR_3] == VAR_1->CheckDest[VAR_3], "Line %d: Buffer[%d] expected %d, got %d\n",
               VAR_1->LineNo, VAR_3, VAR_1->CheckDest[VAR_3], VAR_4[VAR_3]);
        }
    }
}
