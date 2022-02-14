
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {int x0; int x1; int y0; int y1; } ;
struct TYPE_22__ {int panx; int pany; int iscopying; int ispanning; int selx; int sely; int beyondy; int pageno; int pagecount; int winh; TYPE_1__ selr; scalar_t__ image; int * ctx; scalar_t__ presentation_mode; int doc; TYPE_5__* page_links; int layout_h; int layout_w; } ;
typedef TYPE_3__ pdfapp_t ;
struct TYPE_23__ {int x; int y; } ;
typedef TYPE_4__ fz_point ;
typedef int fz_matrix ;
typedef int fz_location ;
struct TYPE_21__ {scalar_t__ x0; scalar_t__ x1; scalar_t__ y0; scalar_t__ y1; } ;
struct TYPE_24__ {int uri; TYPE_2__ rect; struct TYPE_24__* next; } ;
typedef TYPE_5__ fz_link ;
struct TYPE_25__ {int x0; int y0; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_6__ fz_irect ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 void* FUNC_2 (int,int) ;
 void* FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 TYPE_6__ FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *,int ,int ,int *,int *) ;
 TYPE_4__ FUNC_8 (TYPE_4__,int ) ;
 int FUNC_9 (TYPE_3__*,int,int) ;
 int FUNC_10 (TYPE_3__*,scalar_t__) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (TYPE_3__*,int,int) ;
 int FUNC_13 (TYPE_3__*,int,int,int,int ,int ) ;
 int FUNC_14 (int *,TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*,int ) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*) ;

void FUNC_18(pdfapp_t *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 fz_context *VAR_9 = VAR_3->ctx;
 fz_irect VAR_10 = { 0, 0, VAR_3->layout_w, VAR_3->layout_h };
 fz_link *VAR_11;
 fz_matrix VAR_12;
 fz_point VAR_13;
 int VAR_14 = 0;

 if (VAR_3->image)
  VAR_10 = FUNC_5(VAR_3->ctx, VAR_3->image);
 VAR_13.x = VAR_4 - VAR_3->panx + VAR_10.x0;
 VAR_13.y = VAR_5 - VAR_3->pany + VAR_10.y0;

 FUNC_14(&VAR_12, VAR_3);
 VAR_12 = FUNC_0(VAR_12);

 VAR_13 = FUNC_8(VAR_13, VAR_12);

 for (VAR_11 = VAR_3->page_links; VAR_11; VAR_11 = VAR_11->next)
 {
  if (VAR_13.x >= VAR_11->rect.x0 && VAR_13.x <= VAR_11->rect.x1)
   if (VAR_13.y >= VAR_11->rect.y0 && VAR_13.y <= VAR_11->rect.y1)
    break;
 }

 if (VAR_11)
 {
  FUNC_15(VAR_3, VAR_2);
  if (VAR_6 == 1 && VAR_8 == 1 && !VAR_14)
  {
   if (FUNC_1(VAR_9, VAR_11->uri))
    FUNC_11(VAR_3, VAR_11->uri);
   else
   {
    fz_location VAR_15 = FUNC_7(VAR_9, VAR_3->doc, VAR_11->uri, ((void*)0), ((void*)0));
    FUNC_10(VAR_3, FUNC_4(VAR_9, VAR_3->doc, VAR_15)+1);
   }
   return;
  }
 }
 else
 {
  FUNC_15(VAR_3, VAR_0);
 }

 if (VAR_8 == 1 && !VAR_14)
 {
  if (VAR_6 == 1 && !VAR_3->iscopying)
  {
   VAR_3->ispanning = 1;
   VAR_3->selx = VAR_4;
   VAR_3->sely = VAR_5;
   VAR_3->beyondy = 0;
  }
  if (VAR_6 == 3 && !VAR_3->ispanning)
  {
   VAR_3->iscopying = 1;
   VAR_3->selx = VAR_4;
   VAR_3->sely = VAR_5;
   VAR_3->selr.x0 = VAR_4;
   VAR_3->selr.x1 = VAR_4;
   VAR_3->selr.y0 = VAR_5;
   VAR_3->selr.y1 = VAR_5;
  }
  if (VAR_6 == 4 || VAR_6 == 5)
  {
   FUNC_9(VAR_3, VAR_7, VAR_6 == 4 ? 1 : -1);
  }
  if (VAR_6 == 6 || VAR_6 == 7)
  {

   FUNC_9(VAR_3, VAR_7 ^ (1<<0), VAR_6 == 6 ? 1 : -1);
  }
  if (VAR_3->presentation_mode)
  {
   if (VAR_6 == 1 && VAR_3->pageno < VAR_3->pagecount)
   {
    VAR_3->pageno++;
    FUNC_13(VAR_3, 1, 1, 1, 0, 0);
   }
   if (VAR_6 == 3 && VAR_3->pageno > 1)
   {
    VAR_3->pageno--;
    FUNC_13(VAR_3, 1, 1, 1, 0, 0);
   }
  }
 }

 else if (VAR_8 == -1)
 {
  if (VAR_3->iscopying)
  {
   VAR_3->iscopying = 0;
   VAR_3->selr.x0 = FUNC_3(VAR_3->selx, VAR_4) - VAR_3->panx + VAR_10.x0;
   VAR_3->selr.x1 = FUNC_2(VAR_3->selx, VAR_4) - VAR_3->panx + VAR_10.x0;
   VAR_3->selr.y0 = FUNC_3(VAR_3->sely, VAR_5) - VAR_3->pany + VAR_10.y0;
   VAR_3->selr.y1 = FUNC_2(VAR_3->sely, VAR_5) - VAR_3->pany + VAR_10.y0;
   FUNC_17(VAR_3);
   if (VAR_3->selr.x0 < VAR_3->selr.x1 && VAR_3->selr.y0 < VAR_3->selr.y1)
    FUNC_16(VAR_3);
  }
  VAR_3->ispanning = 0;
 }

 else if (VAR_3->ispanning)
 {
  int VAR_16 = VAR_3->panx + VAR_4 - VAR_3->selx;
  int VAR_17 = VAR_3->pany + VAR_5 - VAR_3->sely;
  int VAR_18 = VAR_3->winh;
  if (VAR_3->image)
   VAR_18 = FUNC_6(VAR_3->ctx, VAR_3->image);



  if (VAR_17 + VAR_18 < VAR_3->winh || VAR_17 > 0)
  {

   int VAR_19 = VAR_5 - VAR_3->sely;






   if( VAR_3->beyondy == 0 || (VAR_3->beyondy ^ VAR_19) >= 0 )
   {



    VAR_3->beyondy += VAR_19;
    if (VAR_3->beyondy > VAR_1)
    {
     if( VAR_3->pageno > 1 )
     {
      VAR_3->pageno--;
      FUNC_13(VAR_3, 1, 1, 1, 0, 0);
      if (VAR_3->image)
       VAR_17 = -FUNC_6(VAR_3->ctx, VAR_3->image);
     }
     VAR_3->beyondy = 0;
    }
    else if (VAR_3->beyondy < -VAR_1)
    {
     if( VAR_3->pageno < VAR_3->pagecount )
     {
      VAR_3->pageno++;
      FUNC_13(VAR_3, 1, 1, 1, 0, 0);
      VAR_17 = 0;
     }
     VAR_3->beyondy = 0;
    }
   }
   else
    VAR_3->beyondy = 0;
  }





  FUNC_12(VAR_3, VAR_16, VAR_17);

  VAR_3->selx = VAR_4;
  VAR_3->sely = VAR_5;
 }

 else if (VAR_3->iscopying)
 {
  VAR_3->selr.x0 = FUNC_3(VAR_3->selx, VAR_4) - VAR_3->panx + VAR_10.x0;
  VAR_3->selr.x1 = FUNC_2(VAR_3->selx, VAR_4) - VAR_3->panx + VAR_10.x0;
  VAR_3->selr.y0 = FUNC_3(VAR_3->sely, VAR_5) - VAR_3->pany + VAR_10.y0;
  VAR_3->selr.y1 = FUNC_2(VAR_3->sely, VAR_5) - VAR_3->pany + VAR_10.y0;
  FUNC_17(VAR_3);
 }
}
