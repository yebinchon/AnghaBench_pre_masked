
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct path_header {int count; int flags; int version; } ;
struct TYPE_7__ {int Count; int * Types; TYPE_1__* Points; } ;
struct TYPE_8__ {TYPE_2__ pathdata; } ;
struct TYPE_6__ {short X; short Y; } ;
typedef TYPE_3__ GpPath ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int ,int) ;

DWORD FUNC_2(GpPath *VAR_2, void *VAR_3)
{
    struct path_header *VAR_4 = VAR_3;
    BOOL VAR_5 = FUNC_0(VAR_2);
    DWORD VAR_6, VAR_7;
    BYTE *VAR_8;

    VAR_7 = sizeof(struct path_header) + VAR_2->pathdata.Count;
    if (VAR_5)
        VAR_7 += sizeof(short[2]) * VAR_2->pathdata.Count;
    else
        VAR_7 += sizeof(float[2]) * VAR_2->pathdata.Count;
    VAR_7 = (VAR_7 + 3) & ~3;

    if (!VAR_3) return VAR_7;

    VAR_4->version = VAR_1;
    VAR_4->count = VAR_2->pathdata.Count;
    VAR_4->flags = VAR_5 ? VAR_0 : 0;

    if (VAR_5)
    {
        short *VAR_9 = (short*)(VAR_4 + 1);
        for (VAR_6 = 0; VAR_6 < VAR_2->pathdata.Count; VAR_6++)
        {
            VAR_9[2*VAR_6] = VAR_2->pathdata.Points[VAR_6].X;
            VAR_9[2*VAR_6 + 1] = VAR_2->pathdata.Points[VAR_6].Y;
        }
        VAR_8 = (BYTE*)(VAR_9 + 2*VAR_6);
    }
    else
    {
        float *VAR_10 = (float*)(VAR_4 + 1);
        for (VAR_6 = 0; VAR_6 < VAR_2->pathdata.Count; VAR_6++)
        {
            VAR_10[2*VAR_6] = VAR_2->pathdata.Points[VAR_6].X;
            VAR_10[2*VAR_6 + 1] = VAR_2->pathdata.Points[VAR_6].Y;
        }
        VAR_8 = (BYTE*)(VAR_10 + 2*VAR_6);
    }

    for (VAR_6=0; VAR_6<VAR_2->pathdata.Count; VAR_6++)
        VAR_8[VAR_6] = VAR_2->pathdata.Types[VAR_6];
    FUNC_1(VAR_8 + VAR_6, 0, ((VAR_2->pathdata.Count + 3) & ~3) - VAR_2->pathdata.Count);
    return VAR_7;
}
