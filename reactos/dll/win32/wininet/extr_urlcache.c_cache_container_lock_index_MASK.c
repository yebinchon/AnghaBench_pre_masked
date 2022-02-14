
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ size; size_t signature; size_t dirs_no; TYPE_1__* directory_data; } ;
typedef TYPE_2__ urlcache_header ;
struct TYPE_11__ {scalar_t__ file_size; int mutex; int mapping; } ;
typedef TYPE_3__ cache_container ;
struct TYPE_9__ {scalar_t__ name; } ;
typedef scalar_t__ LPVOID ;
typedef scalar_t__ DWORD ;
typedef size_t BYTE ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,size_t,scalar_t__) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int ) ;

__attribute__((used)) static urlcache_header* FUNC_10(cache_container *VAR_4)
{
    BYTE VAR_5;
    LPVOID VAR_6;
    urlcache_header* VAR_7;
    DWORD VAR_8;


    FUNC_7(VAR_4->mutex, VAR_2);

    VAR_6 = FUNC_2(VAR_4->mapping, VAR_1, 0, 0, 0);

    if (!VAR_6)
    {
        FUNC_3(VAR_4->mutex);
        FUNC_0("Couldn't MapViewOfFile. Error: %d\n", FUNC_1());
        return ((void*)0);
    }
    VAR_7 = (urlcache_header*)VAR_6;




    if (VAR_7->size != VAR_4->file_size)
    {
        FUNC_6( VAR_7 );
        FUNC_8(VAR_4);
        VAR_8 = FUNC_9(VAR_4, VAR_3);
        if (VAR_8 != VAR_0)
        {
            FUNC_3(VAR_4->mutex);
            FUNC_4(VAR_8);
            return ((void*)0);
        }
        VAR_6 = FUNC_2(VAR_4->mapping, VAR_1, 0, 0, 0);

        if (!VAR_6)
        {
            FUNC_3(VAR_4->mutex);
            FUNC_0("Couldn't MapViewOfFile. Error: %d\n", FUNC_1());
            return ((void*)0);
        }
        VAR_7 = (urlcache_header*)VAR_6;
    }

    FUNC_5("Signature: %s, file size: %d bytes\n", VAR_7->signature, VAR_7->size);

    for (VAR_5 = 0; VAR_5 < VAR_7->dirs_no; VAR_5++)
    {
        FUNC_5("Directory[%d] = \"%.8s\"\n", VAR_5, VAR_7->directory_data[VAR_5].name);
    }

    return VAR_7;
}
