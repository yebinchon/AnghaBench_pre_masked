
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t dirs_no; TYPE_1__* directory_data; } ;
typedef TYPE_2__ urlcache_header ;
struct TYPE_8__ {int path; } ;
typedef TYPE_3__ cache_container ;
typedef int WCHAR ;
struct TYPE_6__ {int name; } ;
typedef char* LPWSTR ;
typedef int* LPLONG ;
typedef int LPCSTR ;
typedef int LONG ;
typedef size_t BYTE ;
typedef scalar_t__ BOOL ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,char*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static BOOL FUNC_3(
    const cache_container *VAR_5,
    const urlcache_header *VAR_6,
    LPCSTR VAR_7,
    BYTE VAR_8,
    LPWSTR VAR_9,
    LPLONG VAR_10,
    BOOL VAR_11)
{
    LONG VAR_12;
    int VAR_13 = FUNC_2(VAR_5->path);
    int VAR_14 = FUNC_0(VAR_1, 0, VAR_7, -1, ((void*)0), 0);
    if (VAR_8!=VAR_0 && VAR_8>=VAR_6->dirs_no)
    {
        *VAR_10 = 0;
        return VAR_3;
    }

    VAR_12 = (VAR_13 + VAR_14) * sizeof(WCHAR);
    if(VAR_8 != VAR_0)
        VAR_12 += (VAR_2 + 1) * sizeof(WCHAR);
    if (VAR_11 && VAR_12 >= *VAR_10)
        VAR_12 = *VAR_10;
    if (VAR_12 <= *VAR_10)
    {
        int VAR_15;

        FUNC_1(VAR_9, VAR_5->path, VAR_13 * sizeof(WCHAR));
        if (VAR_8 != VAR_0)
        {
            VAR_15 = FUNC_0(VAR_1, 0, VAR_6->directory_data[VAR_8].name, VAR_2, VAR_9 + VAR_13, VAR_2);
            VAR_9[VAR_15 + VAR_13] = '\\';
            VAR_15++;
        }
        else
        {
            VAR_15 = 0;
        }
        FUNC_0(VAR_1, 0, VAR_7, -1, VAR_9 + VAR_15 + VAR_13,
                *VAR_10/sizeof(WCHAR)-VAR_15-VAR_13);
        VAR_9[*VAR_10/sizeof(WCHAR)-1] = 0;
        *VAR_10 = VAR_12;
        return VAR_4;
    }
    *VAR_10 = VAR_12;
    return VAR_3;
}
