
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; int pixmap; } ;
typedef TYPE_1__ fz_pixmap_writer ;
typedef int fz_document_writer ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, fz_document_writer *VAR_1)
{
 fz_pixmap_writer *VAR_2 = (fz_pixmap_writer*)VAR_1;
 FUNC_0(VAR_0, VAR_2->pixmap);
 FUNC_1(VAR_0, VAR_2->path);
}
