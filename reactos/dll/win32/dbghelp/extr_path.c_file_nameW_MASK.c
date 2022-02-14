
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static inline const WCHAR* FUNC_2(const WCHAR* VAR_0)
{
    const WCHAR* VAR_1;

    for (VAR_1 = VAR_0 + FUNC_1(VAR_0) - 1; VAR_1 >= VAR_0 && !FUNC_0(*VAR_1); VAR_1--);
    return VAR_1 + 1;
}
