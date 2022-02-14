
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ localreloid; } ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ LogicalRepRelMapEntry ;
typedef int HASH_SEQ_STATUS ;
typedef int Datum ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(Datum VAR_2, Oid VAR_3)
{
 LogicalRepRelMapEntry *VAR_4;


 if (VAR_1 == ((void*)0))
  return;

 if (VAR_3 != VAR_0)
 {
  HASH_SEQ_STATUS VAR_5;

  FUNC_0(&VAR_5, VAR_1);


  while ((VAR_4 = (LogicalRepRelMapEntry *) FUNC_1(&VAR_5)) != ((void*)0))
  {
   if (VAR_4->localreloid == VAR_3)
   {
    VAR_4->localreloid = VAR_0;
    FUNC_2(&VAR_5);
    break;
   }
  }
 }
 else
 {

  HASH_SEQ_STATUS VAR_6;

  FUNC_0(&VAR_6, VAR_1);

  while ((VAR_4 = (LogicalRepRelMapEntry *) FUNC_1(&VAR_6)) != ((void*)0))
   VAR_4->localreloid = VAR_0;
 }
}
