
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int osvi ;
struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {int member_0; int member_9; int member_8; int member_7; int member_6; TYPE_1__ member_5; int member_4; int member_3; int member_2; int member_1; } ;
typedef TYPE_2__ OSVERSIONINFOEXW ;
typedef int DWORDLONG ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int const) ;

__attribute__((used)) static BOOL
FUNC_2()
{
    OSVERSIONINFOEXW VAR_3 = { sizeof(VAR_3), 0, 0, 0, 0, {0}, 0, 0, 0, VAR_1 };
    DWORDLONG const VAR_4 = FUNC_0( 0, VAR_2, VAR_0 );

    return !FUNC_1(&VAR_3, VAR_2, VAR_4);
}
