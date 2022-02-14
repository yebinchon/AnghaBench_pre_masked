
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int fz_rect ;
struct TYPE_2__ {int pixmap; int draw; } ;
typedef TYPE_1__ fz_pcl_writer ;
typedef int fz_document_writer ;
typedef int fz_device ;
typedef int fz_context ;


 int * FUNC_0 (int *,int *,int ,int *) ;

__attribute__((used)) static fz_device *
FUNC_1(fz_context *VAR_0, fz_document_writer *VAR_1, fz_rect VAR_2)
{
 fz_pcl_writer *VAR_3 = (fz_pcl_writer*)VAR_1;
 return FUNC_0(VAR_0, &VAR_3->draw, VAR_2, &VAR_3->pixmap);
}
