
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gdImagePtr ;
struct TYPE_4__ {scalar_t__ CountDown; int cury; int curx; } ;
typedef TYPE_1__ GifCtx ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(gdImagePtr VAR_1, GifCtx *VAR_2)
{
        int VAR_3;

        if( VAR_2->CountDown == 0 )
                return VAR_0;

        --(VAR_2->CountDown);

        VAR_3 = FUNC_1(VAR_1, VAR_2->curx, VAR_2->cury);

        FUNC_0(VAR_2);

        return VAR_3;
}
