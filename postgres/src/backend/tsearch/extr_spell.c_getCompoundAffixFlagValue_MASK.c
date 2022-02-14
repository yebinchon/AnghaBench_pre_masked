
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_9__ {int value; } ;
struct TYPE_8__ {int nCompoundAffixFlag; scalar_t__ CompoundAffixFlags; } ;
typedef TYPE_1__ IspellDict ;
typedef TYPE_2__ CompoundAffixFlag ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,void*,int ,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char**,char*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,char*,int ) ;

__attribute__((used)) static int
FUNC_3(IspellDict *VAR_2, char *VAR_3)
{
 uint32 VAR_4 = 0;
 CompoundAffixFlag *VAR_5,
    VAR_6;
 char VAR_7[VAR_0];
 char *VAR_8;

 if (VAR_2->nCompoundAffixFlag == 0)
  return 0;

 VAR_8 = VAR_3;
 while (*VAR_8)
 {
  FUNC_1(VAR_2, &VAR_8, VAR_7);
  FUNC_2(VAR_2, &VAR_6, VAR_7, 0);

  VAR_5 = (CompoundAffixFlag *)
   FUNC_0(&VAR_6, (void *) VAR_2->CompoundAffixFlags,
     VAR_2->nCompoundAffixFlag, sizeof(CompoundAffixFlag),
     VAR_1);
  if (VAR_5 != ((void*)0))
   VAR_4 |= VAR_5->value;
 }

 return VAR_4;
}
