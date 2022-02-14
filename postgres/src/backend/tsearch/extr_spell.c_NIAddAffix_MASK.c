
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int pg_wchar ;
typedef int errstr ;
struct TYPE_6__ {int regex; int regis; } ;
struct TYPE_8__ {int issimple; int isregis; char flagflags; char const* flag; int type; char const* find; scalar_t__ replen; char const* repl; TYPE_1__ reg; } ;
struct TYPE_7__ {int naffixes; int maffixes; TYPE_3__* Affix; } ;
typedef TYPE_2__ IspellDict ;
typedef TYPE_3__ AFFIX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 char const* VAR_9 ;
 char const* FUNC_2 (TYPE_2__*,char const*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char*,int *,int) ;
 int FUNC_8 (int *,int *,int,int,int ) ;
 int FUNC_9 (int,int *,char*,int) ;
 scalar_t__ FUNC_10 (void*,int) ;
 int FUNC_11 (char*,char*,char const*) ;
 scalar_t__ FUNC_12 (char const*,char*) ;
 int FUNC_13 (char const*) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static void
FUNC_15(IspellDict *VAR_10, const char *VAR_11, char VAR_12, const char *VAR_13,
     const char *VAR_14, const char *VAR_15, int VAR_16)
{
 AFFIX *VAR_17;

 if (VAR_10->naffixes >= VAR_10->maffixes)
 {
  if (VAR_10->maffixes)
  {
   VAR_10->maffixes *= 2;
   VAR_10->Affix = (AFFIX *) FUNC_10((void *) VAR_10->Affix, VAR_10->maffixes * sizeof(AFFIX));
  }
  else
  {
   VAR_10->maffixes = 16;
   VAR_10->Affix = (AFFIX *) FUNC_6(VAR_10->maffixes * sizeof(AFFIX));
  }
 }

 VAR_17 = VAR_10->Affix + VAR_10->naffixes;


 if (FUNC_12(VAR_13, ".") == 0 || *VAR_13 == '\0')
 {
  VAR_17->issimple = 1;
  VAR_17->isregis = 0;
 }

 else if (FUNC_1(VAR_13))
 {
  VAR_17->issimple = 0;
  VAR_17->isregis = 1;
  FUNC_0(&(VAR_17->reg.regis), (VAR_16 == VAR_6),
       *VAR_13 ? VAR_13 : VAR_9);
 }

 else
 {
  int VAR_18;
  int VAR_19;
  int VAR_20;
  pg_wchar *VAR_21;
  char *VAR_22;

  VAR_17->issimple = 0;
  VAR_17->isregis = 0;
  VAR_22 = (char *) FUNC_14(FUNC_13(VAR_13) + 3);
  if (VAR_16 == VAR_6)
   FUNC_11(VAR_22, "%s$", VAR_13);
  else
   FUNC_11(VAR_22, "^%s", VAR_13);

  VAR_18 = FUNC_13(VAR_22);
  VAR_21 = (pg_wchar *) FUNC_14((VAR_18 + 1) * sizeof(pg_wchar));
  VAR_19 = FUNC_7(VAR_22, VAR_21, VAR_18);

  VAR_20 = FUNC_8(&(VAR_17->reg.regex), VAR_21, VAR_19,
       VAR_7 | VAR_8,
       VAR_0);
  if (VAR_20)
  {
   char VAR_23[100];

   FUNC_9(VAR_20, &(VAR_17->reg.regex), VAR_23, sizeof(VAR_23));
   FUNC_3(VAR_2,
     (FUNC_4(VAR_1),
      FUNC_5("invalid regular expression: %s", VAR_23)));
  }
 }

 VAR_17->flagflags = VAR_12;
 if ((VAR_17->flagflags & VAR_4) || (VAR_17->flagflags & VAR_5))
 {
  if ((VAR_17->flagflags & VAR_3) == 0)
   VAR_17->flagflags |= VAR_3;
 }
 VAR_17->flag = FUNC_2(VAR_10, VAR_11);
 VAR_17->type = VAR_16;

 VAR_17->find = (VAR_14 && *VAR_14) ? FUNC_2(VAR_10, VAR_14) : VAR_9;
 if ((VAR_17->replen = FUNC_13(VAR_15)) > 0)
  VAR_17->repl = FUNC_2(VAR_10, VAR_15);
 else
  VAR_17->repl = VAR_9;
 VAR_10->naffixes++;
}
