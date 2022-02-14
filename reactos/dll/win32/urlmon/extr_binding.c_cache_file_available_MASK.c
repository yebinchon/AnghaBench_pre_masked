
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {TYPE_1__* stgmed_buf; scalar_t__ use_cache_file; } ;
struct TYPE_4__ {scalar_t__ file; int cache_file; } ;
typedef TYPE_2__ Binding ;


 scalar_t__ FUNC_0 (int const*,int ,int,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int const*) ;

__attribute__((used)) static void FUNC_5(Binding *VAR_6, const WCHAR *VAR_7)
{
    FUNC_3(VAR_6->stgmed_buf->cache_file);
    VAR_6->stgmed_buf->cache_file = FUNC_4(VAR_7);

    if(VAR_6->use_cache_file) {
        VAR_6->stgmed_buf->file = FUNC_0(VAR_7, VAR_3, VAR_1|VAR_2, ((void*)0),
                VAR_5, VAR_0, ((void*)0));
        if(VAR_6->stgmed_buf->file == VAR_4)
            FUNC_2("CreateFile failed: %u\n", FUNC_1());
    }
}
