
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int blockno; } ;
struct TYPE_9__ {char status; } ;
struct TYPE_8__ {scalar_t__ status; TYPE_7__ entry1; int * pagetable; int mcxt; } ;
typedef TYPE_1__ TIDBitmap ;
typedef TYPE_2__ PagetableEntry ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,TYPE_7__*,int) ;
 int * FUNC_2 (int ,int,TYPE_1__*) ;
 TYPE_2__* FUNC_3 (int *,int ,int*) ;

__attribute__((used)) static void
FUNC_4(TIDBitmap *VAR_2)
{
 FUNC_0(VAR_2->status != VAR_0);
 FUNC_0(VAR_2->pagetable == ((void*)0));

 VAR_2->pagetable = FUNC_2(VAR_2->mcxt, 128, VAR_2);


 if (VAR_2->status == VAR_1)
 {
  PagetableEntry *VAR_3;
  bool VAR_4;
  char VAR_5;

  VAR_3 = FUNC_3(VAR_2->pagetable,
        VAR_2->entry1.blockno,
        &VAR_4);
  FUNC_0(!VAR_4);
  VAR_5 = VAR_3->status;
  FUNC_1(VAR_3, &VAR_2->entry1, sizeof(PagetableEntry));
  VAR_3->status = VAR_5;
 }

 VAR_2->status = VAR_0;
}
