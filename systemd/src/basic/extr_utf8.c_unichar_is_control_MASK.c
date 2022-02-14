
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char char32_t ;


 int FUNC_0 (char,char,char) ;

__attribute__((used)) static bool FUNC_1(char32_t VAR_0) {







        return (VAR_0 < ' ' && !FUNC_0(VAR_0, '\t', '\n')) ||
                (0x7F <= VAR_0 && VAR_0 <= 0x9F);
}
