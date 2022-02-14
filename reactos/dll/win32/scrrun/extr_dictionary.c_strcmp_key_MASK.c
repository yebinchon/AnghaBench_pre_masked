
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ method; } ;
typedef TYPE_1__ dictionary ;
typedef int WCHAR ;
typedef int VARIANT ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int const*) ;
 int FUNC_1 (int const*,int const*) ;
 int FUNC_2 (int const*,int const*) ;

__attribute__((used)) static inline int FUNC_3(const dictionary *VAR_1, const VARIANT *VAR_2, const VARIANT *VAR_3)
{
    const WCHAR *VAR_4, *VAR_5;

    VAR_4 = FUNC_0(VAR_2);
    VAR_5 = FUNC_0(VAR_3);
    return VAR_1->method == VAR_0 ? FUNC_1(VAR_4, VAR_5) : FUNC_2(VAR_4, VAR_5);
}
