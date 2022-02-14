
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* name; int font; struct TYPE_5__* next; } ;
typedef TYPE_1__ xps_font_cache ;
struct TYPE_6__ {TYPE_1__* start_part; TYPE_1__* font_table; scalar_t__ zip; } ;
typedef TYPE_2__ xps_document ;
typedef int fz_document ;
typedef int fz_context ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, fz_document *VAR_1)
{
 xps_document *VAR_2 = (xps_document*)VAR_1;
 xps_font_cache *VAR_3, *VAR_4;

 if (VAR_2->zip)
  FUNC_0(VAR_0, VAR_2->zip);

 VAR_3 = VAR_2->font_table;
 while (VAR_3)
 {
  VAR_4 = VAR_3->next;
  FUNC_1(VAR_0, VAR_3->font);
  FUNC_2(VAR_0, VAR_3->name);
  FUNC_2(VAR_0, VAR_3);
  VAR_3 = VAR_4;
 }

 FUNC_3(VAR_0, VAR_2);

 FUNC_2(VAR_0, VAR_2->start_part);
}
