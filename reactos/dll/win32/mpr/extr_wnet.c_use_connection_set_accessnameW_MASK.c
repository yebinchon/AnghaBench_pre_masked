
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct use_connection_context {TYPE_1__* resource; int * result; int * accessname; } ;
typedef int WCHAR ;
struct TYPE_2__ {int * lpRemoteName; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct use_connection_context *VAR_1, WCHAR *VAR_2)
{
    WCHAR *VAR_3 = VAR_1->accessname;
    if (VAR_2)
    {
        FUNC_0(VAR_3, VAR_2);
        if (VAR_1->result)
            *VAR_1->result = VAR_0;
    }
    else
        FUNC_0(VAR_3, VAR_1->resource->lpRemoteName);
}
