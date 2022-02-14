
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct vars {scalar_t__ err; int cflags; int nsubs; int nlacons; struct subre* lacons; int ntree; TYPE_4__* tree; TYPE_1__* re; scalar_t__ nsubexp; TYPE_2__* nfa; int * cm; int nlcolor; int * cv; scalar_t__ spaceused; int * cv2; int * treefree; int * treechain; int * wordchrs; int ** subs; int ** sub10; int * savestop; int savenow; int const* now; int const* stop; } ;
struct subre {int subno; } ;
struct nfa {int dummy; } ;
struct guts {int nlacons; int cflags; struct subre* lacons; int compare; int ntree; TYPE_4__* tree; scalar_t__ nsub; int info; int magic; int search; int cmap; } ;
struct TYPE_17__ {int re_csize; scalar_t__ re_nsub; int re_info; int * re_guts; void* re_fns; int re_collation; int re_magic; } ;
typedef TYPE_1__ regex_t ;
typedef int chr ;
struct TYPE_19__ {int flags; } ;
struct TYPE_18__ {int final; int init; } ;
typedef int Oid ;
typedef int FILE ;
typedef int DISCARD ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (int ) ;
 int VAR_19 ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int VAR_20 ;
 int FUNC_8 (struct vars*) ;
 int VAR_21 ;
 int FUNC_9 (TYPE_2__*,int *) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 int FUNC_11 (TYPE_2__*,int *) ;
 int FUNC_12 (TYPE_4__*,int *,int) ;
 int FUNC_13 (int *,char*,...) ;
 int FUNC_14 (struct vars*,int ) ;
 int VAR_22 ;
 int FUNC_15 (struct vars*,int *) ;
 int FUNC_16 (struct vars*) ;
 int FUNC_17 (struct vars*,TYPE_2__*) ;
 int FUNC_18 (TYPE_4__*) ;
 int * FUNC_19 (int,int) ;
 int FUNC_20 () ;
 TYPE_2__* FUNC_21 (struct vars*,int *,struct nfa*) ;
 int FUNC_22 (struct vars*,struct subre*,int,int *) ;
 int FUNC_23 (struct vars*,TYPE_4__*,int *) ;
 int FUNC_24 (TYPE_4__*,int) ;
 int FUNC_25 (TYPE_2__*,int *) ;
 int FUNC_26 (TYPE_2__*,int *) ;
 int FUNC_27 (struct vars*,TYPE_4__*) ;
 TYPE_4__* FUNC_28 (struct vars*,int ,int ,int ,int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (TYPE_2__*) ;
 int * VAR_23 ;
 int FUNC_31 (int *,int ) ;

int
FUNC_32(regex_t *VAR_24,
     const chr *VAR_25,
     size_t VAR_26,
     int VAR_27,
     Oid VAR_28)
{
 struct vars VAR_29;
 struct vars *VAR_30 = &VAR_29;
 struct guts *VAR_31;
 int VAR_32;
 size_t VAR_33;




 FILE *VAR_34 = (FILE *) ((void*)0);






 if (VAR_24 == ((void*)0) || VAR_25 == ((void*)0))
  return VAR_11;
 if ((VAR_27 & VAR_16) &&
  (VAR_27 & (VAR_4 | VAR_8 | VAR_12)))
  return VAR_11;
 if (!(VAR_27 & VAR_9) && (VAR_27 & VAR_5))
  return VAR_11;


 FUNC_29(VAR_28);


 VAR_30->re = VAR_24;
 VAR_30->now = VAR_25;
 VAR_30->stop = VAR_30->now + VAR_26;
 VAR_30->savenow = *(VAR_30->savestop = ((void*)0));
 VAR_30->err = 0;
 VAR_30->cflags = VAR_27;
 VAR_30->nsubexp = 0;
 VAR_30->subs = VAR_30->sub10;
 VAR_30->nsubs = 10;
 for (VAR_33 = 0; VAR_33 < VAR_30->nsubs; VAR_33++)
  VAR_30->subs[VAR_33] = ((void*)0);
 VAR_30->nfa = ((void*)0);
 VAR_30->cm = ((void*)0);
 VAR_30->nlcolor = VAR_0;
 VAR_30->wordchrs = ((void*)0);
 VAR_30->tree = ((void*)0);
 VAR_30->treechain = ((void*)0);
 VAR_30->treefree = ((void*)0);
 VAR_30->cv = ((void*)0);
 VAR_30->cv2 = ((void*)0);
 VAR_30->lacons = ((void*)0);
 VAR_30->nlacons = 0;
 VAR_30->spaceused = 0;
 VAR_24->re_magic = VAR_18;
 VAR_24->re_info = 0;
 VAR_24->re_csize = sizeof(chr);
 VAR_24->re_collation = VAR_28;
 VAR_24->re_guts = ((void*)0);
 VAR_24->re_fns = FUNC_5(&VAR_22);


 VAR_24->re_guts = FUNC_5(FUNC_2(sizeof(struct guts)));
 if (VAR_24->re_guts == ((void*)0))
  return FUNC_14(VAR_30, VAR_7);
 VAR_31 = (struct guts *) VAR_24->re_guts;
 VAR_31->tree = ((void*)0);
 FUNC_15(VAR_30, &VAR_31->cmap);
 VAR_30->cm = &VAR_31->cmap;
 VAR_31->lacons = ((void*)0);
 VAR_31->nlacons = 0;
 FUNC_6(VAR_31->search);
 VAR_30->nfa = FUNC_21(VAR_30, VAR_30->cm, (struct nfa *) ((void*)0));
 { if (FUNC_0()) return FUNC_14(VAR_30, VAR_30->err); };

 VAR_30->cv = FUNC_19(100, 20);
 if (VAR_30->cv == ((void*)0))
  return FUNC_14(VAR_30, VAR_7);


 FUNC_16(VAR_30);
 if ((VAR_30->cflags & VAR_14) || (VAR_30->cflags & VAR_13))
 {

  VAR_30->nlcolor = FUNC_31(VAR_30->cm, FUNC_20());
  FUNC_25(VAR_30->nfa, VAR_30->cm);
 }
 { if (FUNC_0()) return FUNC_14(VAR_30, VAR_30->err); };
 VAR_30->tree = FUNC_28(VAR_30, VAR_1, VAR_3, VAR_30->nfa->init, VAR_30->nfa->final);
 FUNC_7(FUNC_4(VAR_1));
 { if (FUNC_0()) return FUNC_14(VAR_30, VAR_30->err); };
 FUNC_7(VAR_30->tree != ((void*)0));


 FUNC_30(VAR_30->nfa);
 { if (FUNC_0()) return FUNC_14(VAR_30, VAR_30->err); };
 FUNC_27(VAR_30, VAR_30->tree);
 VAR_30->ntree = FUNC_24(VAR_30->tree, 1);
 FUNC_18(VAR_30->tree);
 FUNC_8(VAR_30);
 VAR_24->re_info |= FUNC_23(VAR_30, VAR_30->tree, VAR_34);
 { if (FUNC_0()) return FUNC_14(VAR_30, VAR_30->err); };
 FUNC_7(VAR_30->nlacons == 0 || VAR_30->lacons != ((void*)0));
 for (VAR_32 = 1; VAR_32 < VAR_30->nlacons; VAR_32++)
 {
  struct subre *VAR_35 = &VAR_30->lacons[VAR_32];







  FUNC_22(VAR_30, VAR_35, !FUNC_1(VAR_35->subno), VAR_34);
 }
 { if (FUNC_0()) return FUNC_14(VAR_30, VAR_30->err); };
 if (VAR_30->tree->flags & VAR_19)
  FUNC_3(VAR_17);







 (DISCARD) FUNC_26(VAR_30->nfa, VAR_34);
 { if (FUNC_0()) return FUNC_14(VAR_30, VAR_30->err); };
 FUNC_17(VAR_30, VAR_30->nfa);
 { if (FUNC_0()) return FUNC_14(VAR_30, VAR_30->err); };
 FUNC_9(VAR_30->nfa, &VAR_31->search);
 { if (FUNC_0()) return FUNC_14(VAR_30, VAR_30->err); };


 VAR_24->re_nsub = VAR_30->nsubexp;
 VAR_30->re = ((void*)0);
 VAR_31->magic = VAR_2;
 VAR_31->cflags = VAR_30->cflags;
 VAR_31->info = VAR_24->re_info;
 VAR_31->nsub = VAR_24->re_nsub;
 VAR_31->tree = VAR_30->tree;
 VAR_30->tree = ((void*)0);
 VAR_31->ntree = VAR_30->ntree;
 VAR_31->compare = (VAR_30->cflags & VAR_10) ? VAR_20 : VAR_21;
 VAR_31->lacons = VAR_30->lacons;
 VAR_30->lacons = ((void*)0);
 VAR_31->nlacons = VAR_30->nlacons;






 FUNC_7(VAR_30->err == 0);
 return FUNC_14(VAR_30, 0);
}
