
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ read_size; scalar_t__ read_buf; scalar_t__ read_pos; int read_section; } ;
typedef TYPE_1__ http_request_t ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (void*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int *,scalar_t__,scalar_t__*,int ) ;

__attribute__((used)) static DWORD FUNC_8(http_request_t *VAR_4, void *VAR_5, DWORD VAR_6, DWORD *VAR_7, BOOL VAR_8)
{
    DWORD VAR_9 = 0, VAR_10 = 0;
    DWORD VAR_11 = VAR_0;

    FUNC_0( &VAR_4->read_section );

    if(VAR_4->read_size) {
        VAR_10 = FUNC_6(VAR_6, VAR_4->read_size);
        FUNC_5(VAR_5, VAR_4->read_buf+VAR_4->read_pos, VAR_10);
        VAR_4->read_size -= VAR_10;
        VAR_4->read_pos += VAR_10;
        VAR_8 = VAR_1;
    }

    if(VAR_10 < VAR_6) {
        VAR_11 = FUNC_7(VAR_4, (BYTE*)VAR_5+VAR_10, VAR_6-VAR_10, &VAR_9, VAR_8);
        if(VAR_11 == VAR_0)
            VAR_10 += VAR_9;
        else if(VAR_11 == VAR_3 && VAR_10)
            VAR_11 = VAR_0;
    }

    FUNC_1( &VAR_4->read_section );

    *VAR_7 = VAR_10;
    FUNC_2( "retrieved %u bytes (res %u)\n", VAR_10, VAR_11 );

    if(VAR_11 != VAR_3) {
        if(VAR_11 != VAR_0)
            FUNC_4(VAR_4, VAR_1);
        else if(!VAR_10 && FUNC_3(VAR_4, VAR_1) == VAR_0)
            FUNC_4(VAR_4, VAR_2);
    }

    return VAR_11;
}
