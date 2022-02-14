
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;

__attribute__((used)) static int FUNC_1(const unsigned char *VAR_4)
{
    int VAR_5;
    uint32_t VAR_6;

    if (FUNC_0((uint32_t *) VAR_4) != VAR_0 ||
 FUNC_0((uint32_t *) (VAR_4 + VAR_3 - 4)) != VAR_2)
 return 0;

    VAR_6 = 0;
    for (VAR_5 = 4; VAR_5 < VAR_3 - 4; VAR_5 += 4)
 VAR_6 += FUNC_0((uint32_t *) (VAR_4 + VAR_5));

    return VAR_6 == VAR_1;
}
