
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ progress; } ;
typedef scalar_t__ Datum ;
typedef TYPE_1__ CkptTsStatus ;



__attribute__((used)) static int
FUNC_0(Datum VAR_0, Datum VAR_1, void *VAR_2)
{
 CkptTsStatus *VAR_3 = (CkptTsStatus *) VAR_0;
 CkptTsStatus *VAR_4 = (CkptTsStatus *) VAR_1;


 if (VAR_3->progress < VAR_4->progress)
  return 1;
 else if (VAR_3->progress == VAR_4->progress)
  return 0;
 else
  return -1;
}
