
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dwStyle; int wState; int self; } ;
typedef int LRESULT ;
typedef TYPE_1__* LPHEADCOMBO ;
typedef int LONG_PTR ;
typedef int LONG ;
typedef int HWND ;
typedef int HEADCOMBO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int VAR_7 ;
 TYPE_1__* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (char*,TYPE_1__*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static LRESULT FUNC_7(HWND VAR_14, LONG VAR_15)
{
    LPHEADCOMBO VAR_16;

    if (FUNC_0() && (VAR_16 = FUNC_4(FUNC_2(), VAR_7, sizeof(HEADCOMBO))) )
    {
        VAR_16->self = VAR_14;
        FUNC_5( VAR_14, 0, (LONG_PTR)VAR_16 );







 VAR_16->dwStyle = VAR_15 & ~(VAR_9 | VAR_12 | VAR_13);
        FUNC_5( VAR_14, VAR_6, VAR_15 & ~(VAR_9 | VAR_12 | VAR_13) );





        FUNC_5( VAR_14, VAR_5,
                        FUNC_3( VAR_14, VAR_5 ) & ~VAR_10 );

 if( !(VAR_15 & (VAR_2 | VAR_3)) )
              VAR_16->dwStyle |= VAR_1;
 if( !(FUNC_3( VAR_14, VAR_5 ) & VAR_11) )
       VAR_16->wState |= VAR_0;

        FUNC_6("[%p], style = %08x\n", VAR_16, VAR_16->dwStyle );
        return VAR_8;
    }
    return VAR_4;
}
