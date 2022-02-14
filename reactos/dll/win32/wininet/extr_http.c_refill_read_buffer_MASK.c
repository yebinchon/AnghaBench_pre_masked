
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int read_size; int read_pos; int read_buf; } ;
typedef TYPE_1__ http_request_t ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,int) ;
 int FUNC_1 (int,int,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int ,scalar_t__*,int ) ;

__attribute__((used)) static DWORD FUNC_3(http_request_t *VAR_1, BOOL VAR_2, DWORD *VAR_3)
{
    DWORD VAR_4, VAR_5=0;

    if(VAR_1->read_size == sizeof(VAR_1->read_buf))
        return VAR_0;

    if(VAR_1->read_pos) {
        if(VAR_1->read_size)
            FUNC_1(VAR_1->read_buf, VAR_1->read_buf+VAR_1->read_pos, VAR_1->read_size);
        VAR_1->read_pos = 0;
    }

    VAR_4 = FUNC_2(VAR_1, VAR_1->read_buf+VAR_1->read_size, sizeof(VAR_1->read_buf) - VAR_1->read_size,
            &VAR_5, VAR_2);
    if(VAR_4 != VAR_0)
        return VAR_4;

    VAR_1->read_size += VAR_5;

    FUNC_0("read %u bytes, read_size %u\n", VAR_5, VAR_1->read_size);
    if(VAR_3)
        *VAR_3 = VAR_5;
    return VAR_4;
}
