
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int stats_string ;
struct TYPE_9__ {char* endptr; char* freeptr; struct TYPE_9__* next; } ;
struct TYPE_8__ {int size; scalar_t__ aset; } ;
struct TYPE_7__ {TYPE_3__** freelist; TYPE_4__* blocks; } ;
struct TYPE_6__ {int freespace; int totalspace; int freechunks; int nblocks; } ;
typedef int Size ;
typedef int (* MemoryStatsPrintFunc ) (int ,void*,char*) ;
typedef TYPE_1__ MemoryContextCounters ;
typedef int MemoryContext ;
typedef int AllocSetContext ;
typedef TYPE_2__* AllocSet ;
typedef TYPE_3__* AllocChunk ;
typedef TYPE_4__* AllocBlock ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_2(MemoryContext VAR_2,
     MemoryStatsPrintFunc VAR_3, void *VAR_4,
     MemoryContextCounters *VAR_5)
{
 AllocSet VAR_6 = (AllocSet) VAR_2;
 Size VAR_7 = 0;
 Size VAR_8 = 0;
 Size VAR_9;
 Size VAR_10 = 0;
 AllocBlock VAR_11;
 int VAR_12;


 VAR_9 = FUNC_0(sizeof(AllocSetContext));

 for (VAR_11 = VAR_6->blocks; VAR_11 != ((void*)0); VAR_11 = VAR_11->next)
 {
  VAR_7++;
  VAR_9 += VAR_11->endptr - ((char *) VAR_11);
  VAR_10 += VAR_11->endptr - VAR_11->freeptr;
 }
 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
 {
  AllocChunk VAR_13;

  for (VAR_13 = VAR_6->freelist[VAR_12]; VAR_13 != ((void*)0);
    VAR_13 = (AllocChunk) VAR_13->aset)
  {
   VAR_8++;
   VAR_10 += VAR_13->size + VAR_1;
  }
 }

 if (VAR_3)
 {
  char VAR_14[200];

  FUNC_1(VAR_14, sizeof(VAR_14),
     "%zu total in %zd blocks; %zu free (%zd chunks); %zu used",
     VAR_9, VAR_7, VAR_10, VAR_8,
     VAR_9 - VAR_10);
  VAR_3(VAR_2, VAR_4, VAR_14);
 }

 if (VAR_5)
 {
  VAR_5->nblocks += VAR_7;
  VAR_5->freechunks += VAR_8;
  VAR_5->totalspace += VAR_9;
  VAR_5->freespace += VAR_10;
 }
}
