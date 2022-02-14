
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int narray; int array; } ;
typedef TYPE_1__ filemap_t ;
struct TYPE_7__ {char* path; int action; int newsize; int oldsize; int pagemap; int isrelfile; } ;
typedef TYPE_2__ file_entry_t ;
typedef int RelFileNode ;
typedef int ForkNumber ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 int VAR_0 ;






 int VAR_1 ;
 TYPE_2__** FUNC_1 (TYPE_2__**,int ,int ,int,int ) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int ,int ,int) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;

void
FUNC_6(ForkNumber VAR_4, RelFileNode VAR_5, BlockNumber VAR_6)
{
 char *VAR_7;
 file_entry_t VAR_8;
 file_entry_t *VAR_9;
 file_entry_t *VAR_10;
 BlockNumber VAR_11;
 int VAR_12;
 filemap_t *VAR_13 = VAR_2;
 file_entry_t **VAR_14;

 FUNC_0(VAR_13->array);

 VAR_12 = VAR_6 / VAR_1;
 VAR_11 = VAR_6 % VAR_1;

 VAR_7 = FUNC_3(VAR_5, VAR_4, VAR_12);

 VAR_8.path = (char *) VAR_7;
 VAR_9 = &VAR_8;

 VAR_14 = FUNC_1(&VAR_9, VAR_13->array, VAR_13->narray, sizeof(file_entry_t *),
    VAR_3);
 if (VAR_14)
  VAR_10 = *VAR_14;
 else
  VAR_10 = ((void*)0);
 FUNC_4(VAR_7);

 if (VAR_10)
 {
  FUNC_0(VAR_10->isrelfile);

  switch (VAR_10->action)
  {
   case 130:
   case 128:

    if ((VAR_11 + 1) * VAR_0 <= VAR_10->newsize)
     FUNC_2(&VAR_10->pagemap, VAR_11);
    break;

   case 132:





    if ((VAR_11 + 1) * VAR_0 <= VAR_10->oldsize)
     FUNC_2(&VAR_10->pagemap, VAR_11);
    break;

   case 133:
   case 129:
    break;

   case 131:
    FUNC_5("unexpected page modification for directory or symbolic link \"%s\"", VAR_10->path);
  }
 }
 else
 {






 }
}
