
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hwndSelf; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef int PAINTSTRUCT ;
typedef int LRESULT ;
typedef scalar_t__ HDC ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static LRESULT
FUNC_3 (TRACKBAR_INFO *VAR_0, HDC VAR_1)
{
    if (VAR_1) {
 FUNC_2(VAR_0, VAR_1);
    } else {
 PAINTSTRUCT VAR_2;
     VAR_1 = FUNC_0 (VAR_0->hwndSelf, &VAR_2);
     FUNC_2 (VAR_0, VAR_1);
     FUNC_1 (VAR_0->hwndSelf, &VAR_2);
    }

    return 0;
}
