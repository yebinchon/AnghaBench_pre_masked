
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int req_file_t ;
typedef int object_header_t ;
struct TYPE_3__ {int req_file; } ;
typedef TYPE_1__ http_request_t ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static DWORD FUNC_3(object_header_t *VAR_2, req_file_t **VAR_3)
{
    http_request_t *VAR_4 = (http_request_t*)VAR_2;

    FUNC_0("(%p)\n", VAR_4);

    if(!VAR_4->req_file) {
        FUNC_1("No cache file name available\n");
        return VAR_0;
    }

    *VAR_3 = FUNC_2(VAR_4->req_file);
    return VAR_1;
}
