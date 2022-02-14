
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LOGBRUSH ;
typedef int HBRUSH ;
typedef int GpBrush ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int const*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static HBRUSH FUNC_3(const GpBrush *VAR_1)
{
    LOGBRUSH VAR_2;
    HBRUSH VAR_3;

    if (FUNC_1(VAR_1, &VAR_2) != VAR_0) return 0;

    VAR_3 = FUNC_0(&VAR_2);
    FUNC_2(&VAR_2);

    return VAR_3;
}
