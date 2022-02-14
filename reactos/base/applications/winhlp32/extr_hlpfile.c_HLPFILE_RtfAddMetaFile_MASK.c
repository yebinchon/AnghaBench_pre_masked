
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RtfData {int dummy; } ;
typedef int ULONG ;
typedef int HLPFILE ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int const*,int) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct RtfData*,int *,int const*,int,int) ;
 int * FUNC_4 (int const*,int,int,int ,int **) ;
 scalar_t__ FUNC_5 (struct RtfData*,char*) ;
 scalar_t__ FUNC_6 (struct RtfData*,int const*,int) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int const**) ;
 unsigned int FUNC_10 (int const**) ;
 int FUNC_11 (char*,char*,unsigned int,int,int) ;

__attribute__((used)) static BOOL FUNC_12(struct RtfData* VAR_1, HLPFILE* VAR_2, const BYTE* VAR_3, BYTE VAR_4)
{
    ULONG VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    const BYTE* VAR_10;
    const BYTE* VAR_11;
    BYTE* VAR_12 = ((void*)0);
    char VAR_13[256];
    unsigned VAR_14;
    BOOL VAR_15;

    FUNC_8("Loading metafile\n");

    VAR_10 = VAR_3 + 2;

    VAR_14 = FUNC_10(&VAR_10);
    FUNC_11(VAR_13, "{\\pict\\wmetafile%u\\picw%u\\pich%u",
            VAR_14, FUNC_1(VAR_10, 0), FUNC_1(VAR_10, 2));
    if (!FUNC_5(VAR_1, VAR_13)) return VAR_0;
    VAR_10 += 4;

    VAR_5 = FUNC_9(&VAR_10);
    VAR_6 = FUNC_9(&VAR_10);
    VAR_9 = FUNC_9(&VAR_10);
    VAR_7 = FUNC_0(VAR_10, 0);
    VAR_8 = FUNC_0(VAR_10, 4);
    VAR_10 += 8;

    FUNC_3(VAR_1, VAR_2, VAR_3, VAR_9, VAR_8);

    FUNC_8("sz=%u csz=%u offs=%u/%u,%u/%u\n",
               VAR_5, VAR_6, VAR_7, (ULONG)(VAR_10 - VAR_3), VAR_9, VAR_8);

    VAR_11 = FUNC_4(VAR_3 + VAR_7, VAR_6, VAR_5, VAR_4, &VAR_12);
    if (!VAR_11) return VAR_0;

    VAR_15 = FUNC_6(VAR_1, VAR_11, VAR_5) &&
        FUNC_5(VAR_1, "}");

    FUNC_7(FUNC_2(), 0, VAR_12);

    return VAR_15;
}
