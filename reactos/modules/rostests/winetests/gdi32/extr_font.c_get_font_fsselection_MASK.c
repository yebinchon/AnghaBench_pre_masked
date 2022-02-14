
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int otmSize; int otmfsSelection; } ;
typedef TYPE_1__ OUTLINETEXTMETRICA ;
typedef int LOGFONTA ;
typedef int * HFONT ;
typedef int HDC ;
typedef int DWORD ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int,TYPE_1__*) ;
 int FUNC_5 () ;
 TYPE_1__* FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,TYPE_1__*) ;
 int FUNC_8 (int ,int ) ;
 int * FUNC_9 (int ,int *) ;
 int FUNC_10 (int,char*,...) ;

__attribute__((used)) static UINT FUNC_11(LOGFONTA *VAR_0)
{
    OUTLINETEXTMETRICA *VAR_1;
    HFONT VAR_2, VAR_3;
    DWORD VAR_4, VAR_5;
    UINT VAR_6;
    HDC VAR_7;

    VAR_7 = FUNC_2(0);
    VAR_2 = FUNC_0(VAR_0);
    FUNC_10(VAR_2 != ((void*)0), "failed to create a font\n");

    VAR_3 = FUNC_9(VAR_7, VAR_2);

    VAR_5 = FUNC_4(VAR_7, 0, ((void*)0));
    VAR_1 = FUNC_6(FUNC_5(), 0, VAR_5);
    VAR_1->otmSize = sizeof(*VAR_1);
    VAR_4 = FUNC_4(VAR_7, VAR_1->otmSize, VAR_1);
    FUNC_10(VAR_4 == VAR_1->otmSize, "expected %u, got %u, error %d\n", VAR_1->otmSize, VAR_4, FUNC_3());
    VAR_6 = VAR_1->otmfsSelection;
    FUNC_7(FUNC_5(), 0, VAR_1);
    FUNC_9(VAR_7, VAR_3);
    FUNC_1(VAR_2);
    FUNC_8(0, VAR_7);

    return VAR_6;
}
