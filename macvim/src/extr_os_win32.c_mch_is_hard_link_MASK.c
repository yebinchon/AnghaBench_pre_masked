
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_3__ {int nNumberOfLinks; } ;
typedef TYPE_1__ BY_HANDLE_FILE_INFORMATION ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;

int
FUNC_1(char_u *VAR_1)
{
    BY_HANDLE_FILE_INFORMATION VAR_2;

    return FUNC_0(VAR_1, &VAR_2) == VAR_0
         && VAR_2.nNumberOfLinks > 1;
}
