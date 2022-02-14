
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_rect ;
struct TYPE_4__ {int * dev; int * (* begin_page ) (int *,TYPE_1__*,int ) ;} ;
typedef TYPE_1__ fz_document_writer ;
typedef int fz_device ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int * FUNC_1 (int *,TYPE_1__*,int ) ;

fz_device *
FUNC_2(fz_context *VAR_1, fz_document_writer *VAR_2, fz_rect VAR_3)
{
 if (!VAR_2)
  return ((void*)0);
 if (VAR_2->dev)
  FUNC_0(VAR_1, VAR_0, "called begin page without ending the previous page");
 VAR_2->dev = VAR_2->begin_page(VAR_1, VAR_2, VAR_3);
 return VAR_2->dev;
}
