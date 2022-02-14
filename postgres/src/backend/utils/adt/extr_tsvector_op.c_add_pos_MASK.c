
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16 ;
typedef int int32 ;
typedef int WordEntryPos ;
struct TYPE_8__ {int haspos; } ;
typedef TYPE_1__ WordEntry ;
struct TYPE_9__ {int npos; } ;
typedef int TSVector ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int * FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 TYPE_4__* FUNC_7 (int ,TYPE_1__*) ;

__attribute__((used)) static int32
FUNC_8(TSVector VAR_2, WordEntry *VAR_3,
  TSVector VAR_4, WordEntry *VAR_5,
  int32 VAR_6)
{
 uint16 *VAR_7 = &FUNC_7(VAR_4, VAR_5)->npos;
 int VAR_8;
 uint16 VAR_9 = FUNC_1(VAR_2, VAR_3),
    VAR_10;
 WordEntryPos *VAR_11 = FUNC_2(VAR_2, VAR_3),
      *VAR_12 = FUNC_2(VAR_4, VAR_5);

 if (!VAR_5->haspos)
  *VAR_7 = 0;

 VAR_10 = *VAR_7;
 for (VAR_8 = 0;
   VAR_8 < VAR_9 && *VAR_7 < VAR_1 &&
   (*VAR_7 == 0 || FUNC_3(VAR_12[*VAR_7 - 1]) != VAR_0 - 1);
   VAR_8++)
 {
  FUNC_6(VAR_12[*VAR_7], FUNC_4(VAR_11[VAR_8]));
  FUNC_5(VAR_12[*VAR_7], FUNC_0(FUNC_3(VAR_11[VAR_8]) + VAR_6));
  (*VAR_7)++;
 }

 if (*VAR_7 != VAR_10)
  VAR_5->haspos = 1;
 return *VAR_7 - VAR_10;
}
