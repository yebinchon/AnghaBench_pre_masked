
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int gsize ;
struct TYPE_5__ {int cancel; int input_stream; int data_input_stream; int separator; } ;
typedef TYPE_1__ DmenuModePrivateData ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int *) ;
 char* FUNC_2 (int ,int *,int,int *,int *,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*,int ) ;

__attribute__((used)) static void FUNC_6 ( DmenuModePrivateData *VAR_3 )
{
    while ( VAR_1 ) {
        gsize VAR_4 = 0;
        char *VAR_5 = FUNC_2 ( VAR_3->data_input_stream, &( VAR_3->separator ), 1, &VAR_4, ((void*)0), ((void*)0) );
        if ( VAR_5 == ((void*)0) ) {
            break;
        }
        FUNC_1 ( VAR_3->data_input_stream, ((void*)0), ((void*)0) );
        FUNC_5 ( VAR_3, VAR_5, VAR_4 );
        FUNC_3 ( VAR_5 );
    }
    FUNC_4 ( FUNC_0 ( VAR_3->input_stream ), VAR_0, VAR_3->cancel, VAR_2, VAR_3 );
}
