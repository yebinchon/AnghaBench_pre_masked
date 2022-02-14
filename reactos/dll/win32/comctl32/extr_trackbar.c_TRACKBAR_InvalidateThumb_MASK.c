
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hwndSelf; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef int RECT ;
typedef int LONG ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (TYPE_1__ const*,int ,int *) ;

__attribute__((used)) static void
FUNC_3 (const TRACKBAR_INFO *VAR_1, LONG VAR_2)
{
    RECT VAR_3;

    FUNC_2(VAR_1, VAR_2, &VAR_3);
    FUNC_0(&VAR_3, 1, 1);
    FUNC_1(VAR_1->hwndSelf, &VAR_3, VAR_0);
}
