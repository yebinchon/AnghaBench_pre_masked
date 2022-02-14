
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int substr_t ;
typedef int comp ;
typedef char WCHAR ;
struct TYPE_3__ {int member_0; int dwHostNameLength; int dwUrlPathLength; char* lpszUrlPath; char const* lpszHostName; } ;
typedef TYPE_1__ URL_COMPONENTSW ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,int ,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (char const*,int) ;

__attribute__((used)) static BOOL FUNC_2(const WCHAR *VAR_2, substr_t *VAR_3, substr_t *VAR_4)
{
    URL_COMPONENTSW VAR_5 = { sizeof(VAR_5) };
    static const WCHAR VAR_6[] = {'/',0};

    VAR_5.dwHostNameLength = 1;
    VAR_5.dwUrlPathLength = 1;

    if(!FUNC_0(VAR_2, 0, 0, &VAR_5) || !VAR_5.dwHostNameLength)
        return VAR_0;


    while(VAR_5.dwUrlPathLength && VAR_5.lpszUrlPath[VAR_5.dwUrlPathLength-1] != '/')
        VAR_5.dwUrlPathLength--;

    *VAR_3 = FUNC_1(VAR_5.lpszHostName, VAR_5.dwHostNameLength);
    *VAR_4 = VAR_5.dwUrlPathLength ? FUNC_1(VAR_5.lpszUrlPath, VAR_5.dwUrlPathLength) : FUNC_1(VAR_6, 1);
    return VAR_1;
}
