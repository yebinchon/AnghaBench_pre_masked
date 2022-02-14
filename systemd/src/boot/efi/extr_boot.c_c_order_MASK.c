
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char UINTN ;
typedef char CHAR16 ;


 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static UINTN FUNC_1(CHAR16 VAR_0) {
        if (VAR_0 == '\0')
                return 0;
        if (FUNC_0(VAR_0))
                return 0;
        else if ((VAR_0 >= 'a') && (VAR_0 <= 'z'))
                return VAR_0;
        else
                return VAR_0 + 0x10000;
}
