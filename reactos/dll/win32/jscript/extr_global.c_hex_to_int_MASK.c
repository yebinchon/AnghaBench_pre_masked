
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 scalar_t__ FUNC_0 (int const) ;
 char FUNC_1 (int const) ;

__attribute__((used)) static inline int FUNC_2(const WCHAR VAR_0) {
    if(FUNC_1(VAR_0)>='A' && FUNC_1(VAR_0)<='F') return FUNC_1(VAR_0)-'A'+10;
    if(FUNC_0(VAR_0)) return VAR_0-'0';
    return -1;
}
