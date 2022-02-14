
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int compress; int strip_height; } ;
typedef TYPE_1__ fz_pclm_options ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int *,char const*,char*,char const**) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,int ,char*,...) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

fz_pclm_options *
FUNC_5(fz_context *VAR_1, fz_pclm_options *VAR_2, const char *VAR_3)
{
 const char *VAR_4;

 FUNC_4(VAR_2, 0, sizeof *VAR_2);

 if (FUNC_1(VAR_1, VAR_3, "compression", &VAR_4))
 {
  if (FUNC_2(VAR_4, "none"))
   VAR_2->compress = 0;
  else if (FUNC_2(VAR_4, "flate"))
   VAR_2->compress = 1;
  else
   FUNC_3(VAR_1, VAR_0, "Unsupported PCLm compression %s (none, or flate only)", VAR_4);
 }
 if (FUNC_1(VAR_1, VAR_3, "strip-height", &VAR_4))
 {
  int VAR_5 = FUNC_0(VAR_4);
  if (VAR_5 <= 0)
   FUNC_3(VAR_1, VAR_0, "Unsupported PCLm strip height %d (suggest 16)", VAR_5);
  VAR_2->strip_height = VAR_5;
 }

 return VAR_2;
}
