
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int style; size_t nb_tabs; int avg_char_width; int * tabs; } ;
typedef int LPINT ;
typedef TYPE_1__ LB_DESCR ;
typedef size_t INT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static BOOL FUNC_6( LB_DESCR *VAR_4, INT VAR_5, LPINT VAR_6 )
{
    INT VAR_7;

    if (!(VAR_4->style & VAR_2))
    {
        FUNC_4(VAR_0);
        return VAR_1;
    }

    FUNC_2( FUNC_0(), 0, VAR_4->tabs );
    if (!(VAR_4->nb_tabs = VAR_5))
    {
        VAR_4->tabs = ((void*)0);
        return VAR_3;
    }
    if (!(VAR_4->tabs = FUNC_1( FUNC_0(), 0,
                                            VAR_4->nb_tabs * sizeof(INT) )))
        return VAR_1;
    FUNC_5( VAR_4->tabs, VAR_6, VAR_4->nb_tabs * sizeof(INT) );


    for (VAR_7 = 0; VAR_7 < VAR_4->nb_tabs; VAR_7++)
        VAR_4->tabs[VAR_7] = FUNC_3(VAR_4->tabs[VAR_7], VAR_4->avg_char_width, 4);

    return VAR_3;
}
