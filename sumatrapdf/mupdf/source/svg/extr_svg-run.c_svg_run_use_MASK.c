
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ use_depth; int transform; int fontsize; int viewbox_h; int viewbox_w; } ;
typedef TYPE_1__ svg_state ;
struct TYPE_12__ {int idmap; } ;
typedef TYPE_2__ svg_document ;
typedef int fz_xml ;
typedef int fz_device ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (float,float) ;
 int * FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,TYPE_2__*,int *,TYPE_1__*) ;
 float FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (int *,int *,TYPE_2__*,int *,TYPE_1__*) ;
 int FUNC_9 (int *,int *,TYPE_2__*,int *,int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_10(fz_context *VAR_1, fz_device *VAR_2, svg_document *VAR_3, fz_xml *VAR_4, const svg_state *VAR_5)
{
 svg_state VAR_6 = *VAR_5;

 char *VAR_7 = FUNC_4(VAR_4, "xlink:href");
 char *VAR_8 = FUNC_4(VAR_4, "x");
 char *VAR_9 = FUNC_4(VAR_4, "y");

 float VAR_10 = 0;
 float VAR_11 = 0;

 if (++VAR_6.use_depth > VAR_0)
 {
  FUNC_3(VAR_1, "svg: too much recursion");
  return;
 }

 FUNC_6(VAR_1, VAR_3, VAR_4, &VAR_6);
 if (VAR_8) VAR_10 = FUNC_7(VAR_8, VAR_6.viewbox_w, VAR_6.fontsize);
 if (VAR_9) VAR_11 = FUNC_7(VAR_9, VAR_6.viewbox_h, VAR_6.fontsize);

 VAR_6.transform = FUNC_0(FUNC_1(VAR_10, VAR_11), VAR_6.transform);

 if (VAR_7 && VAR_7[0] == '#')
 {
  fz_xml *VAR_12 = FUNC_2(VAR_1, VAR_3->idmap, VAR_7 + 1);
  if (VAR_12)
  {
   if (FUNC_5(VAR_12, "symbol"))
    FUNC_9(VAR_1, VAR_2, VAR_3, VAR_4, VAR_12, &VAR_6);
   else
    FUNC_8(VAR_1, VAR_2, VAR_3, VAR_12, &VAR_6);
   return;
  }
 }

 FUNC_3(VAR_1, "svg: cannot find linked symbol");
}
