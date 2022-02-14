
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ WPARAM ;
struct TYPE_6__ {int style; } ;
struct TYPE_5__ {int styleNew; } ;
typedef TYPE_1__ STYLESTRUCT ;
typedef int LRESULT ;
typedef TYPE_2__ EDITSTATE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static LRESULT FUNC_1 ( EDITSTATE *VAR_7, WPARAM VAR_8, const STYLESTRUCT *VAR_9)
{
        if (VAR_6 == VAR_8) {
                DWORD VAR_10;
                DWORD VAR_11;



                VAR_10 = VAR_3 | VAR_0 |
                                    VAR_2;
                if (VAR_7->style & VAR_1)
                        VAR_10 |= VAR_4;

                VAR_11 = VAR_9->styleNew & VAR_10;





                if (VAR_11 & VAR_2) {
                        ;
                } else if (VAR_11 & VAR_0) {
                        VAR_11 &= ~VAR_3;
                }

                VAR_7->style = (VAR_7->style & ~VAR_10) | VAR_11;
        } else if (VAR_5 == VAR_8) {
                ;
        } else {
                FUNC_0 ("Invalid style change %ld\n",VAR_8);
        }

        return 0;
}
