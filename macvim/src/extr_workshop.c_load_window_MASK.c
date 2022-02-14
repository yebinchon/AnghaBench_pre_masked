
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lnum; } ;
struct TYPE_7__ {TYPE_1__ w_cursor; } ;
typedef TYPE_2__ win_T ;
typedef int char_u ;
typedef int buf_T ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 TYPE_2__* VAR_1 ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_6(
 char *VAR_2,
 int VAR_3)
{
    buf_T *VAR_4;
    win_T *VAR_5;





    VAR_4 = FUNC_0((char_u *)VAR_2);
    if (VAR_4 == ((void*)0) || (VAR_5 = FUNC_1(VAR_4)) == ((void*)0))
    {



 FUNC_2(VAR_2, VAR_3);
    }
    else
    {
 if (VAR_3 > 0 && VAR_5->w_cursor.lnum != VAR_3)
 {
     FUNC_4(VAR_3);


 }
    }
    FUNC_3();
}
