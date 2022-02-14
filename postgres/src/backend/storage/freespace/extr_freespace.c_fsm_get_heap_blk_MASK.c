
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16 ;
struct TYPE_3__ {scalar_t__ level; scalar_t__ logpageno; } ;
typedef TYPE_1__ FSMAddress ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static BlockNumber
FUNC_1(FSMAddress VAR_2, uint16 VAR_3)
{
 FUNC_0(VAR_2.level == VAR_0);
 return ((unsigned int) VAR_2.logpageno) * VAR_1 + VAR_3;
}
