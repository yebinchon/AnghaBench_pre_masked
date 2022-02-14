
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {void* y; void* x; } ;
struct TYPE_12__ {int hwndSelf; int flags; int lPos; int rcThumb; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef TYPE_2__ POINT ;
typedef int LRESULT ;
typedef scalar_t__ LONG ;
typedef void* INT ;


 scalar_t__ FUNC_0 (int *,TYPE_2__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__) ;
 scalar_t__ FUNC_6 (TYPE_1__*,TYPE_2__) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_5 ;

__attribute__((used)) static LRESULT
FUNC_9 (TRACKBAR_INFO *VAR_6, INT VAR_7, INT VAR_8)
{
    POINT VAR_9;

    VAR_9.x = VAR_7;
    VAR_9.y = VAR_8;

    FUNC_2(VAR_6->hwndSelf);

    if (FUNC_0(&VAR_6->rcThumb, VAR_9)) {
        VAR_6->flags |= VAR_2;
        FUNC_1 (VAR_6->hwndSelf);
 FUNC_8 (VAR_6);
 FUNC_4 (VAR_6, VAR_5);
 FUNC_7(VAR_6, VAR_6->lPos);
    } else {
 LONG VAR_10 = FUNC_6(VAR_6, VAR_9);
 if (VAR_10 == 0) return 0;
 VAR_6->flags |= (VAR_10 < 0) ? VAR_0 : VAR_1;
 FUNC_5 (VAR_6, VAR_9);
        FUNC_1 (VAR_6->hwndSelf);
        FUNC_3(VAR_6->hwndSelf, VAR_4, VAR_3, 0);
    }

    return 0;
}
