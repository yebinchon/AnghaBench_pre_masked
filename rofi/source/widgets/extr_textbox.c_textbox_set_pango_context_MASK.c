
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gpointer ;
struct TYPE_4__ {int * metrics; scalar_t__ height; } ;
typedef TYPE_1__ TBFontConfig ;
typedef int PangoContext ;


 char const* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 int * FUNC_4 (int ,int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_3 ;

void FUNC_7 ( const char *VAR_4, PangoContext *VAR_5 )
{
    FUNC_0 ( VAR_2 == ((void*)0) );
    VAR_1 = FUNC_3 ( VAR_5 );
    VAR_2 = FUNC_4 ( VAR_1, ((void*)0), ((void*)0) );
    TBFontConfig *VAR_6 = FUNC_2 ( sizeof ( TBFontConfig ) );
    VAR_6->metrics = VAR_2;
    VAR_6->height = FUNC_5 ( VAR_6->metrics ) + FUNC_6 ( VAR_6->metrics );
    FUNC_1 ( VAR_3, (gpointer *) ( VAR_4 ? VAR_4 : VAR_0 ), VAR_6 );
}
