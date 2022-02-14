
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ type; int flagflags; scalar_t__ replen; int * repl; int flag; } ;
struct TYPE_10__ {int issuffix; scalar_t__ len; int * affix; } ;
struct TYPE_9__ {int naffixes; void* Suffix; void* Prefix; TYPE_2__* CompoundAffix; scalar_t__ Affix; } ;
typedef TYPE_1__ IspellDict ;
typedef TYPE_2__ CMPDAffix ;
typedef TYPE_3__ AFFIX ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 void* FUNC_1 (TYPE_1__*,int,int,int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (void*,int,int,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int) ;
 scalar_t__ FUNC_6 (unsigned char const*,unsigned char const*,scalar_t__) ;

void
FUNC_7(IspellDict *VAR_4)
{
 AFFIX *VAR_5;
 size_t VAR_6;
 CMPDAffix *VAR_7;
 int VAR_8 = VAR_4->naffixes;

 if (VAR_4->naffixes == 0)
  return;


 if (VAR_4->naffixes > 1)
  FUNC_4((void *) VAR_4->Affix, VAR_4->naffixes, sizeof(AFFIX), VAR_3);
 VAR_4->CompoundAffix = VAR_7 = (CMPDAffix *) FUNC_3(sizeof(CMPDAffix) * VAR_4->naffixes);
 VAR_7->affix = ((void*)0);

 for (VAR_6 = 0; VAR_6 < VAR_4->naffixes; VAR_6++)
 {
  VAR_5 = &(((AFFIX *) VAR_4->Affix)[VAR_6]);
  if (VAR_5->type == VAR_2 && VAR_6 < VAR_8)
   VAR_8 = VAR_6;

  if ((VAR_5->flagflags & VAR_0) && VAR_5->replen > 0 &&
   FUNC_0(VAR_4, VAR_5->flag))
  {
   bool VAR_9 = (VAR_5->type == VAR_2);

   if (VAR_7 == VAR_4->CompoundAffix ||
    VAR_9 != (VAR_7 - 1)->issuffix ||
    FUNC_6((const unsigned char *) (VAR_7 - 1)->affix,
       (const unsigned char *) VAR_5->repl,
       (VAR_7 - 1)->len))
   {

    VAR_7->affix = VAR_5->repl;
    VAR_7->len = VAR_5->replen;
    VAR_7->issuffix = VAR_9;
    VAR_7++;
   }
  }
 }
 VAR_7->affix = ((void*)0);
 VAR_4->CompoundAffix = (CMPDAffix *) FUNC_5(VAR_4->CompoundAffix, sizeof(CMPDAffix) * (VAR_7 - VAR_4->CompoundAffix + 1));


 VAR_4->Prefix = FUNC_1(VAR_4, 0, VAR_8, 0, VAR_1);
 VAR_4->Suffix = FUNC_1(VAR_4, VAR_8, VAR_4->naffixes, 0, VAR_2);
 FUNC_2(VAR_4, 1, VAR_8);
 FUNC_2(VAR_4, 0, VAR_8);
}
