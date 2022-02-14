
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct use_connection_context {scalar_t__* buffer_size; int * accessname; TYPE_1__* resource; } ;
typedef int WCHAR ;
struct TYPE_2__ {int * lpRemoteName; } ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static DWORD FUNC_1(struct use_connection_context *VAR_2, WCHAR *VAR_3)
{
    if (VAR_2->accessname && VAR_2->buffer_size && *VAR_2->buffer_size)
    {
        DWORD VAR_4;

        if (VAR_3)
            VAR_4 = FUNC_0(VAR_3);
        else
            VAR_4 = FUNC_0(VAR_2->resource->lpRemoteName);

        if (++VAR_4 > *VAR_2->buffer_size)
        {
            *VAR_2->buffer_size = VAR_4;
            return VAR_0;
        }
    }
    else
        VAR_2->accessname = ((void*)0);

    return VAR_1;
}
