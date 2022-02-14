
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* utf8; } ;
struct TYPE_6__ {TYPE_3__* utf8; } ;
struct TYPE_8__ {int mcid_obj; TYPE_2__ actualtext; TYPE_1__ alt; int cooked; int raw; scalar_t__ bdc; struct TYPE_8__* tag; struct TYPE_8__* prev; } ;
typedef TYPE_3__ tag_record ;
typedef int pdf_filter_processor ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, pdf_filter_processor *VAR_1, tag_record **VAR_2)
{
 tag_record *VAR_3 = *VAR_2;

 if (VAR_3 == ((void*)0))
  return;
 *VAR_2 = VAR_3->prev;
 FUNC_0(VAR_0, VAR_3->tag);
 if (VAR_3->bdc)
 {
  FUNC_1(VAR_0, VAR_3->raw);
  FUNC_1(VAR_0, VAR_3->cooked);
 }
 FUNC_0(VAR_0, VAR_3->alt.utf8);
 FUNC_0(VAR_0, VAR_3->actualtext.utf8);
 FUNC_1(VAR_0, VAR_3->mcid_obj);
 FUNC_0(VAR_0, VAR_3);
}
