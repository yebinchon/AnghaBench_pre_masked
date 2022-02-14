
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_3__ {int col; } ;
struct TYPE_4__ {TYPE_1__ w_cursor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 TYPE_2__* VAR_9 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_7()
{
    char_u *VAR_10;
    char_u *VAR_11;

    VAR_10 = FUNC_4();
    VAR_11 = VAR_10 + VAR_9->w_cursor.col;
    FUNC_3(VAR_10, VAR_11);



    if ((int)(VAR_11 - VAR_10) - (int)VAR_3 < 0
     || ((int)(VAR_11 - VAR_10) - (int)VAR_3 == 0
  && (VAR_8 & VAR_0) == 0))
 return VAR_1;



    if (VAR_9->w_cursor.col <= VAR_3 + VAR_6
        || FUNC_0())
 FUNC_2();

    FUNC_5(VAR_5);
    VAR_5 = FUNC_6(VAR_10 + VAR_3, (int)(VAR_11 - VAR_10) - VAR_3);
    if (VAR_5 != ((void*)0))
    {
 FUNC_1();
 if (VAR_7 != ((void*)0))

     VAR_4 = VAR_7;
 return VAR_2;
    }
    return VAR_1;
}
