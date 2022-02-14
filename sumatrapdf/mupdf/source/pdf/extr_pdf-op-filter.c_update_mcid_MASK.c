
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int utf8; scalar_t__ edited; } ;
struct TYPE_6__ {int utf8; scalar_t__ edited; } ;
struct TYPE_8__ {TYPE_2__ actualtext; int mcid_obj; TYPE_1__ alt; } ;
typedef TYPE_3__ tag_record ;
struct TYPE_9__ {TYPE_3__* current_tags; } ;
typedef TYPE_4__ pdf_filter_processor ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_1, pdf_filter_processor *VAR_2)
{
 tag_record *VAR_3 = VAR_2->current_tags;

 if (VAR_3 == ((void*)0))
  return;
 if (VAR_3->alt.edited)
  FUNC_1(VAR_1, VAR_3->mcid_obj, FUNC_0(VAR_0), VAR_3->alt.utf8);
 if (VAR_3->actualtext.edited)
  FUNC_1(VAR_1, VAR_3->mcid_obj, FUNC_0(VAR_0), VAR_3->actualtext.utf8);
}
