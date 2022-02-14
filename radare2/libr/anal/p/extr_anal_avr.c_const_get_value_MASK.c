
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_3__ {int size; int value; } ;
typedef TYPE_1__ CPU_CONST ;


 int FUNC_0 (int) ;

__attribute__((used)) static ut32 FUNC_1(CPU_CONST *VAR_0) {
 return VAR_0 ? FUNC_0 (VAR_0->size * 8) & VAR_0->value : 0;
}
