
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hwndSelf; } ;
struct TYPE_5__ {scalar_t__ top; scalar_t__ bottom; } ;
typedef TYPE_1__ RECT ;
typedef int INT ;
typedef TYPE_2__ HEADER_INFO ;
typedef int HDC ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int ,scalar_t__,int,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2 (const HEADER_INFO *VAR_1, HDC VAR_2, INT VAR_3)
{
    RECT VAR_4;

    FUNC_0 (VAR_1->hwndSelf, &VAR_4);
    FUNC_1( VAR_2, VAR_3, VAR_4.top, 1, VAR_4.bottom - VAR_4.top, VAR_0 );
}
