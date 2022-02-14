
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int* z; size_t i; int a; int b; } ;
typedef TYPE_1__ hash ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(hash *VAR_1, int VAR_2){
  u16 VAR_3 = VAR_1->z[VAR_1->i];
  VAR_1->z[VAR_1->i] = VAR_2;
  VAR_1->i = (VAR_1->i+1)&(VAR_0-1);
  VAR_1->a = VAR_1->a - VAR_3 + VAR_2;
  VAR_1->b = VAR_1->b - VAR_0*VAR_3 + VAR_1->a;
}
