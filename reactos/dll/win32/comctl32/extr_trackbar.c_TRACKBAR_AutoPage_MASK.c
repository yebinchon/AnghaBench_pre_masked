
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ lPos; int flags; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef int POINT ;
typedef scalar_t__ LONG ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static BOOL
FUNC_7 (TRACKBAR_INFO *VAR_4, POINT VAR_5)
{
    LONG VAR_6 = FUNC_1(VAR_4, VAR_5);
    LONG VAR_7 = VAR_4->lPos;

    FUNC_0("clickPoint=%s, dir=%d\n", FUNC_6(&VAR_5), VAR_6);

    if (VAR_6 > 0 && (VAR_4->flags & VAR_2))
 FUNC_3(VAR_4);
    else if (VAR_6 < 0 && (VAR_4->flags & VAR_1))
 FUNC_4(VAR_4);
    else return VAR_0;

    FUNC_5 (VAR_4);
    FUNC_2 (VAR_4, VAR_7, VAR_4->lPos);

    return VAR_3;
}
