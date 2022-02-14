
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {scalar_t__ selection_start; scalar_t__ selection_end; int flags; } ;
typedef TYPE_1__ EDITSTATE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_4(EDITSTATE *VAR_3, UINT VAR_4, UINT VAR_5, BOOL VAR_6)
{
 UINT VAR_7 = VAR_3->selection_start;
 UINT VAR_8 = VAR_3->selection_end;
 UINT VAR_9 = FUNC_2(VAR_3);

        if (VAR_4 == VAR_7 && VAR_5 == VAR_8)
            return VAR_1;

 if (VAR_4 == (UINT)-1) {
  VAR_4 = VAR_3->selection_end;
  VAR_5 = VAR_3->selection_end;
 } else {
  VAR_4 = FUNC_3(VAR_4, VAR_9);
  VAR_5 = FUNC_3(VAR_5, VAR_9);
 }
 VAR_3->selection_start = VAR_4;
 VAR_3->selection_end = VAR_5;
 if (VAR_6)
  VAR_3->flags |= VAR_0;
 else
  VAR_3->flags &= ~VAR_0;
        FUNC_1(VAR_5, VAR_8);
        FUNC_1(VAR_4, VAR_7);
        FUNC_1(VAR_7, VAR_8);
        FUNC_1(VAR_4, VAR_5);


 if (VAR_5 != VAR_7)
        {
            if (VAR_7 > VAR_5 )
            {
                FUNC_0(VAR_3, VAR_4, VAR_5);
                FUNC_0(VAR_3, VAR_7, VAR_8);
            }
            else
            {
                FUNC_0(VAR_3, VAR_4, VAR_7);
                FUNC_0(VAR_3, VAR_5, VAR_8);
            }
 }
        else FUNC_0(VAR_3, VAR_4, VAR_8);

        return VAR_2;
}
