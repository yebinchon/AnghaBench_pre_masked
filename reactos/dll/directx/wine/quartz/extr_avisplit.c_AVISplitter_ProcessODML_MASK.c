
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int cb; int * dwFuture; int dwGrandFrames; } ;
struct TYPE_6__ {TYPE_3__ ExtHeader; } ;
struct TYPE_5__ {scalar_t__ cb; int fcc; } ;
typedef TYPE_1__ RIFFCHUNK ;
typedef int LPCSTR ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BYTE ;
typedef TYPE_2__ AVISplitterImpl ;
typedef TYPE_3__ AVIEXTHEADER ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;


__attribute__((used)) static HRESULT FUNC_2(AVISplitterImpl * VAR_1, const BYTE * VAR_2, DWORD VAR_3)
{
    const RIFFCHUNK * VAR_4;

    for (VAR_4 = (const RIFFCHUNK *)VAR_2;
         ((const BYTE *)VAR_4 >= VAR_2) && ((const BYTE *)VAR_4 + sizeof(RIFFCHUNK) < VAR_2 + VAR_3) && (VAR_4->cb > 0);
         VAR_4 = (const RIFFCHUNK *)((const BYTE*)VAR_4 + sizeof(RIFFCHUNK) + VAR_4->cb)
        )
    {
        switch (VAR_4->fcc)
        {
        case 128:
            {
                int VAR_5;
                const AVIEXTHEADER * VAR_6 = (const AVIEXTHEADER *)VAR_4;

                FUNC_1("processing extension header\n");
                if (VAR_6->cb != sizeof(AVIEXTHEADER) - sizeof(RIFFCHUNK))
                {
                    FUNC_0("Size: %u\n", VAR_6->cb);
                    break;
                }
                FUNC_1("dwGrandFrames: %u\n", VAR_6->dwGrandFrames);
                for (VAR_5 = 0; VAR_5 < 61; ++VAR_5)
                    if (VAR_6->dwFuture[VAR_5])
                        FUNC_0("dwFuture[%i] = %u (0x%08x)\n", VAR_5, VAR_6->dwFuture[VAR_5], VAR_6->dwFuture[VAR_5]);
                VAR_1->ExtHeader = *VAR_6;
                break;
            }
        default:
            FUNC_0("unknown chunk type \"%.04s\" ignored\n", (LPCSTR)&VAR_4->fcc);
        }
    }

    return VAR_0;
}
