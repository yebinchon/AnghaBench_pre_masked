
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tuplen ;
struct TYPE_6__ {int tapeset; scalar_t__ randomAccess; int tuples; } ;
typedef TYPE_1__ Tuplesortstate ;
struct TYPE_7__ {unsigned int datum1; int isnull1; int * tuple; } ;
typedef TYPE_2__ SortTuple ;
typedef unsigned int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,unsigned int*,int) ;
 unsigned int FUNC_2 (void*) ;
 void* FUNC_3 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static void
FUNC_4(Tuplesortstate *VAR_0, SortTuple *VAR_1,
     int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_3 - sizeof(unsigned int);

 if (VAR_4 == 0)
 {

  VAR_1->datum1 = (Datum) 0;
  VAR_1->isnull1 = 1;
  VAR_1->tuple = ((void*)0);
 }
 else if (!VAR_0->tuples)
 {
  FUNC_0(VAR_4 == sizeof(Datum));
  FUNC_1(VAR_0->tapeset, VAR_2,
        &VAR_1->datum1, VAR_4);
  VAR_1->isnull1 = 0;
  VAR_1->tuple = ((void*)0);
 }
 else
 {
  void *VAR_5 = FUNC_3(VAR_0, VAR_4);

  FUNC_1(VAR_0->tapeset, VAR_2,
        VAR_5, VAR_4);
  VAR_1->datum1 = FUNC_2(VAR_5);
  VAR_1->isnull1 = 0;
  VAR_1->tuple = VAR_5;
 }

 if (VAR_0->randomAccess)
  FUNC_1(VAR_0->tapeset, VAR_2,
        &VAR_4, sizeof(VAR_4));
}
