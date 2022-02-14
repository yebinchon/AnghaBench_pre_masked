
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ fz_stext_options ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,char const*,char*,char const**) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

fz_stext_options *
FUNC_3(fz_context *VAR_4, fz_stext_options *VAR_5, const char *VAR_6)
{
 const char *VAR_7;

 FUNC_2(VAR_5, 0, sizeof *VAR_5);

 if (FUNC_0(VAR_4, VAR_6, "preserve-ligatures", &VAR_7) && FUNC_1(VAR_7, "yes"))
  VAR_5->flags |= VAR_2;
 if (FUNC_0(VAR_4, VAR_6, "preserve-whitespace", &VAR_7) && FUNC_1(VAR_7, "yes"))
  VAR_5->flags |= VAR_3;
 if (FUNC_0(VAR_4, VAR_6, "preserve-images", &VAR_7) && FUNC_1(VAR_7, "yes"))
  VAR_5->flags |= VAR_1;
 if (FUNC_0(VAR_4, VAR_6, "inhibit-spaces", &VAR_7) && FUNC_1(VAR_7, "yes"))
  VAR_5->flags |= VAR_0;

 return VAR_5;
}
