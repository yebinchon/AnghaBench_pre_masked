
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_7__ {scalar_t__ private_data; } ;
struct TYPE_6__ {char** cmd_list; } ;
typedef TYPE_1__ RunModePrivateData ;
typedef int ModeMode ;
typedef TYPE_2__ Mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static ModeMode FUNC_4 ( Mode *VAR_12, int VAR_13, char **VAR_14, unsigned int VAR_15 )
{
    RunModePrivateData *VAR_16 = (RunModePrivateData *) VAR_12->private_data;
    ModeMode VAR_17 = VAR_8;

    gboolean VAR_18 = ( ( VAR_13 & VAR_0 ) == VAR_0 );

    if ( VAR_13 & VAR_4 ) {
        VAR_17 = VAR_9;
    }
    else if ( VAR_13 & VAR_6 ) {
        VAR_17 = VAR_10;
    }
    else if ( VAR_13 & VAR_7 ) {
        VAR_17 = ( VAR_13 & VAR_3 );
    }
    else if ( ( VAR_13 & VAR_5 ) && VAR_16->cmd_list[VAR_15] != ((void*)0) ) {
        FUNC_1 ( VAR_16->cmd_list[VAR_15], VAR_18 );
    }
    else if ( ( VAR_13 & VAR_1 ) && *VAR_14 != ((void*)0) && *VAR_14[0] != '\0' ) {
        FUNC_1 ( *VAR_14, VAR_18 );
    }
    else if ( ( VAR_13 & VAR_2 ) && VAR_16->cmd_list[VAR_15] ) {
        FUNC_0 ( VAR_16->cmd_list[VAR_15] );


        VAR_17 = VAR_11;
        FUNC_2 ( VAR_12 );
        FUNC_3 ( VAR_12 );
    }
    return VAR_17;
}
