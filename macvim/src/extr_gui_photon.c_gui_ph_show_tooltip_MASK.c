
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** strings; } ;
typedef TYPE_1__ vimmenu_T ;
typedef char char_u ;
typedef int PtWidget_t ;
typedef int PtArg_t ;
typedef int PgColor_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int *) ;
 int * FUNC_1 (int *,int *,int ,char*,char*,int ,int ) ;
 int FUNC_2 (int *,int ,TYPE_1__**,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static PtWidget_t * FUNC_3(PtWidget_t *VAR_3,
        PtWidget_t *VAR_4,
        int VAR_5,
        char *VAR_6,
        char *VAR_7,
        PgColor_t VAR_8,
        PgColor_t VAR_9)
{
    PtArg_t VAR_10;
    vimmenu_T *VAR_11;
    char_u *VAR_12;

    FUNC_2(&VAR_10, VAR_1, &VAR_11, 0);
    FUNC_0(VAR_4, 1, &VAR_10);



    VAR_12 = VAR_6;
    if (VAR_11 != ((void*)0))
    {
 int VAR_13 = VAR_0;
 if (VAR_11->strings[ VAR_13 ] != ((void*)0))
     VAR_12 = VAR_11->strings[ VAR_13 ];
    }

    return FUNC_1(
     VAR_3,
     VAR_4,


     VAR_2,
     VAR_12,
     VAR_7,
     VAR_8,
     VAR_9);
}
