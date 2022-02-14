
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int8 ;
typedef int int16 ;
struct TYPE_3__ {int distance; int op; } ;
typedef TYPE_1__ OperatorElement ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void
FUNC_1(OperatorElement *VAR_2, int *VAR_3, int8 VAR_4, int16 VAR_5)
{
 if (*VAR_3 == VAR_1)
  FUNC_0(VAR_0, "tsquery stack too small");

 VAR_2[*VAR_3].op = VAR_4;
 VAR_2[*VAR_3].distance = VAR_5;

 (*VAR_3)++;
}
