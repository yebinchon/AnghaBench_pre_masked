
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ctxAddSearchKwCB {scalar_t__ minsz; TYPE_1__* ss; } ;
struct TYPE_10__ {scalar_t__ size; int mask; int bytes; } ;
struct TYPE_9__ {int name; TYPE_3__* bytes; } ;
struct TYPE_8__ {int search; int items; } ;
typedef TYPE_1__ RSignSearch ;
typedef TYPE_2__ RSignItem ;
typedef TYPE_3__ RSignBytes ;
typedef int RSearchKeyword ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int * FUNC_2 (int ,scalar_t__,int ,scalar_t__,char const*) ;
 int FUNC_3 (int ,int *) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(RSignItem *VAR_0, void *VAR_1) {
 struct ctxAddSearchKwCB *VAR_2 = (struct ctxAddSearchKwCB *) VAR_1;
 RSignSearch *VAR_3 = VAR_2->ss;
 RSignBytes *VAR_4 = VAR_0->bytes;
 RSearchKeyword *VAR_5 = ((void*)0);

 if (!VAR_4) {
  FUNC_0 ("Cannot find bytes for this signature: %s\n", VAR_0->name);
  return 1;
 }

 if (VAR_2->minsz && VAR_4->size < VAR_2->minsz) {
  return 1;
 }
 RSignItem *VAR_6 = FUNC_4 (VAR_0);
 if (VAR_6) {
  FUNC_1 (VAR_3->items, VAR_6);

  VAR_5 = FUNC_2 (VAR_4->bytes, VAR_4->size, VAR_4->mask, VAR_4->size, (const char *) VAR_6);
  FUNC_3 (VAR_3->search, VAR_5);
 }
 return 1;
}
