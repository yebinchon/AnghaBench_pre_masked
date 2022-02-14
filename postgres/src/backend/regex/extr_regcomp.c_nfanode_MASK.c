
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int nfa; int cm; } ;
struct subre {int cnfa; int end; int * begin; } ;
struct nfa {int final; int init; } ;
typedef int idbuf ;
typedef int FILE ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nfa*,int *) ;
 int FUNC_4 (struct nfa*,int *,int ,int ,int ) ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (struct nfa*) ;
 int FUNC_7 (struct vars*,struct nfa*) ;
 struct nfa* FUNC_8 (struct vars*,int ,int ) ;
 long FUNC_9 (struct nfa*,int *) ;
 int FUNC_10 (struct nfa*) ;
 char* FUNC_11 (struct subre*,char*,int) ;

__attribute__((used)) static long
FUNC_12(struct vars *VAR_0,
  struct subre *VAR_1,
  int VAR_2,
  FILE *VAR_3)
{
 struct nfa *VAR_4;
 long VAR_5 = 0;

 FUNC_2(VAR_1->begin != ((void*)0));
 VAR_4 = FUNC_8(VAR_0, VAR_0->cm, VAR_0->nfa);
 FUNC_1();
 FUNC_4(VAR_4, VAR_1->begin, VAR_1->end, VAR_4->init, VAR_4->final);
 if (!FUNC_0())
  FUNC_10(VAR_4);
 if (!FUNC_0())
  VAR_5 = FUNC_9(VAR_4, VAR_3);
 if (VAR_2 && !FUNC_0())
  FUNC_7(VAR_0, VAR_4);
 if (!FUNC_0())
  FUNC_3(VAR_4, &VAR_1->cnfa);

 FUNC_6(VAR_4);
 return VAR_5;
}
