
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int gsize ;
struct TYPE_6__ {int cancel; int separator; int data_input_stream; int input_stream; } ;
typedef TYPE_1__ DmenuModePrivateData ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *,int *) ;
 char* FUNC_2 (int ,int *,int,int *,int *,int *) ;
 int FUNC_3 (int ,int *,int,int ,int ,int ,TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*,int ) ;

__attribute__((used)) static int FUNC_7 ( DmenuModePrivateData *VAR_5, int VAR_6 )
{
    while ( VAR_6-- ) {
        gsize VAR_7 = 0;
        char *VAR_8 = FUNC_2 ( VAR_5->data_input_stream, &( VAR_5->separator ), 1, &VAR_7, ((void*)0), ((void*)0) );
        if ( VAR_8 == ((void*)0) ) {
            FUNC_5 ( FUNC_0 ( VAR_5->input_stream ), VAR_1, VAR_5->cancel, VAR_3, VAR_5 );
            return VAR_0;
        }
        FUNC_1 ( VAR_5->data_input_stream, ((void*)0), ((void*)0) );
        FUNC_6 ( VAR_5, VAR_8, VAR_7 );
        FUNC_4 ( VAR_8 );
    }
    FUNC_3 ( VAR_5->data_input_stream, &( VAR_5->separator ), 1, VAR_1, VAR_5->cancel,
                                          VAR_4, VAR_5 );
    return VAR_2;
}
