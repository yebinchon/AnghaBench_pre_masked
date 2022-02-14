
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int save_stream_num; } ;
typedef int IStream ;
typedef int IStorage ;
typedef int HRESULT ;
typedef TYPE_1__ DataCacheEntry ;
typedef scalar_t__ BOOL ;


 int* VAR_0 ;
 int FUNC_0 (int *,int const*,int,int ,int ,int **) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_1(DataCacheEntry *VAR_4, IStorage *VAR_5,
                             BOOL VAR_6, IStream **VAR_7)
{
    WCHAR VAR_8[] = {2,'O','l','e','P','r','e','s',
        '0' + (VAR_4->save_stream_num / 100) % 10,
        '0' + (VAR_4->save_stream_num / 10) % 10,
        '0' + VAR_4->save_stream_num % 10, 0};
    const WCHAR *VAR_9;

    if (VAR_6)
        VAR_9 = VAR_0;
    else
        VAR_9 = VAR_8;

    return FUNC_0(VAR_5, VAR_9,
                                 VAR_2 | VAR_3 | VAR_1,
                                 0, 0, VAR_7);
}
