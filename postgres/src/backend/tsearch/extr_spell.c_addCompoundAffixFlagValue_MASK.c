
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {int nCompoundAffixFlag; int mCompoundAffixFlag; int usecompound; int * CompoundAffixFlags; } ;
typedef TYPE_1__ IspellDict ;
typedef int CompoundAffixFlag ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (void*,int) ;
 int FUNC_6 (TYPE_1__*,int *,char*,int ) ;
 scalar_t__ FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(IspellDict *VAR_3, char *VAR_4, uint32 VAR_5)
{
 CompoundAffixFlag *VAR_6;
 char VAR_7[VAR_0];
 char *VAR_8;
 int VAR_9;

 while (*VAR_4 && FUNC_7(VAR_4))
  VAR_4 += FUNC_4(VAR_4);

 if (!*VAR_4)
  FUNC_1(VAR_2,
    (FUNC_2(VAR_1),
     FUNC_3("syntax error")));


 VAR_8 = VAR_7;
 while (*VAR_4 && !FUNC_7(VAR_4) && *VAR_4 != '\n')
 {
  VAR_9 = FUNC_4(VAR_4);
  FUNC_0(VAR_8, VAR_4);
  VAR_8 += VAR_9;
  VAR_4 += VAR_9;
 }
 *VAR_8 = '\0';


 if (VAR_3->nCompoundAffixFlag >= VAR_3->mCompoundAffixFlag)
 {
  if (VAR_3->mCompoundAffixFlag)
  {
   VAR_3->mCompoundAffixFlag *= 2;
   VAR_3->CompoundAffixFlags = (CompoundAffixFlag *)
    FUNC_5((void *) VAR_3->CompoundAffixFlags,
       VAR_3->mCompoundAffixFlag * sizeof(CompoundAffixFlag));
  }
  else
  {
   VAR_3->mCompoundAffixFlag = 10;
   VAR_3->CompoundAffixFlags = (CompoundAffixFlag *)
    FUNC_8(VAR_3->mCompoundAffixFlag * sizeof(CompoundAffixFlag));
  }
 }

 VAR_6 = VAR_3->CompoundAffixFlags + VAR_3->nCompoundAffixFlag;

 FUNC_6(VAR_3, VAR_6, VAR_7, VAR_5);

 VAR_3->usecompound = 1;
 VAR_3->nCompoundAffixFlag++;
}
