
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ data; } ;
struct TYPE_11__ {char* str; } ;
typedef TYPE_1__ GString ;
typedef TYPE_2__ GList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_6 (char*) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static void FUNC_9 ()
{
    GString *VAR_4 = FUNC_6 ( "The following errors were detected when starting rofi:\n" );
    GList *VAR_5 = FUNC_0 ( VAR_3 );
    int VAR_6 = 0;
    for (; VAR_5 != ((void*)0) && VAR_6 < 2; VAR_5 = FUNC_2 ( VAR_5 ) ) {
        GString *VAR_7 = (GString *) ( VAR_5->data );
        FUNC_3 ( VAR_4, "\n\n" );
        FUNC_3 ( VAR_4, VAR_7->str );
        VAR_6++;
    }
    if ( FUNC_1 ( VAR_5 ) > 1 ) {
        FUNC_4 ( VAR_4, "\nThere are <b>%d</b> more errors.", FUNC_1 ( VAR_5 ) - 1 );
    }
    FUNC_8 ( VAR_4->str, VAR_0 );
    FUNC_5 ( VAR_4, VAR_2 );
    FUNC_7 ( VAR_1 );

}
