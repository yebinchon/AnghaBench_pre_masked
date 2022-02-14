
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_10__ {scalar_t__ size; scalar_t__ paddr; scalar_t__ vsize; int perm; scalar_t__ name; } ;
struct TYPE_9__ {int io; } ;
struct TYPE_8__ {char* name; } ;
typedef TYPE_1__ RIOMap ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RBinSection ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,TYPE_3__*,scalar_t__) ;
 int FUNC_3 (int ,int) ;
 TYPE_1__* FUNC_4 (int ,int,int,scalar_t__,scalar_t__,scalar_t__) ;
 char* FUNC_5 (char*,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,char*) ;

__attribute__((used)) static void FUNC_7(RCore *VAR_1, RBinSection *VAR_2, ut64 VAR_3, int VAR_4) {
 if (!FUNC_3 (VAR_1->io, VAR_4) || FUNC_0 (VAR_2->size, VAR_2->paddr) ||
     FUNC_0 (VAR_2->size, VAR_3) || !VAR_2->vsize) {
  return;
 }

 ut64 VAR_5 = VAR_2->vsize;


 if (VAR_2->vsize > VAR_2->size) {
  if (!FUNC_2 (VAR_1->io, VAR_2, VAR_3 + VAR_2->size)) {
   return;
  }

  VAR_5 = VAR_2->size;
 }


 char *VAR_6 = FUNC_5 ("fmap.%s", VAR_2->name);
 if (!VAR_6) {
  return;
 }

 int VAR_7 = VAR_2->perm;

 if (VAR_2->name && FUNC_6 (VAR_2->name, "text")) {
  VAR_7 |= VAR_0;
 }

 RIOMap *VAR_8 = FUNC_4 (VAR_1->io, VAR_4, VAR_7, VAR_2->paddr, VAR_3, VAR_5);
 if (!VAR_8) {
  FUNC_1 (VAR_6);
  return;
 }
 VAR_8->name = VAR_6;
 return;
}
