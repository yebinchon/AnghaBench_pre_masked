
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* offset; void* lMap; } ;
struct TYPE_5__ {unsigned int wMapLen; TYPE_2__* Map; } ;
typedef int HLPFILE_MAP ;
typedef TYPE_1__ HLPFILE ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 void* FUNC_0 (int *,unsigned int) ;
 unsigned int FUNC_1 (int *,int) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,char*,int **,int **) ;
 TYPE_2__* FUNC_4 (int ,int ,unsigned int) ;
 int VAR_1 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static BOOL FUNC_6(HLPFILE *VAR_2)
{
    BYTE *VAR_3, *VAR_4;
    unsigned VAR_5, VAR_6;

    if (!FUNC_3(VAR_2, "|CTXOMAP", &VAR_3, &VAR_4))
    {FUNC_5("no map section\n"); return VAR_0;}

    VAR_5 = FUNC_1(VAR_3, 9);
    VAR_2->Map = FUNC_4(FUNC_2(), 0, VAR_5 * sizeof(HLPFILE_MAP));
    if (!VAR_2->Map) return VAR_0;
    VAR_2->wMapLen = VAR_5;
    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
    {
        VAR_2->Map[VAR_6].lMap = FUNC_0(VAR_3+11,VAR_6*8);
        VAR_2->Map[VAR_6].offset = FUNC_0(VAR_3+11,VAR_6*8+4);
    }
    return VAR_1;
}
