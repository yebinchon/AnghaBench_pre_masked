
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_7__ {scalar_t__ hashm_maxbucket; int hashm_lowmask; int hashm_highmask; } ;
struct TYPE_6__ {scalar_t__ hasho_bucket; scalar_t__ hasho_prevblkno; } ;
typedef int Relation ;
typedef int Page ;
typedef TYPE_1__* HashPageOpaque ;
typedef TYPE_2__* HashMetaPage ;
typedef int Buffer ;
typedef scalar_t__ Bucket ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int,int ) ;
 TYPE_2__* FUNC_7 (int ,int *,int) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,int ,int ) ;
 int FUNC_9 (int ,int ) ;

Buffer
FUNC_10(Relation VAR_5, uint32 VAR_6, int VAR_7,
        HashMetaPage *VAR_8)
{
 HashMetaPage VAR_9;
 Buffer VAR_10;
 Buffer VAR_11 = VAR_3;
 Page VAR_12;
 Bucket VAR_13;
 BlockNumber VAR_14;
 HashPageOpaque VAR_15;


 FUNC_0(VAR_7 == VAR_0 || VAR_7 == VAR_1);

 VAR_9 = FUNC_7(VAR_5, &VAR_11, 0);
 FUNC_0(VAR_9 != ((void*)0));




 for (;;)
 {



  VAR_13 = FUNC_8(VAR_6,
           VAR_9->hashm_maxbucket,
           VAR_9->hashm_highmask,
           VAR_9->hashm_lowmask);

  VAR_14 = FUNC_1(VAR_9, VAR_13);


  VAR_10 = FUNC_6(VAR_5, VAR_14, VAR_7, VAR_4);
  VAR_12 = FUNC_2(VAR_10);
  VAR_15 = (HashPageOpaque) FUNC_4(VAR_12);
  FUNC_0(VAR_15->hasho_bucket == VAR_13);
  FUNC_0(VAR_15->hasho_prevblkno != VAR_2);




  if (VAR_15->hasho_prevblkno <= VAR_9->hashm_maxbucket)
   break;


  FUNC_9(VAR_5, VAR_10);
  VAR_9 = FUNC_7(VAR_5, &VAR_11, 1);
  FUNC_0(VAR_9 != ((void*)0));
 }

 if (FUNC_3(VAR_11))
  FUNC_5(VAR_5, VAR_11);

 if (VAR_8)
  *VAR_8 = VAR_9;

 return VAR_10;
}
