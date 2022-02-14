
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_12__ {int btpo_flags; } ;
struct TYPE_11__ {int * btps_page; int btps_blkno; int * btps_lowkey; struct TYPE_11__* btps_next; int btps_level; } ;
struct TYPE_10__ {int index; } ;
typedef int * Page ;
typedef int BlockNumber ;
typedef TYPE_1__ BTWriteState ;
typedef TYPE_2__ BTPageState ;
typedef TYPE_3__* BTPageOpaque ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int *,int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,int *) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(BTWriteState *VAR_4, BTPageState *VAR_5)
{
 BTPageState *VAR_6;
 BlockNumber VAR_7 = VAR_3;
 uint32 VAR_8 = 0;
 Page VAR_9;




 for (VAR_6 = VAR_5; VAR_6 != ((void*)0); VAR_6 = VAR_6->btps_next)
 {
  BlockNumber VAR_10;
  BTPageOpaque VAR_11;

  VAR_10 = VAR_6->btps_blkno;
  VAR_11 = (BTPageOpaque) FUNC_5(VAR_6->btps_page);
  if (VAR_6->btps_next == ((void*)0))
  {
   VAR_11->btpo_flags |= VAR_1;
   VAR_7 = VAR_10;
   VAR_8 = VAR_6->btps_level;
  }
  else
  {
   FUNC_0((FUNC_2(VAR_6->btps_lowkey, VAR_4->index) <=
     FUNC_3(VAR_4->index) &&
     FUNC_2(VAR_6->btps_lowkey, VAR_4->index) > 0) ||
       FUNC_4(VAR_11));
   FUNC_0(FUNC_2(VAR_6->btps_lowkey, VAR_4->index) == 0 ||
       !FUNC_4(VAR_11));
   FUNC_1(VAR_6->btps_lowkey, VAR_10);
   FUNC_7(VAR_4, VAR_6->btps_next, VAR_6->btps_lowkey);
   FUNC_11(VAR_6->btps_lowkey);
   VAR_6->btps_lowkey = ((void*)0);
  }





  FUNC_9(VAR_6->btps_page);
  FUNC_6(VAR_4, VAR_6->btps_page, VAR_6->btps_blkno);
  VAR_6->btps_page = ((void*)0);
 }







 VAR_9 = (Page) FUNC_10(VAR_0);
 FUNC_8(VAR_9, VAR_7, VAR_8);
 FUNC_6(VAR_4, VAR_9, VAR_2);
}
