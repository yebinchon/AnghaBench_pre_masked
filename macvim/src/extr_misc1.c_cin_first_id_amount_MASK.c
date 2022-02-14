
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ col; int lnum; } ;
typedef TYPE_2__ pos_T ;
typedef scalar_t__ colnr_T ;
typedef int char_u ;
struct TYPE_6__ {int lnum; } ;
struct TYPE_8__ {TYPE_1__ w_cursor; } ;


 scalar_t__ FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_3__* VAR_0 ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,scalar_t__*,int *,int *) ;
 int * FUNC_3 () ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8()
{
    char_u *VAR_1, *VAR_2, *VAR_3;
    int VAR_4;
    pos_T VAR_5;
    colnr_T VAR_6;

    VAR_1 = FUNC_3();
    VAR_2 = FUNC_5(VAR_1);
    VAR_4 = (int)(FUNC_4(VAR_2) - VAR_2);
    if (VAR_4 == 6 && FUNC_0(VAR_2, "static", 6) == 0)
    {
 VAR_2 = FUNC_5(VAR_2 + 6);
 VAR_4 = (int)(FUNC_4(VAR_2) - VAR_2);
    }
    if (VAR_4 == 6 && FUNC_0(VAR_2, "struct", 6) == 0)
 VAR_2 = FUNC_5(VAR_2 + 6);
    else if (VAR_4 == 4 && FUNC_0(VAR_2, "enum", 4) == 0)
 VAR_2 = FUNC_5(VAR_2 + 4);
    else if ((VAR_4 == 8 && FUNC_0(VAR_2, "unsigned", 8) == 0)
     || (VAR_4 == 6 && FUNC_0(VAR_2, "signed", 6) == 0))
    {
 VAR_3 = FUNC_5(VAR_2 + VAR_4);
 if ((FUNC_0(VAR_3, "int", 3) == 0 && FUNC_7(VAR_3[3]))
  || (FUNC_0(VAR_3, "long", 4) == 0 && FUNC_7(VAR_3[4]))
  || (FUNC_0(VAR_3, "short", 5) == 0 && FUNC_7(VAR_3[5]))
  || (FUNC_0(VAR_3, "char", 4) == 0 && FUNC_7(VAR_3[4])))
     VAR_2 = VAR_3;
    }
    for (VAR_4 = 0; FUNC_6(VAR_2[VAR_4]); ++VAR_4)
 ;
    if (VAR_4 == 0 || !FUNC_7(VAR_2[VAR_4]) || FUNC_1(VAR_2))
 return 0;

    VAR_2 = FUNC_5(VAR_2 + VAR_4);
    VAR_5.lnum = VAR_0->w_cursor.lnum;
    VAR_5.col = (colnr_T)(VAR_2 - VAR_1);
    FUNC_2(VAR_0, &VAR_5, &VAR_6, ((void*)0), ((void*)0));
    return (int)VAR_6;
}
