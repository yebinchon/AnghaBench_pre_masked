
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_5__ {int Clsid; } ;
typedef double REAL ;
typedef TYPE_1__ ImageCodecInfo ;
typedef scalar_t__ GpStatus ;
typedef int GpImage ;
typedef int GpBitmap ;
typedef char CHAR ;


 int FUNC_0 (char const*) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (double const,double const,int ,int ,int *,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,double*,double*) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_7 (scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_8 (char const*,int **) ;
 scalar_t__ FUNC_9 (int *,char const*,int *,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (double const,double) ;
 int FUNC_12 (int ,char*) ;

__attribute__((used)) static void FUNC_13(void)
{
    GpStatus VAR_3;
    GpBitmap *VAR_4;
    UINT VAR_5;
    UINT VAR_6;
    const REAL VAR_7 = 10.0, VAR_8 = 20.0;
    REAL VAR_9, VAR_10;
    ImageCodecInfo *VAR_11;
    static const CHAR VAR_12[] = "a.bmp";
    static const WCHAR VAR_13[] = { 'a','.','b','m','p',0 };

    VAR_11 = ((void*)0);

    VAR_3 = FUNC_9(0, 0, 0, 0);
    FUNC_10(VAR_0, VAR_3);

    VAR_4 = ((void*)0);
    VAR_3 = FUNC_2(VAR_7, VAR_8, 0, VAR_2, ((void*)0), &VAR_4);
    FUNC_10(VAR_1, VAR_3);
    if (!VAR_4)
        return;


    VAR_3 = FUNC_9((GpImage*)VAR_4, 0, 0, 0);
    FUNC_10(VAR_0, VAR_3);

    VAR_3 = FUNC_9((GpImage*)VAR_4, VAR_13, 0, 0);
    FUNC_10(VAR_0, VAR_3);


    VAR_3 = FUNC_7(&VAR_5, &VAR_6);
    if (VAR_3 != VAR_1 || VAR_5 == 0) goto cleanup;

    VAR_11 = FUNC_1(VAR_6);
    if (!VAR_11) goto cleanup;

    VAR_3 = FUNC_6(VAR_5, VAR_6, VAR_11);
    if (VAR_3 != VAR_1) goto cleanup;

    VAR_3 = FUNC_9((GpImage*)VAR_4, VAR_13, &VAR_11[0].Clsid, 0);
    FUNC_10(VAR_1, VAR_3);

    FUNC_3((GpImage*)VAR_4);
    VAR_4 = 0;


    VAR_3 = FUNC_8(VAR_13, (GpImage**)&VAR_4);
    FUNC_10(VAR_1, VAR_3);
    if (VAR_3 != VAR_1) goto cleanup;

    VAR_3 = FUNC_5((GpImage*)VAR_4, &VAR_9, &VAR_10);
    if (VAR_3 != VAR_1) goto cleanup;

    FUNC_11(VAR_7, VAR_9);
    FUNC_11(VAR_8, VAR_10);

 cleanup:
    FUNC_4(VAR_11);
    if (VAR_4)
        FUNC_3((GpImage*)VAR_4);
    FUNC_12(FUNC_0(VAR_12), "Delete failed.\n");
}
