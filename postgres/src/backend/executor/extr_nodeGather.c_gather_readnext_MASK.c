
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleQueueReader ;
struct TYPE_4__ {size_t nextreader; size_t nreaders; scalar_t__ need_to_scan_locally; int ** reader; } ;
typedef int * HeapTuple ;
typedef TYPE_1__ GatherState ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *,int,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int,int ,int ) ;
 int FUNC_6 (int **,int **,int) ;

__attribute__((used)) static HeapTuple
FUNC_7(GatherState *VAR_4)
{
 int VAR_5 = 0;

 for (;;)
 {
  TupleQueueReader *VAR_6;
  HeapTuple VAR_7;
  bool VAR_8;


  FUNC_1();
  FUNC_0(VAR_4->nextreader < VAR_4->nreaders);
  VAR_6 = VAR_4->reader[VAR_4->nextreader];
  VAR_7 = FUNC_4(VAR_6, 1, &VAR_8);





  if (VAR_8)
  {
   FUNC_0(!VAR_7);
   --VAR_4->nreaders;
   if (VAR_4->nreaders == 0)
   {
    FUNC_2(VAR_4);
    return ((void*)0);
   }
   FUNC_6(&VAR_4->reader[VAR_4->nextreader],
     &VAR_4->reader[VAR_4->nextreader + 1],
     sizeof(TupleQueueReader *)
     * (VAR_4->nreaders - VAR_4->nextreader));
   if (VAR_4->nextreader >= VAR_4->nreaders)
    VAR_4->nextreader = 0;
   continue;
  }


  if (VAR_7)
   return VAR_7;
  VAR_4->nextreader++;
  if (VAR_4->nextreader >= VAR_4->nreaders)
   VAR_4->nextreader = 0;


  VAR_5++;
  if (VAR_5 >= VAR_4->nreaders)
  {




   if (VAR_4->need_to_scan_locally)
    return ((void*)0);


   (void) FUNC_5(VAR_0, VAR_3 | VAR_2, 0,
        VAR_1);
   FUNC_3(VAR_0);
   VAR_5 = 0;
  }
 }
}
