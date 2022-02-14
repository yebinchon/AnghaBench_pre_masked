
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwStyle; int wState; int self; } ;
typedef int LRESULT ;
typedef int LONG_PTR ;
typedef int LONG ;
typedef int HWND ;
typedef TYPE_1__ HEADCOMBO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (char*,TYPE_1__*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__* FUNC_5 (int) ;

__attribute__((used)) static LRESULT FUNC_6(HWND VAR_13, LONG VAR_14)
{
    HEADCOMBO *VAR_15;

    if (FUNC_0() && (VAR_15 = FUNC_5(sizeof(*VAR_15))))
    {
        VAR_15->self = VAR_13;
        FUNC_2( VAR_13, 0, (LONG_PTR)VAR_15 );



 VAR_15->dwStyle = VAR_14 & ~(VAR_8 | VAR_11 | VAR_12);
        FUNC_3( VAR_13, VAR_6, VAR_14 & ~(VAR_8 | VAR_11 | VAR_12) );





        FUNC_3( VAR_13, VAR_5,
                        FUNC_1( VAR_13, VAR_5 ) & ~VAR_9 );

 if( !(VAR_14 & (VAR_2 | VAR_3)) )
              VAR_15->dwStyle |= VAR_1;
 if( !(FUNC_1( VAR_13, VAR_5 ) & VAR_10) )
       VAR_15->wState |= VAR_0;

        FUNC_4("[%p], style = %08x\n", VAR_15, VAR_15->dwStyle );
        return VAR_7;
    }
    return VAR_4;
}
