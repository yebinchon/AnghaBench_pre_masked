
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int frequency; int delta; int key; } ;
typedef TYPE_1__ TrackItem ;
struct TYPE_4__ {int typbyval; } ;
typedef int HTAB ;
typedef int HASH_SEQ_STATUS ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (int *,void const*,int ,int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(HTAB *VAR_3, int VAR_4)
{
 HASH_SEQ_STATUS VAR_5;
 TrackItem *VAR_6;

 FUNC_3(&VAR_5, VAR_3);
 while ((VAR_6 = (TrackItem *) FUNC_4(&VAR_5)) != ((void*)0))
 {
  if (VAR_6->frequency + VAR_6->delta <= VAR_4)
  {
   Datum VAR_7 = VAR_6->key;

   if (FUNC_2(VAR_3, (const void *) &VAR_6->key,
       VAR_1, ((void*)0)) == ((void*)0))
    FUNC_1(VAR_0, "hash table corrupted");

   if (!VAR_2->typbyval)
    FUNC_5(FUNC_0(VAR_7));
  }
 }
}
