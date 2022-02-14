
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_4__ {scalar_t__ level; int logpageno; } ;
typedef TYPE_1__ FSMAddress ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static FSMAddress
FUNC_1(FSMAddress VAR_2, uint16 VAR_3)
{
 FSMAddress VAR_4;

 FUNC_0(VAR_2.level > VAR_0);

 VAR_4.level = VAR_2.level - 1;
 VAR_4.logpageno = VAR_2.logpageno * VAR_1 + VAR_3;

 return VAR_4;
}
