
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int cx; int cMaxImage; int cy; } ;
struct TYPE_6__ {int cx; int cy; } ;
typedef TYPE_1__ SIZE ;
typedef TYPE_2__ ILHEAD ;


 scalar_t__ FUNC_0 (TYPE_2__ const*) ;

__attribute__((used)) static inline void FUNC_1(const ILHEAD *VAR_0, SIZE *VAR_1)
{
    const int VAR_2 = 4;

    if (FUNC_0(VAR_0))
    {
        VAR_1->cx = VAR_0->cx;
        VAR_1->cy = VAR_0->cMaxImage * VAR_0->cy;
    }
    else
    {
        VAR_1->cx = VAR_0->cx * VAR_2;
        VAR_1->cy = ((VAR_0->cMaxImage + VAR_2 - 1) / VAR_2) * VAR_0->cy;
    }
}
