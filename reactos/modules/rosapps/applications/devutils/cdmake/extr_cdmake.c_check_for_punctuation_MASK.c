
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(int VAR_1, const char *VAR_2)
{
    VAR_1 = FUNC_2(VAR_1 & 0xFF);
    if (!VAR_0 && !FUNC_1(VAR_1) && VAR_1 != '_')
        FUNC_0("Punctuation mark in %s", VAR_2);
    return VAR_1;
}
