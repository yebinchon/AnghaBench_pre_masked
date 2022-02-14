
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* hwndBuddyRB; void* hwndBuddyLA; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef void* HWND ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static HWND
FUNC_1 (TRACKBAR_INFO *VAR_0, BOOL VAR_1, HWND VAR_2)
{
    HWND VAR_3;

    if (VAR_1) {

 VAR_3 = VAR_0->hwndBuddyLA;
 VAR_0->hwndBuddyLA = VAR_2;
    }
    else {

        VAR_3 = VAR_0->hwndBuddyRB;
        VAR_0->hwndBuddyRB = VAR_2;
    }

    FUNC_0 (VAR_0);

    return VAR_3;
}
