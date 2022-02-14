
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scanline {int dummy; } ;
struct frame {TYPE_1__* scanlines; } ;
struct TYPE_2__ {void** right; void** left; } ;
typedef void* POS ;


 int VAR_0 ;
 struct frame* FUNC_0 (int) ;

__attribute__((used)) static struct frame *FUNC_1(int VAR_1, int VAR_2)
{
    struct frame *VAR_3 = FUNC_0(sizeof(struct frame) +
                              (sizeof(struct scanline) * ((size_t)VAR_2 - 1)));
    POS VAR_4 = (POS)(VAR_1 / 2);
    int VAR_5, VAR_6;

    if (!VAR_3)
        return ((void*)0);

    for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
        for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
            VAR_3->scanlines[VAR_6].left[VAR_5] = VAR_4;
            VAR_3->scanlines[VAR_6].right[VAR_5] = VAR_4;
        }
    }

    return VAR_3;
}
