
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* req_file; int last_modified; int expires; int * hCacheFile; } ;
typedef TYPE_2__ http_request_t ;
typedef int WCHAR ;
struct TYPE_6__ {int is_committed; int file_name; int url; } ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int *,int ,int *,int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (char*,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_4 (char*,int ) ;
 int * FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(http_request_t *VAR_2)
{
    WCHAR *VAR_3;
    DWORD VAR_4;
    BOOL VAR_5;

    FUNC_3("%p\n", VAR_2);

    FUNC_0(VAR_2->hCacheFile);
    VAR_2->hCacheFile = ((void*)0);

    VAR_3 = FUNC_5(VAR_2, VAR_1);
    VAR_4 = (VAR_3 ? FUNC_7(VAR_3) : 0);
    VAR_5 = FUNC_1(VAR_2->req_file->url, VAR_2->req_file->file_name, VAR_2->expires,
             VAR_2->last_modified, VAR_0,
            VAR_3, VAR_4, ((void*)0), 0);
    if(VAR_5)
        VAR_2->req_file->is_committed = VAR_1;
    else
        FUNC_4("CommitUrlCacheEntry failed: %u\n", FUNC_2());
    FUNC_6(VAR_3);
}
