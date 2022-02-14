
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int myProc; } ;
typedef TYPE_1__ PROCLOCKTAG ;
typedef scalar_t__ Datum ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline uint32
FUNC_1(const PROCLOCKTAG *VAR_1, uint32 VAR_2)
{
 uint32 VAR_3 = VAR_2;
 Datum VAR_4;




 VAR_4 = FUNC_0(VAR_1->myProc);
 VAR_3 ^= ((uint32) VAR_4) << VAR_0;

 return VAR_3;
}
