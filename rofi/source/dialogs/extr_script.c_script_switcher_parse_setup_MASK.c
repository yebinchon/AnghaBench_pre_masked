
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int _get_display_value; int * _preprocess_input; int * _get_completion; int _get_icon; int _get_message; int _token_match; int _destroy; int _result; int _get_num_entries; int _init; int (* free ) (TYPE_1__*) ;void* ed; void* name; } ;
typedef TYPE_1__ Mode ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,unsigned int) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int) ;
 void* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_6 (char*,char const* const,char**) ;

Mode *FUNC_7 ( const char *VAR_9 )
{
    Mode *VAR_10 = FUNC_2 ( sizeof ( *VAR_10 ) );
    char *VAR_11 = ((void*)0);
    char *VAR_12 = FUNC_3 ( VAR_9 );
    unsigned int VAR_13 = 0;
    const char *const VAR_14 = ":";
    for ( char *VAR_15 = FUNC_6 ( VAR_12, VAR_14, &VAR_11 ); VAR_15 != ((void*)0); VAR_15 = FUNC_6 ( ((void*)0), VAR_14, &VAR_11 ) ) {
        if ( VAR_13 == 0 ) {
            VAR_10->name = FUNC_3 ( VAR_15 );
        }
        else if ( VAR_13 == 1 ) {
            VAR_10->ed = (void *) FUNC_4 ( VAR_15 );
        }
        VAR_13++;
    }
    FUNC_1 ( VAR_12 );
    if ( VAR_13 == 2 ) {
        VAR_10->free = FUNC_5;
        VAR_10->_init = VAR_5;
        VAR_10->_get_num_entries = VAR_4;
        VAR_10->_result = VAR_6;
        VAR_10->_destroy = VAR_3;
        VAR_10->_token_match = VAR_7;
        VAR_10->_get_message = VAR_2;
        VAR_10->_get_icon = VAR_1;
        VAR_10->_get_completion = ((void*)0),
        VAR_10->_preprocess_input = ((void*)0),
        VAR_10->_get_display_value = VAR_0;

        return VAR_10;
    }
    FUNC_0 ( VAR_8, "The script command '%s' has %u options, but needs 2: <name>:<script>.", VAR_9, VAR_13 );
    FUNC_5 ( VAR_10 );
    return ((void*)0);
}
