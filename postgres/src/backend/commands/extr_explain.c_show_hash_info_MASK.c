
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ format; int indent; int str; } ;
struct TYPE_11__ {scalar_t__ nbatch; long nbuckets; long nbuckets_original; long nbatch_original; scalar_t__ space_peak; int member_0; } ;
struct TYPE_10__ {TYPE_1__* shared_info; int hashtable; } ;
struct TYPE_9__ {int num_workers; TYPE_3__* hinstrument; } ;
typedef TYPE_1__ SharedHashInfo ;
typedef TYPE_2__ HashState ;
typedef TYPE_3__ HashInstrumentation ;
typedef TYPE_4__ ExplainState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (char*,char*,long,TYPE_4__*) ;
 void* FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,char*,scalar_t__,scalar_t__,long,...) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(HashState *VAR_1, ExplainState *VAR_2)
{
 HashInstrumentation VAR_3 = {0};
 if (VAR_1->hashtable)
  FUNC_0(&VAR_3, VAR_1->hashtable);
 if (VAR_1->shared_info)
 {
  SharedHashInfo *VAR_4 = VAR_1->shared_info;
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_4->num_workers; ++VAR_5)
  {
   HashInstrumentation *VAR_6 = &VAR_4->hinstrument[VAR_5];

   if (VAR_6->nbatch > 0)
   {




    VAR_3.nbuckets = VAR_6->nbuckets;
    VAR_3.nbuckets_original = VAR_6->nbuckets_original;







    VAR_3.nbatch = FUNC_2(VAR_3.nbatch, VAR_6->nbatch);
    VAR_3.nbatch_original = VAR_6->nbatch_original;





    VAR_3.space_peak =
     FUNC_2(VAR_3.space_peak, VAR_6->space_peak);
   }
  }
 }

 if (VAR_3.nbatch > 0)
 {
  long VAR_7 = (VAR_3.space_peak + 1023) / 1024;

  if (VAR_2->format != VAR_0)
  {
   FUNC_1("Hash Buckets", ((void*)0),
           VAR_3.nbuckets, VAR_2);
   FUNC_1("Original Hash Buckets", ((void*)0),
           VAR_3.nbuckets_original, VAR_2);
   FUNC_1("Hash Batches", ((void*)0),
           VAR_3.nbatch, VAR_2);
   FUNC_1("Original Hash Batches", ((void*)0),
           VAR_3.nbatch_original, VAR_2);
   FUNC_1("Peak Memory Usage", "kB",
           VAR_7, VAR_2);
  }
  else if (VAR_3.nbatch_original != VAR_3.nbatch ||
     VAR_3.nbuckets_original != VAR_3.nbuckets)
  {
   FUNC_4(VAR_2->str, VAR_2->indent * 2);
   FUNC_3(VAR_2->str,
        "Buckets: %d (originally %d)  Batches: %d (originally %d)  Memory Usage: %ldkB\n",
        VAR_3.nbuckets,
        VAR_3.nbuckets_original,
        VAR_3.nbatch,
        VAR_3.nbatch_original,
        VAR_7);
  }
  else
  {
   FUNC_4(VAR_2->str, VAR_2->indent * 2);
   FUNC_3(VAR_2->str,
        "Buckets: %d  Batches: %d  Memory Usage: %ldkB\n",
        VAR_3.nbuckets, VAR_3.nbatch,
        VAR_7);
  }
 }
}
