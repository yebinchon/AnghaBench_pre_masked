
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int dwStyle; int hwndSelf; } ;
typedef int * LPCWSTR ;
typedef int DWORD ;
typedef TYPE_1__ DATETIME_INFO ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static BOOL
FUNC_4 (DATETIME_INFO *VAR_7, LPCWSTR VAR_8)
{
    WCHAR VAR_9[80];

    if (!VAR_8) {
 DWORD VAR_10;

 if (VAR_7->dwStyle & VAR_0)
     VAR_10 = VAR_2;
 else if ((VAR_7->dwStyle & VAR_1) == VAR_1)
     VAR_10 = VAR_4;
        else
     VAR_10 = VAR_3;
 FUNC_2(VAR_5, VAR_10, VAR_9, FUNC_0(VAR_9));
 VAR_8 = VAR_9;
    }

    FUNC_1 (VAR_7, VAR_8);
    FUNC_3 (VAR_7->hwndSelf, ((void*)0), VAR_6);

    return VAR_6;
}
