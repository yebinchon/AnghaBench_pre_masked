
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int entry; struct TYPE_4__* path; int * mutex; void* cache_prefix; int default_entry_type; scalar_t__ file_size; int * mapping; } ;
typedef TYPE_1__ cache_container ;
typedef int LPWSTR ;
typedef int LPCWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (void*,char const*,int) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static BOOL FUNC_11(const char *VAR_3, LPCWSTR VAR_4,
        DWORD VAR_5, LPWSTR VAR_6)
{
    cache_container *VAR_7 = FUNC_5(sizeof(cache_container));
    int VAR_8 = FUNC_10(VAR_3);

    if (!VAR_7)
    {
        return VAR_0;
    }

    VAR_7->mapping = ((void*)0);
    VAR_7->file_size = 0;
    VAR_7->default_entry_type = VAR_5;

    VAR_7->path = FUNC_7(VAR_4);
    if (!VAR_7->path)
    {
        FUNC_6(VAR_7);
        return VAR_0;
    }

    VAR_7->cache_prefix = FUNC_5(VAR_8+1);
    if (!VAR_7->cache_prefix)
    {
        FUNC_6(VAR_7->path);
        FUNC_6(VAR_7);
        return VAR_0;
    }

    FUNC_9(VAR_7->cache_prefix, VAR_3, VAR_8+1);

    FUNC_0(VAR_6);
    FUNC_4(VAR_6, '!');

    if ((VAR_7->mutex = FUNC_1(((void*)0), VAR_0, VAR_6)) == ((void*)0))
    {
        FUNC_2("couldn't create mutex (error is %d)\n", FUNC_3());
        FUNC_6(VAR_7->path);
        FUNC_6(VAR_7);
        return VAR_0;
    }

    FUNC_8(&VAR_2, &VAR_7->entry);

    return VAR_1;
}
