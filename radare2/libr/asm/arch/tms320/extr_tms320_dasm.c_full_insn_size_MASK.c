
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; } ;
typedef TYPE_1__ tms320_dasm_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(tms320_dasm_t * VAR_2)
{
 int VAR_3 = 0;

 if (FUNC_0 (VAR_2, VAR_0)) {
  VAR_3 = 1;
 }
 if (FUNC_0 (VAR_2, VAR_1)) {
  VAR_3 = 1;
 }

 return VAR_2->length + VAR_3;
}
