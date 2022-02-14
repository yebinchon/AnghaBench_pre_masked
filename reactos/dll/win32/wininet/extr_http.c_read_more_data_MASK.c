
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ read_size; scalar_t__ read_buf; int netconn; scalar_t__ read_pos; } ;
typedef TYPE_1__ http_request_t ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__,int ,int*) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static DWORD FUNC_2( http_request_t *VAR_2, int VAR_3 )
{
    DWORD VAR_4;
    int VAR_5;

    if (VAR_2->read_pos)
    {

        if(VAR_2->read_size)
            FUNC_1( VAR_2->read_buf, VAR_2->read_buf + VAR_2->read_pos, VAR_2->read_size );
        VAR_2->read_pos = 0;
    }

    if (VAR_3 == -1) VAR_3 = sizeof(VAR_2->read_buf);

    VAR_4 = FUNC_0( VAR_2->netconn, VAR_2->read_buf + VAR_2->read_size,
                       VAR_3 - VAR_2->read_size, VAR_1, &VAR_5 );
    if(VAR_4 == VAR_0)
        VAR_2->read_size += VAR_5;

    return VAR_4;
}
