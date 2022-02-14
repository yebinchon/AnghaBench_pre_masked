
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_2__ {int oldestOffsetKnown; scalar_t__ oldestOffset; scalar_t__ nextMXact; scalar_t__ oldestMultiXactId; scalar_t__ nextOffset; } ;
typedef scalar_t__ MultiXactOffset ;
typedef scalar_t__ MultiXactId ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static bool
FUNC_2(uint32 *VAR_3, MultiXactOffset *VAR_4)
{
 MultiXactOffset VAR_5;
 MultiXactOffset VAR_6;
 MultiXactId VAR_7;
 MultiXactId VAR_8;
 bool VAR_9;

 FUNC_0(VAR_1, VAR_0);
 VAR_5 = VAR_2->nextOffset;
 VAR_7 = VAR_2->oldestMultiXactId;
 VAR_8 = VAR_2->nextMXact;
 VAR_6 = VAR_2->oldestOffset;
 VAR_9 = VAR_2->oldestOffsetKnown;
 FUNC_1(VAR_1);

 if (!VAR_9)
  return 0;

 *VAR_4 = VAR_5 - VAR_6;
 *VAR_3 = VAR_8 - VAR_7;
 return 1;
}
