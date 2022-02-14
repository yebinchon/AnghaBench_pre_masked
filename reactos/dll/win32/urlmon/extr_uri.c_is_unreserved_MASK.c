
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;

__attribute__((used)) static inline BOOL FUNC_2(WCHAR VAR_0) {
    return (FUNC_0(VAR_0) || FUNC_1(VAR_0) || VAR_0 == '-' || VAR_0 == '.' ||
            VAR_0 == '_' || VAR_0 == '~');
}
