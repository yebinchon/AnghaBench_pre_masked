
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* search; int pageno; int searchpage; int pagecount; scalar_t__ hit_count; int hit_bbox; int page_text; int ctx; } ;
typedef TYPE_1__ pdfapp_t ;
typedef enum panning { ____Placeholder_panning } panning ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int,int ,int ,int ,int) ;
 int FUNC_3 (TYPE_1__*,char*,scalar_t__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(pdfapp_t *VAR_4, enum panning *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;


 if (VAR_4->search[0] == 0)
 {
  FUNC_5(VAR_4);
  return;
 }

 FUNC_4(VAR_4, VAR_3);

 VAR_7 = VAR_4->pageno;
 if (VAR_4->searchpage == VAR_4->pageno)
  VAR_8 = VAR_4->pageno + VAR_6;
 else
  VAR_8 = VAR_4->pageno;

 if (VAR_8 < 1) VAR_8 = VAR_4->pagecount;
 if (VAR_8 > VAR_4->pagecount) VAR_8 = 1;

 do
 {
  if (VAR_8 != VAR_4->pageno)
  {
   VAR_4->pageno = VAR_8;
   FUNC_2(VAR_4, 1, 0, 0, 0, 1);
  }

  VAR_4->hit_count = FUNC_0(VAR_4->ctx, VAR_4->page_text, VAR_4->search, VAR_4->hit_bbox, FUNC_1(VAR_4->hit_bbox));
  if (VAR_4->hit_count > 0)
  {
   *VAR_5 = VAR_6 == 1 ? VAR_2 : VAR_1;
   VAR_4->searchpage = VAR_4->pageno;
   FUNC_4(VAR_4, VAR_0);
   FUNC_5(VAR_4);
   return;
  }

  VAR_8 += VAR_6;
  if (VAR_8 < 1) VAR_8 = VAR_4->pagecount;
  if (VAR_8 > VAR_4->pagecount) VAR_8 = 1;
 } while (VAR_8 != VAR_7);

 FUNC_3(VAR_4, "String '%s' not found.", VAR_4->search);

 VAR_4->pageno = VAR_7;
 FUNC_2(VAR_4, 1, 0, 0, 0, 0);
 FUNC_4(VAR_4, VAR_0);
 FUNC_5(VAR_4);
}
