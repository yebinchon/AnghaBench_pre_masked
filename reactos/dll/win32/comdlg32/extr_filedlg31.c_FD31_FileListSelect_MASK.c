
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lbselchstring; scalar_t__ hook; int hwnd; } ;
typedef int LRESULT ;
typedef scalar_t__ LPWSTR ;
typedef int LPARAM ;
typedef scalar_t__ LONG ;
typedef int HWND ;
typedef TYPE_1__ FD31_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*,int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,scalar_t__,int ) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_7 ;

__attribute__((used)) static LRESULT FUNC_6( const FD31_DATA *VAR_8 )
{
    LONG VAR_9;
    HWND VAR_10 = VAR_8->hwnd;
    LPWSTR VAR_11;

    VAR_9 = FUNC_2(VAR_8->hwnd, VAR_7, VAR_3, 0, 0);
    if (VAR_9 == VAR_2)
        return VAR_5;


    if ((VAR_11 = FUNC_4(VAR_0)))
    {
        FUNC_2(VAR_10, VAR_7, VAR_4, VAR_9,
                       (LPARAM)VAR_11);
        FUNC_3( VAR_10, VAR_6, VAR_11 );
        FUNC_5(VAR_11);
    }
    if (VAR_8->hook)
    {
        FUNC_0(VAR_8, VAR_8->lbselchstring, VAR_7,
                           FUNC_1(VAR_9,VAR_1));
    }


    return VAR_5;
}
