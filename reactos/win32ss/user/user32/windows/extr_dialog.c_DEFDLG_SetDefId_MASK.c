
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_3__ {int idResult; } ;
typedef int INT ;
typedef scalar_t__ HWND ;
typedef int DWORD ;
typedef TYPE_1__ DIALOGINFO ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static BOOL FUNC_3( HWND VAR_9, DIALOGINFO *VAR_10, WPARAM VAR_11)
{
    DWORD VAR_12=0;
    HWND VAR_13, VAR_14 = FUNC_1(VAR_9, VAR_11);
    INT VAR_15 = VAR_10->idResult;

    VAR_10->idResult = VAR_11;
    if (VAR_14 &&
        !((VAR_12=FUNC_2(VAR_14, VAR_8, 0, 0 ))
            & (VAR_5 | VAR_3)))
        return VAR_6;


    VAR_13 = FUNC_1( VAR_9, VAR_15 );
    if (!VAR_13 || !(FUNC_2( VAR_13, VAR_8, 0, 0) & VAR_4))
        VAR_13 = FUNC_0( VAR_9 );
    if (VAR_13 && VAR_13 != VAR_14)
        FUNC_2( VAR_13, VAR_0, VAR_2, VAR_7 );

    if (VAR_14)
    {
        if(VAR_12 & VAR_5)
            FUNC_2( VAR_14, VAR_0, VAR_1, VAR_7 );
    }
    return VAR_7;
}
