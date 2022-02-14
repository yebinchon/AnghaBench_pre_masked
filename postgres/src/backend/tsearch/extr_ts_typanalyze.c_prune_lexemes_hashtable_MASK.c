
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* lexeme; } ;
struct TYPE_4__ {int frequency; int delta; TYPE_1__ key; } ;
typedef TYPE_2__ TrackItem ;
typedef int HTAB ;
typedef int HASH_SEQ_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int *,void const*,int ,int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(HTAB *VAR_2, int VAR_3)
{
 HASH_SEQ_STATUS VAR_4;
 TrackItem *VAR_5;

 FUNC_2(&VAR_4, VAR_2);
 while ((VAR_5 = (TrackItem *) FUNC_3(&VAR_4)) != ((void*)0))
 {
  if (VAR_5->frequency + VAR_5->delta <= VAR_3)
  {
   char *VAR_6 = VAR_5->key.lexeme;

   if (FUNC_1(VAR_2, (const void *) &VAR_5->key,
       VAR_1, ((void*)0)) == ((void*)0))
    FUNC_0(VAR_0, "hash table corrupted");
   FUNC_4(VAR_6);
  }
 }
}
