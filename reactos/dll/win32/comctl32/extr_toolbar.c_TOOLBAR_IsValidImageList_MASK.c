
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TOOLBAR_INFO ;
typedef int INT ;
typedef int * HIMAGELIST ;
typedef int BOOL ;


 int * FUNC_0 (int const*,int ) ;
 int FUNC_1 (int const*,int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static inline BOOL
FUNC_3(const TOOLBAR_INFO *VAR_0, INT VAR_1)
{
    HIMAGELIST VAR_2 = FUNC_0(VAR_0, FUNC_1(VAR_0, VAR_1));
    return (VAR_2 != ((void*)0)) && (FUNC_2(VAR_2) > 0);
}
