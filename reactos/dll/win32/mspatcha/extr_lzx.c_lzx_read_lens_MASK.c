
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lzx_bits {int bb; int bl; int* ip; } ;
struct LZXstate {int dummy; } ;
typedef int UWORD ;
typedef int ULONG ;
typedef int UBYTE ;


 int FUNC_0 (int ) ;
 int* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct LZXstate *VAR_1, UBYTE *VAR_2, ULONG VAR_3, ULONG VAR_4, struct lzx_bits *VAR_5) {
    ULONG VAR_6,VAR_7, VAR_8,VAR_9;
    int VAR_10;

    register ULONG VAR_11 = VAR_5->bb;
    register int VAR_12 = VAR_5->bl;
    UBYTE *VAR_13 = VAR_5->ip;
    UWORD *VAR_14;

    for (VAR_8 = 0; VAR_8 < 20; VAR_8++) {
        FUNC_2(VAR_9, 4);
        FUNC_1(VAR_0)[VAR_8] = VAR_9;
    }
    FUNC_0(VAR_0);

    for (VAR_8 = VAR_3; VAR_8 < VAR_4; ) {
        FUNC_3(VAR_0, VAR_10);
        if (VAR_10 == 17) {
            FUNC_2(VAR_9, 4); VAR_9 += 4;
            while (VAR_9--) VAR_2[VAR_8++] = 0;
        }
        else if (VAR_10 == 18) {
            FUNC_2(VAR_9, 5); VAR_9 += 20;
            while (VAR_9--) VAR_2[VAR_8++] = 0;
        }
        else if (VAR_10 == 19) {
            FUNC_2(VAR_9, 1); VAR_9 += 4;
            FUNC_3(VAR_0, VAR_10);
            VAR_10 = VAR_2[VAR_8] - VAR_10; if (VAR_10 < 0) VAR_10 += 17;
            while (VAR_9--) VAR_2[VAR_8++] = VAR_10;
        }
        else {
            VAR_10 = VAR_2[VAR_8] - VAR_10; if (VAR_10 < 0) VAR_10 += 17;
            VAR_2[VAR_8++] = VAR_10;
        }
    }

    VAR_5->bb = VAR_11;
    VAR_5->bl = VAR_12;
    VAR_5->ip = VAR_13;
    return 0;
}
