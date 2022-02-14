
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;


 int FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(const char* VAR_0)
{
    ULONG VAR_1 = VAR_0 ? FUNC_0(VAR_0) : 0;
    return VAR_1 > 3 && VAR_0[0] == '_' && VAR_0[1] != '_' && VAR_0[VAR_1-1] == '_' && VAR_0[VAR_1-2] == '_';
}
