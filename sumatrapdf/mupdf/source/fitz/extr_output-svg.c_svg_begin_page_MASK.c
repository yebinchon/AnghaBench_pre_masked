
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; int id; int reuse_images; int text_format; int out; int path; } ;
typedef TYPE_1__ fz_svg_writer ;
struct TYPE_5__ {float x1; float x0; float y1; float y0; } ;
typedef TYPE_2__ fz_rect ;
typedef int fz_document_writer ;
typedef int fz_device ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int ,int) ;
 int FUNC_1 (int *,char*,int ) ;
 int * FUNC_2 (int *,int ,float,float,int ,int ,int *) ;

__attribute__((used)) static fz_device *
FUNC_3(fz_context *VAR_1, fz_document_writer *VAR_2, fz_rect VAR_3)
{
 fz_svg_writer *VAR_4 = (fz_svg_writer*)VAR_2;
 char VAR_5[VAR_0];

 float VAR_6 = VAR_3.x1 - VAR_3.x0;
 float VAR_7 = VAR_3.y1 - VAR_3.y0;

 VAR_4->count += 1;

 FUNC_0(VAR_1, VAR_5, sizeof VAR_5, VAR_4->path, VAR_4->count);
 VAR_4->out = FUNC_1(VAR_1, VAR_5, 0);
 return FUNC_2(VAR_1, VAR_4->out, VAR_6, VAR_7, VAR_4->text_format, VAR_4->reuse_images, &VAR_4->id);
}
