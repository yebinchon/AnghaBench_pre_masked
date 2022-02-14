
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; scalar_t__ freed; } ;
typedef TYPE_1__ data_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1 (void *VAR_3)
{
  data_t *VAR_4 = (data_t *) VAR_3;

  FUNC_0 (VAR_4->value == VAR_0 || VAR_4->value == VAR_1);
  FUNC_0 (!VAR_4->freed);
  VAR_4->freed = VAR_2;
}
