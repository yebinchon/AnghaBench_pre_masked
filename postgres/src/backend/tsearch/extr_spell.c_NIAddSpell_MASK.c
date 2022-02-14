
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int nspell; int mspell; TYPE_2__** Spell; } ;
struct TYPE_7__ {int flag; } ;
struct TYPE_8__ {TYPE_1__ p; int word; } ;
typedef TYPE_2__ SPELL ;
typedef TYPE_3__ IspellDict ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,char const*) ;
 scalar_t__ FUNC_1 (TYPE_2__**,int) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(IspellDict *VAR_2, const char *VAR_3, const char *VAR_4)
{
 if (VAR_2->nspell >= VAR_2->mspell)
 {
  if (VAR_2->mspell)
  {
   VAR_2->mspell *= 2;
   VAR_2->Spell = (SPELL **) FUNC_1(VAR_2->Spell, VAR_2->mspell * sizeof(SPELL *));
  }
  else
  {
   VAR_2->mspell = 1024 * 20;
   VAR_2->Spell = (SPELL **) FUNC_4(VAR_2->mspell * sizeof(SPELL *));
  }
 }
 VAR_2->Spell[VAR_2->nspell] = (SPELL *) FUNC_4(VAR_0 + FUNC_3(VAR_3) + 1);
 FUNC_2(VAR_2->Spell[VAR_2->nspell]->word, VAR_3);
 VAR_2->Spell[VAR_2->nspell]->p.flag = (*VAR_4 != '\0')
  ? FUNC_0(VAR_2, VAR_4) : VAR_1;
 VAR_2->nspell++;
}
