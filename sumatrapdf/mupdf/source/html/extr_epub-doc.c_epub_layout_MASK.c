
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int fz_document ;
typedef int fz_context ;
struct TYPE_3__ {float layout_w; float layout_h; float layout_em; scalar_t__ css_sum; TYPE_2__* accel; } ;
typedef TYPE_1__ epub_document ;
struct TYPE_4__ {float layout_w; float layout_h; float layout_em; int use_doc_css; scalar_t__ css_sum; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, fz_document *VAR_1, float VAR_2, float VAR_3, float VAR_4)
{
 epub_document *VAR_5 = (epub_document*)VAR_1;
 uint32_t VAR_6 = FUNC_2(VAR_0);
 int VAR_7 = FUNC_0(VAR_0);

 if (VAR_5->layout_w == VAR_2 && VAR_5->layout_h == VAR_3 && VAR_5->layout_em == VAR_4 && VAR_5->css_sum == VAR_6)
  return;
 VAR_5->layout_w = VAR_2;
 VAR_5->layout_h = VAR_3;
 VAR_5->layout_em = VAR_4;

 if (VAR_5->accel == ((void*)0))
  return;






 if (VAR_5->accel->layout_w == VAR_2 &&
  VAR_5->accel->layout_h == VAR_3 &&
  VAR_5->accel->layout_em == VAR_4 &&
  VAR_5->accel->use_doc_css == VAR_7 &&
  VAR_5->accel->css_sum == VAR_6)
  return;

 VAR_5->accel->layout_w = VAR_2;
 VAR_5->accel->layout_h = VAR_3;
 VAR_5->accel->layout_em = VAR_4;
 VAR_5->accel->use_doc_css = VAR_7;
 VAR_5->accel->css_sum = VAR_6;
 FUNC_1(VAR_0, VAR_5->accel);
}
