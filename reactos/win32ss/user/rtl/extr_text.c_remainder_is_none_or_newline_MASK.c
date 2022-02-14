
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0 (int VAR_4, const WCHAR *VAR_5)
{
    if (!VAR_4) return VAR_3;
    if (*VAR_5 != VAR_2 && *VAR_5 != VAR_0) return VAR_1;
    if (!--VAR_4) return VAR_3;
    if (*VAR_5 == *(VAR_5+1)) return VAR_1;
    VAR_5++;
    if (*VAR_5 != VAR_0 && *VAR_5 != VAR_2) return VAR_1;
    if (--VAR_4) return VAR_1;
    return VAR_3;
}
