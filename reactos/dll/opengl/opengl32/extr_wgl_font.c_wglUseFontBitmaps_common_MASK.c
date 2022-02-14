
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int UINT_PTR ;
struct TYPE_21__ {int (* PixelStorei ) (int ,int) ;int (* EndList ) () ;int (* Bitmap ) (int,unsigned int,scalar_t__,scalar_t__,int ,int ,void*) ;int (* NewList ) (int ,int ) ;int (* GetIntegerv ) (int ,int*) ;} ;
struct TYPE_18__ {scalar_t__ y; int x; } ;
struct TYPE_20__ {unsigned int gmBlackBoxX; unsigned int gmBlackBoxY; int gmCellIncY; int gmCellIncX; TYPE_5__ gmptGlyphOrigin; } ;
struct TYPE_17__ {int member_1; int member_0; } ;
struct TYPE_16__ {int member_1; int member_0; } ;
struct TYPE_15__ {int member_1; int member_0; } ;
struct TYPE_14__ {int member_1; int member_0; } ;
struct TYPE_19__ {TYPE_4__ member_3; TYPE_3__ member_2; TYPE_2__ member_1; TYPE_1__ member_0; } ;
typedef TYPE_6__ MAT2 ;
typedef int HDC ;
typedef TYPE_7__ GLYPHMETRICS ;
typedef TYPE_8__ GLDISPATCHTABLE ;
typedef unsigned int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int ,unsigned int,int ,TYPE_7__*,unsigned int,void*,TYPE_6__ const*) ;
 unsigned int FUNC_1 (int ,unsigned int,int ,TYPE_7__*,unsigned int,void*,TYPE_6__ const*) ;
 int FUNC_2 () ;
 int VAR_5 ;
 void* FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (int ,int ,void*) ;
 TYPE_8__* FUNC_5 () ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_6 ;
 int FUNC_8 (int ,int*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int,unsigned int,scalar_t__,scalar_t__,int ,int ,void*) ;
 int FUNC_12 (int,unsigned int,scalar_t__,scalar_t__,int ,int ,void*) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int) ;
 int VAR_7 ;

__attribute__((used)) static BOOL FUNC_15( HDC VAR_8, DWORD VAR_9, DWORD VAR_10, DWORD VAR_11, BOOL VAR_12 )
{
    const GLDISPATCHTABLE * VAR_13 = FUNC_5();
    GLYPHMETRICS VAR_14;
    unsigned int VAR_15, VAR_16 = 0;
    void *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
    int VAR_19;
    BOOL VAR_20 = VAR_6;

    VAR_13->GetIntegerv(VAR_4, &VAR_19);
    VAR_13->PixelStorei(VAR_4, 4);

    for (VAR_15 = VAR_9; VAR_15 < VAR_9 + VAR_10; VAR_15++) {
        static const MAT2 VAR_21 = { {0,1},{0,0},{0,0},{0,1} };
        unsigned int VAR_22, VAR_23, VAR_24, VAR_25;

        if (VAR_12)
            VAR_22 = FUNC_1(VAR_8, VAR_15, VAR_2, &VAR_14, 0, ((void*)0), &VAR_21);
        else
            VAR_22 = FUNC_0(VAR_8, VAR_15, VAR_2, &VAR_14, 0, ((void*)0), &VAR_21);

        FUNC_6("Glyph: %3d / List: %d size %d\n", VAR_15, VAR_11, VAR_22);
        if (VAR_22 == VAR_1) {
            VAR_20 = VAR_0;
            break;
        }

        if (VAR_22 > VAR_16) {
            VAR_16 = VAR_22;
            FUNC_4(FUNC_2(), 0, VAR_17);
            FUNC_4(FUNC_2(), 0, VAR_18);
            VAR_17 = FUNC_3(FUNC_2(), VAR_5, VAR_16);
            VAR_18 = FUNC_3(FUNC_2(), VAR_5, VAR_16);
        }
        if (VAR_12)
            VAR_20 = (FUNC_1(VAR_8, VAR_15, VAR_2, &VAR_14, VAR_16, VAR_17, &VAR_21) != VAR_1);
        else
            VAR_20 = (FUNC_0(VAR_8, VAR_15, VAR_2, &VAR_14, VAR_16, VAR_17, &VAR_21) != VAR_1);
        if (!VAR_20) break;

        if (FUNC_7(VAR_7)) {
            unsigned int VAR_26;
            unsigned char *VAR_27 = VAR_17;

            FUNC_6("  - bbox: %d x %d\n", VAR_14.gmBlackBoxX, VAR_14.gmBlackBoxY);
            FUNC_6("  - origin: (%d, %d)\n", VAR_14.gmptGlyphOrigin.x, VAR_14.gmptGlyphOrigin.y);
            FUNC_6("  - increment: %d - %d\n", VAR_14.gmCellIncX, VAR_14.gmCellIncY);
            if (VAR_22 != 0) {
                FUNC_6("  - bitmap:\n");
                for (VAR_23 = 0; VAR_23 < VAR_14.gmBlackBoxY; VAR_23++) {
                    FUNC_6("      ");
                    for (VAR_24 = 0, VAR_26 = 0x80; VAR_24 < VAR_14.gmBlackBoxX; VAR_24++, VAR_26 >>= 1) {
                        if (VAR_26 == 0) {
                            VAR_27 += 1;
                            VAR_26 = 0x80;
                        }
                        if (*VAR_27 & VAR_26)
                            FUNC_6("*");
                        else
                            FUNC_6(" ");
                    }
                    VAR_27 += (4 - ((UINT_PTR)VAR_27 & 0x03));
                    FUNC_6("\n");
                }
            }
        }




        if (VAR_22 != 0) {
            VAR_25 = (VAR_14.gmBlackBoxX + 31) / 32;
            for (VAR_23 = 0; VAR_23 < VAR_14.gmBlackBoxY; VAR_23++) {
                for (VAR_24 = 0; VAR_24 < VAR_25; VAR_24++) {
                    ((int *) VAR_18)[(VAR_14.gmBlackBoxY - VAR_23 - 1) * VAR_25 + VAR_24] =
                    ((int *) VAR_17)[VAR_23 * VAR_25 + VAR_24];
                }
            }
        }

        VAR_13->NewList(VAR_11++, VAR_3);
        if (VAR_22 != 0) {
            VAR_13->Bitmap(VAR_14.gmBlackBoxX, VAR_14.gmBlackBoxY,
                    0 - VAR_14.gmptGlyphOrigin.x, (int) VAR_14.gmBlackBoxY - VAR_14.gmptGlyphOrigin.y,
                    VAR_14.gmCellIncX, VAR_14.gmCellIncY,
                    VAR_18);
        } else {

            VAR_13->Bitmap(0, 0, 0, 0, VAR_14.gmCellIncX, VAR_14.gmCellIncY, ((void*)0));
        }
        VAR_13->EndList();
    }

    VAR_13->PixelStorei(VAR_4, VAR_19);
    FUNC_4(FUNC_2(), 0, VAR_17);
    FUNC_4(FUNC_2(), 0, VAR_18);
    return VAR_20;
}
