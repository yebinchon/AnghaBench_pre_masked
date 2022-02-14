
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int hwndSelf; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef int POINT ;
typedef int LRESULT ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static LRESULT
FUNC_3 (TRACKBAR_INFO *VAR_1)
{
    if (VAR_1->flags & VAR_0) {
 POINT VAR_2;
 if (FUNC_0(&VAR_2))
     if (FUNC_1(VAR_1->hwndSelf, &VAR_2))
  FUNC_2(VAR_1, VAR_2);
    }
    return 0;
}
