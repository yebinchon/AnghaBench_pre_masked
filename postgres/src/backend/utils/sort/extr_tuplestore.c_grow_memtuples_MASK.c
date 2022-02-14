
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_6__ {int memtupsize; scalar_t__ allowedMem; scalar_t__ availMem; int growmemtuples; void** memtuples; } ;
typedef TYPE_1__ Tuplestorestate ;
typedef int Size ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (void**) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (void**,int) ;

__attribute__((used)) static bool
FUNC_6(Tuplestorestate *VAR_3)
{
 int VAR_4;
 int VAR_5 = VAR_3->memtupsize;
 int64 VAR_6 = VAR_3->allowedMem - VAR_3->availMem;


 if (!VAR_3->growmemtuples)
  return 0;


 if (VAR_6 <= VAR_3->availMem)
 {




  if (VAR_5 < VAR_1 / 2)
   VAR_4 = VAR_5 * 2;
  else
  {
   VAR_4 = VAR_1;
   VAR_3->growmemtuples = 0;
  }
 }
 else
 {
  double VAR_7;

  VAR_7 = (double) VAR_3->allowedMem / (double) VAR_6;
  if (VAR_5 * VAR_7 < VAR_1)
   VAR_4 = (int) (VAR_5 * VAR_7);
  else
   VAR_4 = VAR_1;


  VAR_3->growmemtuples = 0;
 }


 if (VAR_4 <= VAR_5)
  goto noalloc;
 if ((Size) VAR_4 >= VAR_2 / sizeof(void *))
 {
  VAR_4 = (int) (VAR_2 / sizeof(void *));
  VAR_3->growmemtuples = 0;
 }
 if (VAR_3->availMem < (int64) ((VAR_4 - VAR_5) * sizeof(void *)))
  goto noalloc;


 FUNC_0(VAR_3, FUNC_1(VAR_3->memtuples));
 VAR_3->memtupsize = VAR_4;
 VAR_3->memtuples = (void **)
  FUNC_5(VAR_3->memtuples,
       VAR_3->memtupsize * sizeof(void *));
 FUNC_3(VAR_3, FUNC_1(VAR_3->memtuples));
 if (FUNC_2(VAR_3))
  FUNC_4(VAR_0, "unexpected out-of-memory situation in tuplestore");
 return 1;

noalloc:

 VAR_3->growmemtuples = 0;
 return 0;
}
