
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int attinmeta; scalar_t__ user_fctx; } ;
struct TYPE_5__ {int lenlexeme; int ndoc; int nentry; int lexeme; } ;
typedef int TSVectorStat ;
typedef TYPE_1__ StatEntry ;
typedef int HeapTuple ;
typedef TYPE_2__ FuncCallContext ;
typedef int Datum ;


 int FUNC_0 (int ,char**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;
 TYPE_1__* FUNC_6 (int *) ;

__attribute__((used)) static Datum
FUNC_7(FuncCallContext *VAR_0)
{
 TSVectorStat *VAR_1;
 StatEntry *VAR_2;

 VAR_1 = (TSVectorStat *) VAR_0->user_fctx;

 VAR_2 = FUNC_6(VAR_1);

 if (VAR_2 != ((void*)0))
 {
  Datum VAR_3;
  char *VAR_4[3];
  char VAR_5[16];
  char VAR_6[16];
  HeapTuple VAR_7;

  VAR_4[0] = FUNC_3(VAR_2->lenlexeme + 1);
  FUNC_2(VAR_4[0], VAR_2->lexeme, VAR_2->lenlexeme);
  (VAR_4[0])[VAR_2->lenlexeme] = '\0';
  FUNC_5(VAR_5, "%d", VAR_2->ndoc);
  VAR_4[1] = VAR_5;
  FUNC_5(VAR_6, "%d", VAR_2->nentry);
  VAR_4[2] = VAR_6;

  VAR_7 = FUNC_0(VAR_0->attinmeta, VAR_4);
  VAR_3 = FUNC_1(VAR_7);

  FUNC_4(VAR_4[0]);


  VAR_2->ndoc = 0;

  return VAR_3;
 }

 return (Datum) 0;
}
