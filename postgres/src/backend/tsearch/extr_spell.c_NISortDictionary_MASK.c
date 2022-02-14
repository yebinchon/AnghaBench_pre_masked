
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int nspell; int nAffixData; char** AffixData; int lenAffixData; int Dictionary; TYPE_3__** Spell; scalar_t__ useFlagAliases; } ;
struct TYPE_8__ {int affix; void* len; } ;
struct TYPE_9__ {char* flag; TYPE_1__ d; } ;
struct TYPE_10__ {int word; TYPE_2__ p; } ;
typedef int SPELL ;
typedef TYPE_4__ IspellDict ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (TYPE_4__*,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (TYPE_4__*,int ,int,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (void*,int,int,int ) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (char*,char**,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;

void
FUNC_13(IspellDict *VAR_6)
{
 int VAR_7;
 int VAR_8 = 0;
 int VAR_9;







 if (VAR_6->useFlagAliases)
 {
  for (VAR_7 = 0; VAR_7 < VAR_6->nspell; VAR_7++)
  {
   char *VAR_10;

   if (*VAR_6->Spell[VAR_7]->p.flag != '\0')
   {
    VAR_9 = FUNC_10(VAR_6->Spell[VAR_7]->p.flag, &VAR_10, 10);
    if (VAR_6->Spell[VAR_7]->p.flag == VAR_10 || VAR_5 == VAR_0)
     FUNC_2(VAR_2,
       (FUNC_3(VAR_1),
        FUNC_4("invalid affix alias \"%s\"",
         VAR_6->Spell[VAR_7]->p.flag)));
    if (VAR_9 < 0 || VAR_9 >= VAR_6->nAffixData)
     FUNC_2(VAR_2,
       (FUNC_3(VAR_1),
        FUNC_4("invalid affix alias \"%s\"",
         VAR_6->Spell[VAR_7]->p.flag)));
    if (*VAR_10 != '\0' && !FUNC_11(VAR_10) && !FUNC_12(VAR_10))
     FUNC_2(VAR_2,
       (FUNC_3(VAR_1),
        FUNC_4("invalid affix alias \"%s\"",
         VAR_6->Spell[VAR_7]->p.flag)));
   }
   else
   {




    VAR_9 = 0;
   }

   VAR_6->Spell[VAR_7]->p.d.affix = VAR_9;
   VAR_6->Spell[VAR_7]->p.d.len = FUNC_9(VAR_6->Spell[VAR_7]->word);
  }
 }

 else
 {

  FUNC_7((void *) VAR_6->Spell, VAR_6->nspell, sizeof(SPELL *),
     VAR_4);

  VAR_8 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_6->nspell; VAR_7++)
  {
   if (VAR_7 == 0 ||
    FUNC_8(VAR_6->Spell[VAR_7]->p.flag, VAR_6->Spell[VAR_7 - 1]->p.flag) != 0)
    VAR_8++;
  }






  VAR_6->AffixData = (char **) FUNC_6(VAR_8 * sizeof(char *));

  VAR_9 = -1;
  for (VAR_7 = 0; VAR_7 < VAR_6->nspell; VAR_7++)
  {
   if (VAR_7 == 0 ||
    FUNC_8(VAR_6->Spell[VAR_7]->p.flag, VAR_6->AffixData[VAR_9]) != 0)
   {
    VAR_9++;
    FUNC_0(VAR_9 < VAR_8);
    VAR_6->AffixData[VAR_9] = FUNC_1(VAR_6,
              VAR_6->Spell[VAR_7]->p.flag);
   }

   VAR_6->Spell[VAR_7]->p.d.affix = VAR_9;
   VAR_6->Spell[VAR_7]->p.d.len = FUNC_9(VAR_6->Spell[VAR_7]->word);
  }

  VAR_6->lenAffixData = VAR_6->nAffixData = VAR_8;
 }


 FUNC_7((void *) VAR_6->Spell, VAR_6->nspell, sizeof(SPELL *), VAR_3);
 VAR_6->Dictionary = FUNC_5(VAR_6, 0, VAR_6->nspell, 0);
}
