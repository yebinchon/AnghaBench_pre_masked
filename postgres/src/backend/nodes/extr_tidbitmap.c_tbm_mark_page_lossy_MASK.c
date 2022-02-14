
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int bitmapword ;
struct TYPE_8__ {char status; int blockno; int ischunk; int* words; } ;
struct TYPE_7__ {scalar_t__ status; int npages; int nchunks; int nentries; int pagetable; } ;
typedef TYPE_1__ TIDBitmap ;
typedef TYPE_2__ PagetableEntry ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 TYPE_2__* FUNC_4 (int ,int,int*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(TIDBitmap *VAR_2, BlockNumber VAR_3)
{
 PagetableEntry *VAR_4;
 bool VAR_5;
 BlockNumber VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;


 if (VAR_2->status != VAR_1)
  FUNC_5(VAR_2);

 VAR_7 = VAR_3 % VAR_0;
 VAR_6 = VAR_3 - VAR_7;





 if (VAR_7 != 0)
 {
  if (FUNC_3(VAR_2->pagetable, VAR_3))
  {

   VAR_2->nentries--;
   VAR_2->npages--;
  }
 }


 VAR_4 = FUNC_4(VAR_2->pagetable, VAR_6, &VAR_5);


 if (!VAR_5)
 {
  char VAR_10 = VAR_4->status;

  FUNC_1(VAR_4, 0, sizeof(PagetableEntry));
  VAR_4->status = VAR_10;
  VAR_4->blockno = VAR_6;
  VAR_4->ischunk = 1;

  VAR_2->nentries++;
  VAR_2->nchunks++;
 }
 else if (!VAR_4->ischunk)
 {
  char VAR_11 = VAR_4->status;


  FUNC_1(VAR_4, 0, sizeof(PagetableEntry));
  VAR_4->status = VAR_11;
  VAR_4->blockno = VAR_6;
  VAR_4->ischunk = 1;

  VAR_4->words[0] = ((bitmapword) 1 << 0);

  VAR_2->nchunks++;
  VAR_2->npages--;
 }


 VAR_8 = FUNC_2(VAR_7);
 VAR_9 = FUNC_0(VAR_7);
 VAR_4->words[VAR_8] |= ((bitmapword) 1 << VAR_9);
}
