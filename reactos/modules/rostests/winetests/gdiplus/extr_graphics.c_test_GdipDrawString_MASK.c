
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int logfont ;
typedef char WCHAR ;
struct TYPE_10__ {int lfHeight; int lfCharSet; int lfFaceName; } ;
struct TYPE_9__ {int member_0; int member_1; } ;
struct TYPE_8__ {int Height; scalar_t__ Width; scalar_t__ Y; scalar_t__ X; } ;
typedef TYPE_1__ RectF ;
typedef TYPE_2__ PointF ;
typedef TYPE_3__ LOGFONTA ;
typedef int HDC ;
typedef int GpStringFormat ;
typedef scalar_t__ GpStatus ;
typedef int GpSolidFill ;
typedef int GpMatrix ;
typedef int GpGraphics ;
typedef int GpFont ;
typedef int GpBrush ;
typedef int ARGB ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,TYPE_3__*,int **) ;
 scalar_t__ FUNC_1 (int ,int **) ;
 scalar_t__ FUNC_2 (int **) ;
 scalar_t__ FUNC_3 (int ,int **) ;
 scalar_t__ FUNC_4 (int ,int ,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,char const*,int,int *,int *,TYPE_2__ const*,int,int *) ;
 scalar_t__ FUNC_11 (int *,char const*,int,int *,TYPE_1__*,int *,int *) ;
 int FUNC_12 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,scalar_t__) ;
 int VAR_6 ;
 int FUNC_15 (TYPE_3__*,int ,int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int ,char*) ;

__attribute__((used)) static void FUNC_18(void)
{
    GpStatus VAR_7;
    GpGraphics *VAR_8 = ((void*)0);
    GpFont *VAR_9 = ((void*)0);
    RectF VAR_10;
    GpStringFormat *VAR_11;
    GpBrush *VAR_12;
    LOGFONTA VAR_13;
    HDC VAR_14 = FUNC_12( VAR_6 );
    static const WCHAR VAR_15[] = {'T','e','s','t',0};
    static const PointF VAR_16[4] = {{0,0}, {1,1}, {2,2}, {3,3}};
    GpMatrix *VAR_17;

    FUNC_15(&VAR_13,0,sizeof(VAR_13));
    FUNC_17(VAR_13.lfFaceName,"Arial");
    VAR_13.lfHeight = 12;
    VAR_13.lfCharSet = VAR_0;

    VAR_7 = FUNC_1(VAR_14, &VAR_8);
    FUNC_14(VAR_5, VAR_7);

    VAR_7 = FUNC_0(VAR_14, &VAR_13, &VAR_9);
    if (VAR_7 == VAR_4 || VAR_7 == VAR_2)
    {
        FUNC_16("Arial not installed.\n");
        return;
    }
    FUNC_14(VAR_5, VAR_7);

    VAR_7 = FUNC_3((ARGB)0xdeadbeef, (GpSolidFill**)&VAR_12);
    FUNC_14(VAR_5, VAR_7);

    VAR_7 = FUNC_4(0,0,&VAR_11);
    FUNC_14(VAR_5, VAR_7);

    VAR_10.X = 0;
    VAR_10.Y = 0;
    VAR_10.Width = 0;
    VAR_10.Height = 12;

    VAR_7 = FUNC_11(VAR_8, VAR_15, 4, VAR_9, &VAR_10, VAR_11, VAR_12);
    FUNC_14(VAR_5, VAR_7);

    VAR_7 = FUNC_2(&VAR_17);
    FUNC_14(VAR_5, VAR_7);

    VAR_7 = FUNC_10(((void*)0), VAR_15, 4, VAR_9, VAR_12, VAR_16, VAR_1, VAR_17);
    FUNC_14(VAR_3, VAR_7);

    VAR_7 = FUNC_10(VAR_8, ((void*)0), 4, VAR_9, VAR_12, VAR_16, VAR_1, VAR_17);
    FUNC_14(VAR_3, VAR_7);

    VAR_7 = FUNC_10(VAR_8, VAR_15, 4, ((void*)0), VAR_12, VAR_16, VAR_1, VAR_17);
    FUNC_14(VAR_3, VAR_7);

    VAR_7 = FUNC_10(VAR_8, VAR_15, 4, VAR_9, ((void*)0), VAR_16, VAR_1, VAR_17);
    FUNC_14(VAR_3, VAR_7);

    VAR_7 = FUNC_10(VAR_8, VAR_15, 4, VAR_9, VAR_12, ((void*)0), VAR_1, VAR_17);
    FUNC_14(VAR_3, VAR_7);

    VAR_7 = FUNC_10(VAR_8, VAR_15, 4, VAR_9, VAR_12, VAR_16, VAR_1|0x10, VAR_17);
    FUNC_14(VAR_5, VAR_7);

    VAR_7 = FUNC_10(VAR_8, VAR_15, 4, VAR_9, VAR_12, VAR_16, VAR_1, ((void*)0));
    FUNC_14(VAR_5, VAR_7);

    VAR_7 = FUNC_10(VAR_8, VAR_15, 4, VAR_9, VAR_12, VAR_16, VAR_1, VAR_17);
    FUNC_14(VAR_5, VAR_7);

    FUNC_8(VAR_17);
    FUNC_7(VAR_8);
    FUNC_5(VAR_12);
    FUNC_6(VAR_9);
    FUNC_9(VAR_11);

    FUNC_13(VAR_6, VAR_14);
}
