
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct aa_labelset {int lock; } ;
struct aa_label {int size; TYPE_3__** vec; int proxy; } ;
struct TYPE_10__ {TYPE_1__* proxy; } ;
struct TYPE_9__ {TYPE_6__ label; } ;
struct TYPE_8__ {int lock; } ;
struct TYPE_7__ {int label; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct aa_label* FUNC_1 (struct aa_labelset*,struct aa_label*,int) ;
 int FUNC_2 (struct aa_label*,struct aa_label*) ;
 struct aa_label* FUNC_3 (TYPE_6__*) ;
 TYPE_3__* FUNC_4 (TYPE_3__*) ;
 struct aa_label* FUNC_5 (int,int ,int ) ;
 struct aa_label* FUNC_6 (struct aa_labelset*,struct aa_label*) ;
 scalar_t__ FUNC_7 (TYPE_3__**,int,int ) ;
 int FUNC_8 (struct aa_label*,struct aa_label*) ;
 TYPE_2__* FUNC_9 (struct aa_label*) ;
 struct aa_labelset* FUNC_10 (struct aa_label*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static struct aa_label *FUNC_14(struct aa_label *VAR_2)
{
 struct aa_label *VAR_3, *VAR_4;
 struct aa_labelset *VAR_5;
 unsigned long VAR_6;
 int VAR_7, VAR_8 = 0;

 FUNC_0(!VAR_2);
 FUNC_0(!FUNC_11(&FUNC_9(VAR_2)->lock));

 VAR_3 = FUNC_5(VAR_2->size, VAR_2->proxy, VAR_0);
 if (!VAR_3)
  return ((void*)0);





 VAR_5 = FUNC_10(VAR_2);
 FUNC_12(&VAR_5->lock, VAR_6);
 for (VAR_7 = 0; VAR_7 < VAR_2->size; VAR_7++) {
  FUNC_0(!VAR_2->vec[VAR_7]);
  VAR_3->vec[VAR_7] = FUNC_4(VAR_2->vec[VAR_7]);
  FUNC_0(!VAR_3->vec[VAR_7]);
  FUNC_0(!VAR_3->vec[VAR_7]->label.proxy);
  FUNC_0(!VAR_3->vec[VAR_7]->label.proxy->label);
  if (VAR_3->vec[VAR_7]->label.proxy != VAR_2->vec[VAR_7]->label.proxy)
   VAR_8++;
 }


 if (VAR_8) {
  VAR_3->size -= FUNC_7(&VAR_3->vec[0], VAR_3->size,
        VAR_1);

  if (VAR_3->size == 1) {
   VAR_4 = FUNC_3(&VAR_3->vec[0]->label);
   FUNC_0(VAR_4 == VAR_2);
   goto remove;
  }
  if (FUNC_10(VAR_2) != FUNC_10(VAR_3)) {
   FUNC_13(&VAR_5->lock, VAR_6);
   VAR_4 = FUNC_6(FUNC_10(VAR_3), VAR_3);
   FUNC_12(&VAR_5->lock, VAR_6);
   goto remove;
  }
 } else
  FUNC_0(FUNC_9(VAR_2) != FUNC_9(VAR_3));

 VAR_4 = FUNC_1(FUNC_10(VAR_2), VAR_3, 1);
remove:

 FUNC_2(VAR_2, VAR_4);
 FUNC_13(&VAR_5->lock, VAR_6);
 FUNC_8(VAR_4, VAR_3);

 return VAR_4;
}
