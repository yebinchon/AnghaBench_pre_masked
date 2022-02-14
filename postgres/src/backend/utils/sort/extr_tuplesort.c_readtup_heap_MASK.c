
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tuplen ;
struct TYPE_11__ {int tupDesc; TYPE_1__* sortKeys; int tapeset; scalar_t__ randomAccess; } ;
typedef TYPE_2__ Tuplesortstate ;
struct TYPE_14__ {char* t_len; scalar_t__ t_data; } ;
struct TYPE_13__ {unsigned int t_len; } ;
struct TYPE_12__ {int isnull1; int datum1; void* tuple; } ;
struct TYPE_10__ {int ssup_attno; } ;
typedef TYPE_3__ SortTuple ;
typedef TYPE_4__* MinimalTuple ;
typedef scalar_t__ HeapTupleHeader ;
typedef TYPE_5__ HeapTupleData ;


 int FUNC_0 (int ,int,...) ;
 unsigned int VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 (TYPE_5__*,int ,int ,int *) ;
 int FUNC_2 (TYPE_2__*,unsigned int) ;

__attribute__((used)) static void
FUNC_3(Tuplesortstate *VAR_2, SortTuple *VAR_3,
    int VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6 = VAR_5 - sizeof(int);
 unsigned int VAR_7 = VAR_6 + VAR_0;
 MinimalTuple VAR_8 = (MinimalTuple) FUNC_2(VAR_2, VAR_7);
 char *VAR_9 = (char *) VAR_8 + VAR_0;
 HeapTupleData VAR_10;


 VAR_8->t_len = VAR_7;
 FUNC_0(VAR_2->tapeset, VAR_4,
       VAR_9, VAR_6);
 if (VAR_2->randomAccess)
  FUNC_0(VAR_2->tapeset, VAR_4,
        &VAR_7, sizeof(VAR_7));
 VAR_3->tuple = (void *) VAR_8;

 VAR_10.t_len = VAR_8->t_len + VAR_1;
 VAR_10.t_data = (HeapTupleHeader) ((char *) VAR_8 - VAR_1);
 VAR_3->datum1 = FUNC_1(&VAR_10,
        VAR_2->sortKeys[0].ssup_attno,
        VAR_2->tupDesc,
        &VAR_3->isnull1);
}
