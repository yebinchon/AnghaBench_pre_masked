
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ULONGLONG ;
struct TYPE_12__ {int cb; TYPE_2__* aIndex; } ;
struct TYPE_8__ {TYPE_3__* pInputPin; } ;
struct TYPE_11__ {int offset; TYPE_5__* oldindex; int EndOfFile; TYPE_1__ Parser; int CurrentChunkOffset; } ;
struct TYPE_10__ {int pReader; } ;
struct TYPE_9__ {int dwOffset; int dwChunkId; char* dwFlags; char* dwSize; } ;
typedef TYPE_3__ PullPin ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BYTE ;
typedef TYPE_4__ AVISplitterImpl ;
typedef TYPE_5__ AVIOLDINDEX ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (char*,char*,char*,int,char*,int ) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int,int,int *) ;
 int VAR_1 ;
 int FUNC_5 (char*,char*,...) ;
 char* FUNC_6 (char*,int) ;
 int FUNC_7 (char,float,char,char) ;
 int FUNC_8 (int) ;

__attribute__((used)) static HRESULT FUNC_9(AVISplitterImpl *VAR_2)
{
    ULONGLONG VAR_3 = FUNC_0(VAR_2->CurrentChunkOffset) - sizeof(DWORD);
    AVIOLDINDEX *VAR_4 = VAR_2->oldindex;
    int VAR_5 = -1;
    DWORD VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_4->cb / sizeof(VAR_4->aIndex[0]); ++VAR_6)
    {
        DWORD VAR_7, VAR_8 = 0, VAR_9, VAR_10;
        PullPin *VAR_11 = VAR_2->Parser.pInputPin;

        VAR_9 = VAR_4->aIndex[VAR_6].dwOffset;
        VAR_10 = VAR_4->aIndex[VAR_6].dwChunkId;

        FUNC_5("dwChunkId: %.4s\n", (char *)&VAR_10);
        FUNC_5("dwFlags: %08x\n", VAR_4->aIndex[VAR_6].dwFlags);
        FUNC_5("dwOffset (%s): %08x\n", VAR_5 ? "relative" : "absolute", VAR_9);
        FUNC_5("dwSize: %08x\n", VAR_4->aIndex[VAR_6].dwSize);


        if (VAR_5 == -1)
        {
            FUNC_4(VAR_11->pReader, VAR_9, sizeof(DWORD), (BYTE *)&VAR_7);
            VAR_5 = (VAR_10 != VAR_7);

            if (VAR_10 == FUNC_7('7','F','x','x')
                && ((char *)&VAR_7)[0] == 'i' && ((char *)&VAR_7)[1] == 'x')
                VAR_5 = VAR_0;

            if (VAR_5)
            {
                if (VAR_9 + VAR_3 < FUNC_0(VAR_2->EndOfFile))
                    FUNC_4(VAR_11->pReader, VAR_9 + VAR_3, sizeof(DWORD), (BYTE *)&VAR_8);

                if (VAR_10 == FUNC_7('7','F','x','x')
                    && ((char *)&VAR_8)[0] == 'i' && ((char *)&VAR_8)[1] == 'x')
                {

                }
                else if (VAR_8 != VAR_10)
                {
                    FUNC_2("Faulty index or bug in handling: Wanted FCC: %s, Abs FCC: %s (@ %x), Rel FCC: %s (@ %s)\n",
                        FUNC_6((char *)&VAR_10, 4), FUNC_6((char *)&VAR_7, 4), VAR_9,
                        FUNC_6((char *)&VAR_8, 4), FUNC_8(VAR_3 + VAR_9));
                    VAR_5 = -1;
                }
                else
                    FUNC_5("Scanned dwChunkId: %s\n", FUNC_6((char *)&VAR_8, 4));
            }
            else if (!VAR_5)
                FUNC_5("Scanned dwChunkId: %s\n", FUNC_6((char *)&VAR_7, 4));
        }

        else break;
    }

    if (VAR_5 == -1)
    {
        FUNC_3("Dropping index: no idea whether it is relative or absolute\n");
        FUNC_1(VAR_2->oldindex);
        VAR_2->oldindex = ((void*)0);
    }
    else if (!VAR_5)
        VAR_2->offset = 0;
    else
        VAR_2->offset = (DWORD)VAR_3;

    return VAR_1;
}
