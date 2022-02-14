
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {size_t d; scalar_t__ magic; } ;
typedef TYPE_1__ div_info_t ;


 int FUNC_0 (int) ;

void
FUNC_1(div_info_t *VAR_0, size_t VAR_1) {

 FUNC_0(VAR_1 != 0);





 FUNC_0(VAR_1 != 1);

 uint64_t VAR_2 = ((uint64_t)1 << 32);
 uint32_t VAR_3 = (uint32_t)(VAR_2 / VAR_1);






 if (VAR_2 % VAR_1 != 0) {
  VAR_3++;
 }
 VAR_0->magic = VAR_3;



}
