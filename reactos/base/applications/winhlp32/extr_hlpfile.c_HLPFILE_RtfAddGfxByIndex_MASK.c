
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RtfData {int dummy; } ;
typedef int HLPFILE ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int **,int **) ;
 int FUNC_1 (struct RtfData*,int *,int *,int) ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,unsigned int) ;

__attribute__((used)) static BOOL FUNC_5(struct RtfData* VAR_1, HLPFILE *VAR_2,
                                         unsigned VAR_3)
{
    char VAR_4[16];
    BYTE *VAR_5, *VAR_6;

    FUNC_2("Loading picture #%d\n", VAR_3);

    FUNC_4(VAR_4, "|bm%u", VAR_3);

    if (!FUNC_0(VAR_2, VAR_4, &VAR_5, &VAR_6)) {FUNC_3("no sub file\n"); return VAR_0;}

    VAR_5 += 9;
    return FUNC_1(VAR_1, VAR_2, VAR_5, VAR_6 - VAR_5);
}
