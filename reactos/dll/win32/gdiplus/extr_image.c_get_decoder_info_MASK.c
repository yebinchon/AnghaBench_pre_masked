
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Flags; scalar_t__ SigSize; size_t SigCount; int* SigPattern; int* SigMask; } ;
struct image_codec {TYPE_1__ info; } ;
typedef scalar_t__ UINT ;
struct TYPE_5__ {scalar_t__ QuadPart; } ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef int GpStatus ;
typedef size_t DWORD ;
typedef int const BYTE ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int const*,int,scalar_t__*) ;
 scalar_t__ FUNC_2 (int *,TYPE_2__,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char*,scalar_t__,int const,int const,int const,int const,int const,int const,int const,int const) ;
 struct image_codec* VAR_6 ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static GpStatus FUNC_5(IStream* VAR_7, const struct image_codec **VAR_8)
{
    BYTE VAR_9[8];
    const BYTE *VAR_10, *VAR_11;
    LARGE_INTEGER VAR_12;
    HRESULT VAR_13;
    UINT VAR_14;
    int VAR_15;
    DWORD VAR_16, VAR_17;


    VAR_12.QuadPart = 0;
    VAR_13 = FUNC_2(VAR_7, VAR_12, VAR_4, ((void*)0));
    if (FUNC_0(VAR_13)) return FUNC_4(VAR_13);



    VAR_13 = FUNC_1(VAR_7, VAR_9, 8, &VAR_14);
    if (FUNC_0(VAR_13)) return FUNC_4(VAR_13);
    if (VAR_13 == VAR_5 || VAR_14 == 0) return VAR_0;

    for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
        if ((VAR_6[VAR_15].info.Flags & VAR_1) &&
            VAR_14 >= VAR_6[VAR_15].info.SigSize)
        {
            for (VAR_17=0; VAR_17<VAR_6[VAR_15].info.SigCount; VAR_17++)
            {
                VAR_10 = &VAR_6[VAR_15].info.SigPattern[VAR_6[VAR_15].info.SigSize*VAR_17];
                VAR_11 = &VAR_6[VAR_15].info.SigMask[VAR_6[VAR_15].info.SigSize*VAR_17];
                for (VAR_16=0; VAR_16<VAR_6[VAR_15].info.SigSize; VAR_16++)
                    if ((VAR_9[VAR_16] & VAR_11[VAR_16]) != VAR_10[VAR_16])
                        break;
                if (VAR_16 == VAR_6[VAR_15].info.SigSize)
                {
                    *VAR_8 = &VAR_6[VAR_15];
                    return VAR_3;
                }
            }
        }
    }

    FUNC_3("no match for %i byte signature %x %x %x %x %x %x %x %x\n", VAR_14,
        VAR_9[0],VAR_9[1],VAR_9[2],VAR_9[3],
        VAR_9[4],VAR_9[5],VAR_9[6],VAR_9[7]);

    return VAR_0;
}
