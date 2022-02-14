
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int logpageno; int level; } ;
typedef TYPE_1__ FSMAddress ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BlockNumber
FUNC_0(FSMAddress VAR_2)
{
 BlockNumber VAR_3;
 int VAR_4;
 int VAR_5;





 VAR_4 = VAR_2.logpageno;
 for (VAR_5 = 0; VAR_5 < VAR_2.level; VAR_5++)
  VAR_4 *= VAR_1;


 VAR_3 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
 {
  VAR_3 += VAR_4 + 1;
  VAR_4 /= VAR_1;
 }





 VAR_3 -= VAR_2.level;


 return VAR_3 - 1;
}
