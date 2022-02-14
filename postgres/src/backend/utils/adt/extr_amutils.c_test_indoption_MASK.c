
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* values; } ;
typedef TYPE_1__ int2vector ;
typedef int int16 ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int*) ;

__attribute__((used)) static bool
FUNC_3(HeapTuple VAR_2, int VAR_3, bool VAR_4,
      int16 VAR_5, int16 VAR_6,
      bool *VAR_7)
{
 Datum VAR_8;
 bool VAR_9;
 int2vector *VAR_10;
 int16 VAR_11;

 if (!VAR_4)
 {
  *VAR_7 = 0;
  return 1;
 }

 VAR_8 = FUNC_2(VAR_1, VAR_2,
       VAR_0, &VAR_9);
 FUNC_0(!VAR_9);

 VAR_10 = ((int2vector *) FUNC_1(VAR_8));
 VAR_11 = VAR_10->values[VAR_3 - 1];

 *VAR_7 = (VAR_11 & VAR_5) == VAR_6;

 return 1;
}
