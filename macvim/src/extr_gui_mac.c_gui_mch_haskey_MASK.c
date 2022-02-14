
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ char_u ;
struct TYPE_2__ {scalar_t__ key_sym; scalar_t__ vim_code0; scalar_t__ vim_code1; } ;
typedef scalar_t__ KeySym ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

int
FUNC_0(char_u *VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_2[VAR_4].key_sym != (KeySym)0; VAR_4++)
 if (VAR_3[0] == VAR_2[VAR_4].vim_code0 &&
      VAR_3[1] == VAR_2[VAR_4].vim_code1)
     return VAR_1;
    return VAR_0;
}
