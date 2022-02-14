
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_13__ {int collisions; int accesses; } ;
struct TYPE_12__ {scalar_t__ hashvalue; struct TYPE_12__* link; } ;
struct TYPE_11__ {scalar_t__ sshift; scalar_t__ (* hash ) (void const*,int ) ;scalar_t__ (* match ) (int ,void const*,int ) ;int (* keycopy ) (int ,void const*,int ) ;int keysize; TYPE_2__*** dir; int ssize; int tabname; scalar_t__ frozen; TYPE_3__* hctl; } ;
typedef int Size ;
typedef scalar_t__ (* HashCompareFunc ) (int ,void const*,int ) ;
typedef TYPE_1__ HTAB ;
typedef TYPE_2__** HASHSEGMENT ;
typedef TYPE_3__ HASHHDR ;
typedef TYPE_2__ HASHELEMENT ;
typedef TYPE_2__* HASHBUCKET ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (void*) ;
 int VAR_0 ;
 long FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,scalar_t__) ;
 int FUNC_4 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (void const*,int ) ;
 int FUNC_7 (int ,void const*,int ) ;

bool
FUNC_8(HTAB *VAR_3,
      void *VAR_4,
      const void *VAR_5)
{
 HASHELEMENT *VAR_6 = FUNC_1(VAR_4);
 HASHHDR *VAR_7 = VAR_3->hctl;
 uint32 VAR_8;
 Size VAR_9;
 uint32 VAR_10;
 uint32 VAR_11;
 long VAR_12;
 long VAR_13;
 HASHSEGMENT VAR_14;
 HASHBUCKET VAR_15;
 HASHBUCKET *VAR_16;
 HASHBUCKET *VAR_17;
 HashCompareFunc VAR_18;







 if (VAR_3->frozen)
  FUNC_4(VAR_0, "cannot update in frozen hashtable \"%s\"",
    VAR_3->tabname);






 VAR_10 = FUNC_3(VAR_7, VAR_6->hashvalue);

 VAR_12 = VAR_10 >> VAR_3->sshift;
 VAR_13 = FUNC_2(VAR_10, VAR_3->ssize);

 VAR_14 = VAR_3->dir[VAR_12];

 if (VAR_14 == ((void*)0))
  FUNC_5(VAR_3);

 VAR_16 = &VAR_14[VAR_13];
 VAR_15 = *VAR_16;

 while (VAR_15 != ((void*)0))
 {
  if (VAR_15 == VAR_6)
   break;
  VAR_16 = &(VAR_15->link);
  VAR_15 = *VAR_16;
 }

 if (VAR_15 == ((void*)0))
  FUNC_4(VAR_0, "hash_update_hash_key argument is not in hashtable \"%s\"",
    VAR_3->tabname);

 VAR_17 = VAR_16;





 VAR_8 = VAR_3->hash(VAR_5, VAR_3->keysize);

 VAR_11 = FUNC_3(VAR_7, VAR_8);

 VAR_12 = VAR_11 >> VAR_3->sshift;
 VAR_13 = FUNC_2(VAR_11, VAR_3->ssize);

 VAR_14 = VAR_3->dir[VAR_12];

 if (VAR_14 == ((void*)0))
  FUNC_5(VAR_3);

 VAR_16 = &VAR_14[VAR_13];
 VAR_15 = *VAR_16;




 VAR_18 = VAR_3->match;
 VAR_9 = VAR_3->keysize;

 while (VAR_15 != ((void*)0))
 {
  if (VAR_15->hashvalue == VAR_8 &&
   VAR_18(FUNC_0(VAR_15), VAR_5, VAR_9) == 0)
   break;
  VAR_16 = &(VAR_15->link);
  VAR_15 = *VAR_16;




 }

 if (VAR_15 != ((void*)0))
  return 0;

 VAR_15 = VAR_6;
 if (VAR_10 != VAR_11)
 {

  *VAR_17 = VAR_15->link;


  *VAR_16 = VAR_15;
  VAR_15->link = ((void*)0);
 }


 VAR_15->hashvalue = VAR_8;
 VAR_3->keycopy(FUNC_0(VAR_15), VAR_5, VAR_9);



 return 1;
}
