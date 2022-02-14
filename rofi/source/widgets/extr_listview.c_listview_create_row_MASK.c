
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;


struct TYPE_19__ {scalar_t__ multi_select; } ;
typedef TYPE_1__ listview ;
struct TYPE_20__ {TYPE_1__* textbox; TYPE_1__* box; TYPE_1__* icon; } ;
typedef TYPE_2__ _listview_row ;
typedef int TextboxFlags ;
struct TYPE_21__ {scalar_t__ data; } ;
struct TYPE_18__ {scalar_t__ show_icons; } ;
typedef TYPE_3__ GList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 TYPE_1__* FUNC_2 (int ,char*,int ) ;
 TYPE_14__ VAR_8 ;
 int VAR_9 ;
 TYPE_3__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_5 (TYPE_3__*) ;
 TYPE_1__* FUNC_6 (int ,char*) ;
 TYPE_3__* FUNC_7 (int ,char*,char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 TYPE_1__* FUNC_9 (int ,int ,char*,int,int ,char*,int ,int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11 ( listview *VAR_10, _listview_row *VAR_11 )
{
    TextboxFlags VAR_12 = ( VAR_10->multi_select ) ? VAR_4 : 0;
    VAR_11->box = FUNC_2 ( FUNC_0 ( VAR_10 ), "element",VAR_2 );
    FUNC_10 ( FUNC_0(VAR_11->box), VAR_6);
    GList *VAR_13 = FUNC_7 ( FUNC_0(VAR_11->box), "children", "element-icon,element-text");

    VAR_11->textbox = ((void*)0);
    VAR_11->icon = ((void*)0);

    for ( GList *VAR_14 = FUNC_3(VAR_13); VAR_14 != ((void*)0);VAR_14 = FUNC_5(VAR_14)){
        if ( FUNC_8((char *)VAR_14->data, "element-icon") == 0 ) {
            if ( VAR_8.show_icons ) {
                VAR_11->icon = FUNC_6 ( FUNC_0 ( VAR_11->box ), "element-icon" );
                FUNC_1 ( VAR_11->box, FUNC_0 ( VAR_11->icon ), VAR_0);
            }
        } else if ( FUNC_8 ((char *)VAR_14->data, "element-text") == 0 ){
            VAR_11->textbox= FUNC_9 ( FUNC_0 ( VAR_11->box ), VAR_7, "element-text", VAR_3|VAR_12, VAR_1, "DDD", 0, 0 );
            FUNC_1 ( VAR_11->box, FUNC_0 ( VAR_11->textbox ), VAR_5);
        }
    }
    FUNC_4 ( VAR_13, VAR_9 );
}
