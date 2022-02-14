
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int hwnd; } ;
typedef int LRESULT ;
typedef int * LPWSTR ;
typedef long LPARAM ;
typedef scalar_t__ LONG ;
typedef int HWND ;
typedef TYPE_1__ FD31_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__ const*,int *,int ,scalar_t__,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ,int ,scalar_t__,long) ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static LRESULT FUNC_6( const FD31_DATA *VAR_8 )
{
    LONG VAR_9;
    HWND VAR_10 = VAR_8->hwnd;
    LPWSTR VAR_11;
    WCHAR VAR_12[VAR_0];

    FUNC_0(VAR_10);
    VAR_9 = FUNC_2(VAR_10, VAR_7, VAR_2, 0, 0L);
    if (VAR_9 == VAR_5)
        return 0;
    VAR_11 = FUNC_3(VAR_1);
    FUNC_2(VAR_10, VAR_7, VAR_3, VAR_9,
                         (LPARAM)VAR_11);
    FUNC_5(VAR_12, VAR_4, VAR_11[2]);
    FUNC_4(VAR_11);

    return FUNC_1( VAR_8, VAR_12, VAR_7, VAR_9, VAR_6 );
}
