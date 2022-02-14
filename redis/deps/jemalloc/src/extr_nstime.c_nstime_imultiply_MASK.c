
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int ns; } ;
typedef TYPE_1__ nstime_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

void
FUNC_1(nstime_t *VAR_1, uint64_t VAR_2) {
 FUNC_0((((VAR_1->ns | VAR_2) & (VAR_0 << (sizeof(uint64_t) <<
     2))) == 0) || ((VAR_1->ns * VAR_2) / VAR_2 == VAR_1->ns));

 VAR_1->ns *= VAR_2;
}
