
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int read_section; TYPE_3__* data_stream; int verb; int netconn; } ;
typedef TYPE_2__ http_request_t ;
struct TYPE_8__ {TYPE_1__* vtbl; } ;
struct TYPE_6__ {int (* drain_content ) (TYPE_3__*,TYPE_2__*,int ) ;} ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*,int ) ;
 int VAR_2 ;

__attribute__((used)) static DWORD FUNC_6(http_request_t *VAR_3, BOOL VAR_4)
{
    DWORD VAR_5;

    FUNC_2("%p\n", VAR_3->netconn);

    if(!FUNC_3(VAR_3->netconn))
        return VAR_0;

    if(!FUNC_4(VAR_3->verb, VAR_2))
        return VAR_1;

    FUNC_0( &VAR_3->read_section );
    VAR_5 = VAR_3->data_stream->vtbl->drain_content(VAR_3->data_stream, VAR_3, VAR_4);
    FUNC_1( &VAR_3->read_section );
    return VAR_5;
}
