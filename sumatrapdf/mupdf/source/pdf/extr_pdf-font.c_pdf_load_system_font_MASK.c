
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ pdf_font_desc ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,TYPE_1__*,char const*,int ,int) ;
 int FUNC_2 (int *,TYPE_1__*,char const*,int,int,int,int) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_8, pdf_font_desc *VAR_9, const char *VAR_10, const char *VAR_11)
{
 int VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15 = 0;

 if (FUNC_4(VAR_10, "Bold"))
  VAR_12 = 1;
 if (FUNC_4(VAR_10, "Italic"))
  VAR_13 = 1;
 if (FUNC_4(VAR_10, "Oblique"))
  VAR_13 = 1;

 if (VAR_9->flags & VAR_4)
  VAR_15 = 1;
 if (VAR_9->flags & VAR_7)
  VAR_14 = 1;
 if (VAR_9->flags & VAR_6)
  VAR_13 = 1;
 if (VAR_9->flags & VAR_5)
  VAR_12 = 1;

 if (VAR_11)
 {
  if (!FUNC_3(VAR_11, "Adobe-CNS1"))
   FUNC_1(VAR_8, VAR_9, VAR_10, VAR_0, VAR_14);
  else if (!FUNC_3(VAR_11, "Adobe-GB1"))
   FUNC_1(VAR_8, VAR_9, VAR_10, VAR_1, VAR_14);
  else if (!FUNC_3(VAR_11, "Adobe-Japan1"))
   FUNC_1(VAR_8, VAR_9, VAR_10, VAR_2, VAR_14);
  else if (!FUNC_3(VAR_11, "Adobe-Korea1"))
   FUNC_1(VAR_8, VAR_9, VAR_10, VAR_3, VAR_14);
  else
  {
   if (FUNC_3(VAR_11, "Adobe-Identity") != 0)
    FUNC_0(VAR_8, "unknown cid collection: %s", VAR_11);
   FUNC_2(VAR_8, VAR_9, VAR_10, VAR_15, VAR_14, VAR_12, VAR_13);
  }
 }
 else
 {
  FUNC_2(VAR_8, VAR_9, VAR_10, VAR_15, VAR_14, VAR_12, VAR_13);
 }
}
