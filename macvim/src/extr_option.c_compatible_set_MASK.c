
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3()
{
    int VAR_5;

    for (VAR_5 = 0; !FUNC_1(&VAR_3[VAR_5]); VAR_5++)
 if ( ((VAR_3[VAR_5].flags & VAR_1) && VAR_4)
  || (!(VAR_3[VAR_5].flags & VAR_2) && !VAR_4))
     FUNC_2(VAR_5, VAR_0, VAR_4);
    FUNC_0();
}
