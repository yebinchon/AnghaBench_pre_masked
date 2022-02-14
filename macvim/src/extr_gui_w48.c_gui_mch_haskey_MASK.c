
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ char_u ;
struct TYPE_2__ {scalar_t__ vim_code1; scalar_t__ vim_code0; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

int
FUNC_0(char_u *VAR_4)
{
    int VAR_5;

    for (VAR_5 = 0; VAR_3[VAR_5].vim_code1 != VAR_1; VAR_5++)
 if (VAR_4[0] == VAR_3[VAR_5].vim_code0 &&
      VAR_4[1] == VAR_3[VAR_5].vim_code1)
     return VAR_2;
    return VAR_0;
}
