
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int read_pos; int read_size; int read_section; int * read_buf; } ;
typedef TYPE_1__ http_request_t ;
typedef char* LPSTR ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int *,char,int) ;
 int FUNC_6 (char*,int *,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,int) ;

__attribute__((used)) static DWORD FUNC_10( http_request_t *VAR_1, LPSTR VAR_2, DWORD *VAR_3 )
{
    int VAR_4, VAR_5, VAR_6 = 0;
    DWORD VAR_7;

    FUNC_0( &VAR_1->read_section );
    for (;;)
    {
        BYTE *VAR_8 = FUNC_5( VAR_1->read_buf + VAR_1->read_pos, '\n', VAR_1->read_size );

        if (VAR_8)
        {
            VAR_4 = VAR_8 - (VAR_1->read_buf + VAR_1->read_pos);
            VAR_5 = VAR_4 + 1;
        }
        else VAR_4 = VAR_5 = VAR_1->read_size;

        VAR_4 = FUNC_7( VAR_4, *VAR_3 - VAR_6 );
        FUNC_6( VAR_2 + VAR_6, VAR_1->read_buf + VAR_1->read_pos, VAR_4 );
        VAR_6 += VAR_4;
        FUNC_9( VAR_1, VAR_5 );
        if (VAR_8) break;

        if ((VAR_7 = FUNC_8( VAR_1, -1 )))
        {
            FUNC_3( "read failed %u\n", VAR_7 );
            FUNC_1( &VAR_1->read_section );
            return VAR_7;
        }
        if (!VAR_1->read_size)
        {
            *VAR_3 = 0;
            FUNC_2( "returning empty string\n" );
            FUNC_1( &VAR_1->read_section );
            return VAR_0;
        }
    }
    FUNC_1( &VAR_1->read_section );

    if (VAR_6 < *VAR_3)
    {
        if (VAR_6 && VAR_2[VAR_6 - 1] == '\r') VAR_6--;
        *VAR_3 = VAR_6 + 1;
    }
    VAR_2[*VAR_3 - 1] = 0;
    FUNC_2( "returning %s\n", FUNC_4(VAR_2));
    return VAR_0;
}
