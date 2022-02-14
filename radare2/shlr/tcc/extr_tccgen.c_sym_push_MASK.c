
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* sym_identifier; TYPE_3__* sym_struct; } ;
typedef TYPE_2__ TokenSym ;
struct TYPE_15__ {int ref; int t; } ;
struct TYPE_12__ {int ref; } ;
struct TYPE_14__ {int r; struct TYPE_14__* prev_tok; TYPE_1__ type; } ;
typedef TYPE_3__ Sym ;
typedef TYPE_4__ CType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 TYPE_3__* VAR_4 ;
 TYPE_3__* VAR_5 ;
 TYPE_3__* FUNC_1 (TYPE_3__**,int,int ,long long) ;
 TYPE_2__** VAR_6 ;

Sym *FUNC_2(int VAR_7, CType *VAR_8, int VAR_9, long long VAR_10) {
 Sym *VAR_11, **VAR_12;
 TokenSym *VAR_13;

 if (VAR_5) {
  VAR_12 = &VAR_5;
 } else {
  VAR_12 = &VAR_4;
 }

 VAR_11 = FUNC_1 (VAR_12, VAR_7, VAR_8->t, VAR_10);
 if (!VAR_11) {
  return ((void*)0);
 }
 VAR_11->type.ref = VAR_8->ref;
 VAR_11->r = VAR_9;


 if (!(VAR_7 & VAR_0) && (VAR_7 & ~VAR_2) < VAR_1) {
  int VAR_14 = (VAR_7 & ~VAR_2);
  if (VAR_14 < VAR_3) {
   FUNC_0 ("Not found\n");
   return ((void*)0);
  }


  VAR_13 = VAR_6[(VAR_7 & ~VAR_2) - VAR_3];
  if (VAR_7 & VAR_2) {
   VAR_12 = &VAR_13->sym_struct;
  } else {
   VAR_12 = &VAR_13->sym_identifier;
  }
  VAR_11->prev_tok = *VAR_12;
  *VAR_12 = VAR_11;
 }
 return VAR_11;
}
