
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int bmsize; } ;
typedef TYPE_1__ xl_hash_init_bitmap_page ;
typedef scalar_t__ uint32 ;
typedef int XLogRecPtr ;
struct TYPE_11__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_12__ {size_t hashm_nmaps; scalar_t__* hashm_mapp; scalar_t__ hashm_maxbucket; } ;
typedef int Page ;
typedef TYPE_3__* HashMetaPage ;
typedef scalar_t__ ForkNumber ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int,int *) ;
 int FUNC_9 (TYPE_2__*,int,int *,scalar_t__*,int *) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_12(XLogReaderState *VAR_2)
{
 XLogRecPtr VAR_3 = VAR_2->EndRecPtr;
 Buffer VAR_4;
 Buffer VAR_5;
 Page VAR_6;
 HashMetaPage VAR_7;
 uint32 VAR_8;
 ForkNumber VAR_9;

 xl_hash_init_bitmap_page *VAR_10 = (xl_hash_init_bitmap_page *) FUNC_10(VAR_2);




 VAR_4 = FUNC_7(VAR_2, 0);
 FUNC_11(VAR_4, VAR_10->bmsize, 1);
 FUNC_5(FUNC_0(VAR_4), VAR_3);
 FUNC_4(VAR_4);







 FUNC_9(VAR_2, 0, ((void*)0), &VAR_9, ((void*)0));
 if (VAR_9 == VAR_1)
  FUNC_2(VAR_4);
 FUNC_6(VAR_4);


 if (FUNC_8(VAR_2, 1, &VAR_5) == VAR_0)
 {






  VAR_6 = FUNC_0(VAR_5);
  VAR_7 = FUNC_3(VAR_6);

  VAR_8 = VAR_7->hashm_maxbucket + 1;
  VAR_7->hashm_mapp[VAR_7->hashm_nmaps] = VAR_8 + 1;
  VAR_7->hashm_nmaps++;

  FUNC_5(VAR_6, VAR_3);
  FUNC_4(VAR_5);

  FUNC_9(VAR_2, 1, ((void*)0), &VAR_9, ((void*)0));
  if (VAR_9 == VAR_1)
   FUNC_2(VAR_5);
 }
 if (FUNC_1(VAR_5))
  FUNC_6(VAR_5);
}
