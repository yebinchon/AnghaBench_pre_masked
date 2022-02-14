
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
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(EDITSTATE *VAR_1, UINT VAR_2, UINT VAR_3, BOOL VAR_4)
{
 UINT VAR_5 = VAR_1->selection_start;
 UINT VAR_6 = VAR_1->selection_end;
 UINT VAR_7 = FUNC_2(VAR_1);

 if (VAR_2 == (UINT)-1) {
  VAR_2 = VAR_1->selection_end;
  VAR_3 = VAR_1->selection_end;
 } else {
  VAR_2 = FUNC_3(VAR_2, VAR_7);
  VAR_3 = FUNC_3(VAR_3, VAR_7);
 }
 VAR_1->selection_start = VAR_2;
 VAR_1->selection_end = VAR_3;
 if (VAR_4)
  VAR_1->flags |= VAR_0;
 else
  VAR_1->flags &= ~VAR_0;
        FUNC_1(VAR_3, VAR_6);
        FUNC_1(VAR_2, VAR_5);
        FUNC_1(VAR_5, VAR_6);
        FUNC_1(VAR_2, VAR_3);


 if (VAR_3 != VAR_5)
        {
            if (VAR_5 > VAR_3 )
            {
                FUNC_0(VAR_1, VAR_2, VAR_3);
                FUNC_0(VAR_1, VAR_5, VAR_6);
            }
            else
            {
                FUNC_0(VAR_1, VAR_2, VAR_5);
                FUNC_0(VAR_1, VAR_3, VAR_6);
            }
 }
        else FUNC_0(VAR_1, VAR_2, VAR_6);
}
