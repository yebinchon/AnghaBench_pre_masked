
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int hwnd; TYPE_1__* ofnA; TYPE_2__* ofnW; } ;
struct TYPE_7__ {scalar_t__ nFilterIndex; } ;
struct TYPE_6__ {scalar_t__ nFilterIndex; } ;
typedef int LRESULT ;
typedef scalar_t__ LPWSTR ;
typedef scalar_t__ LONG ;
typedef TYPE_3__ FD31_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__ const*,scalar_t__,int ,scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int ,scalar_t__,int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static LRESULT FUNC_4( const FD31_DATA *VAR_5 )
{
    LONG VAR_6;
    LPWSTR VAR_7;

    VAR_6 = FUNC_1(VAR_5->hwnd, VAR_4, VAR_0, 0, 0);
    if (VAR_6 == VAR_2)
        return VAR_3;
    VAR_5->ofnW->nFilterIndex = VAR_6 + 1;
    if (VAR_5->ofnA)
        VAR_5->ofnA->nFilterIndex = VAR_6 + 1;
    VAR_7 = (LPWSTR)FUNC_1(VAR_5->hwnd, VAR_4, VAR_1, VAR_6, 0);
    FUNC_2("Selected filter : %s\n", FUNC_3(VAR_7));

    return FUNC_0( VAR_5, VAR_7, VAR_4, VAR_6, VAR_3 );
}
