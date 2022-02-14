
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int xps_resource ;
struct TYPE_9__ {TYPE_1__* cookie; } ;
typedef TYPE_2__ xps_document ;
typedef int fz_xml ;
typedef int fz_rect ;
typedef int fz_matrix ;
typedef int fz_context ;
struct TYPE_8__ {scalar_t__ abort; } ;


 scalar_t__ FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *,TYPE_2__*,int *) ;
 int FUNC_2 (int *,TYPE_2__*,int ,int ,char*,int *,int *) ;
 int FUNC_3 (int *,TYPE_2__*,int ,char*,int *,int *) ;
 int FUNC_4 (int *,TYPE_2__*,int ,char*,int *,int *) ;

void
FUNC_5(fz_context *VAR_0, xps_document *VAR_1, fz_matrix VAR_2, fz_rect VAR_3, char *VAR_4, xps_resource *VAR_5, fz_xml *VAR_6)
{
 if (VAR_1->cookie && VAR_1->cookie->abort)
  return;
 if (FUNC_0(VAR_6, "Path"))
  FUNC_4(VAR_0, VAR_1, VAR_2, VAR_4, VAR_5, VAR_6);
 if (FUNC_0(VAR_6, "Glyphs"))
  FUNC_3(VAR_0, VAR_1, VAR_2, VAR_4, VAR_5, VAR_6);
 if (FUNC_0(VAR_6, "Canvas"))
  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (FUNC_0(VAR_6, "AlternateContent"))
 {
  VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_6);
  if (VAR_6)
   FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 }

}
