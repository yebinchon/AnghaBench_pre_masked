
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* data_stream; scalar_t__ hCacheFile; } ;
typedef TYPE_2__ http_request_t ;
struct TYPE_11__ {TYPE_1__* vtbl; } ;
struct TYPE_9__ {scalar_t__ (* read ) (TYPE_3__*,TYPE_2__*,int *,scalar_t__,scalar_t__*,int ) ;scalar_t__ (* end_of_data ) (TYPE_3__*,TYPE_2__*) ;} ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__,int *,scalar_t__,scalar_t__*,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_2__*,int *,scalar_t__,scalar_t__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static DWORD FUNC_7(http_request_t *VAR_1, BYTE *VAR_2, DWORD VAR_3, DWORD *VAR_4, BOOL VAR_5)
{
    DWORD VAR_6;

    VAR_6 = VAR_1->data_stream->vtbl->read(VAR_1->data_stream, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
    if(VAR_6 != VAR_0)
        *VAR_4 = 0;
    FUNC_3(*VAR_4 <= VAR_3);

    if(VAR_1->hCacheFile) {
        if(*VAR_4) {
            BOOL VAR_7;
            DWORD VAR_8;

            VAR_7 = FUNC_2(VAR_1->hCacheFile, VAR_2, *VAR_4, &VAR_8, ((void*)0));
            if(!VAR_7)
                FUNC_0("WriteFile failed: %u\n", FUNC_1());
        }

        if((VAR_6 == VAR_0 && !*VAR_4) || VAR_1->data_stream->vtbl->end_of_data(VAR_1->data_stream, VAR_1))
            FUNC_4(VAR_1);
    }

    return VAR_6;
}
