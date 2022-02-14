
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ URL_SCHEME ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline BOOL FUNC_0(URL_SCHEME VAR_1, WCHAR VAR_2) {
    return (!VAR_2 || (VAR_2 == '#' && VAR_1 != VAR_0) || VAR_2 == '?');
}
