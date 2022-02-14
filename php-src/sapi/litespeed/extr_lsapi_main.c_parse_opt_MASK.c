
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3( int VAR_3, char * VAR_4[], int *VAR_5,
                        char **VAR_6, char ** VAR_7 )
{
    char ** VAR_8 = &VAR_4[1];
    char ** VAR_9= &VAR_4[VAR_3];
    int VAR_10;
    while (( VAR_8 < VAR_9 )&&(**VAR_8 == '-' )) {
        VAR_10 = *((*VAR_8)+1);
        ++VAR_8;
        switch( VAR_10 ) {
        case 'b':
            if ( VAR_8 >= VAR_9 ) {
                FUNC_1( VAR_2, "TCP or socket address must be specified following '-b' option.\n");
                return -1;
            }
            *VAR_7 = FUNC_2(*VAR_8++);
            break;

        case 'c':
            if ( VAR_8 >= VAR_9 ) {
                FUNC_1( VAR_2, "<path> or <file> must be specified following '-c' option.\n");

                return -1;
            }
            *VAR_6 = FUNC_2( *VAR_8++ );
            break;
        case 's':
            VAR_1 = 1;
            break;
        case 'n':
            VAR_0 = 1;
            break;
        case '?':
            if ( *((*(VAR_8-1))+2) == 's' )
                FUNC_0( 99 );
        case 'h':
        case 'i':
        case 'l':
        case 'q':
        case 'v':
        default:
            *VAR_5 = 1;
            break;
        }
    }
    if ( VAR_8 - VAR_4 < VAR_3 ) {
        *VAR_5 = 1;
    }
    return 0;
}
