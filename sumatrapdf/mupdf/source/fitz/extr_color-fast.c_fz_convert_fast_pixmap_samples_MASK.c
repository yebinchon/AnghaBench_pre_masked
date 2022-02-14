
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_1__ ;


struct TYPE_35__ {TYPE_2__* colorspace; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;
struct TYPE_36__ {int type; } ;
typedef TYPE_2__ fz_colorspace ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_3 (int *,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_4 (int *,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_5 (int *,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_6 (int *,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_7 (int *,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_8 (int *,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_9 (int *,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_10 (int *,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_11 (int *,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_12 (int *,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_13 (int *,TYPE_1__*,TYPE_1__*,int *,int ,int) ;
 int VAR_4 ;
 int FUNC_14 (int *,TYPE_1__*,TYPE_1__*,int) ;

void
FUNC_15(fz_context *VAR_5, fz_pixmap *VAR_6, fz_pixmap *VAR_7, int VAR_8)
{
 fz_colorspace *VAR_9 = VAR_6->colorspace;
 fz_colorspace *VAR_10 = VAR_7->colorspace;
 int VAR_11 = VAR_10 ? VAR_10->type : VAR_2;
 int VAR_12 = VAR_9 ? VAR_9->type : VAR_2;

 if (!VAR_10)
 {
  FUNC_14(VAR_5, VAR_6, VAR_7, VAR_8);
 }

 else if (VAR_12 == VAR_2)
 {
  if (VAR_11 == VAR_2)
   FUNC_7(VAR_5, VAR_6, VAR_7, VAR_8);
  else if (VAR_11 == VAR_3)
   FUNC_8(VAR_5, VAR_6, VAR_7, VAR_8);
  else if (VAR_11 == VAR_0)
   FUNC_8(VAR_5, VAR_6, VAR_7, VAR_8);
  else if (VAR_11 == VAR_1)
   FUNC_6(VAR_5, VAR_6, VAR_7, VAR_8);
  else
   goto slow;
 }

 else if (VAR_12 == VAR_3)
 {
  if (VAR_11 == VAR_2)
   FUNC_11(VAR_5, VAR_6, VAR_7, VAR_8);
  else if (VAR_11 == VAR_3)
   FUNC_12(VAR_5, VAR_6, VAR_7, VAR_8);
  else if (VAR_11 == VAR_0)
   FUNC_9(VAR_5, VAR_6, VAR_7, VAR_8);
  else if (VAR_11 == VAR_1)
   FUNC_10(VAR_5, VAR_6, VAR_7, VAR_8);
  else
   goto slow;
 }

 else if (VAR_12 == VAR_0)
 {
  if (VAR_11 == VAR_2)
   FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8);
  else if (VAR_11 == VAR_3)
   FUNC_9(VAR_5, VAR_6, VAR_7, VAR_8);
  else if (VAR_11 == VAR_0)
   FUNC_12(VAR_5, VAR_6, VAR_7, VAR_8);
  else if (VAR_11 == VAR_1)
   FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8);
  else
   goto slow;
 }

 else if (VAR_12 == VAR_1)
 {
  if (VAR_11 == VAR_2)
   FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8);
  else if (VAR_11 == VAR_3)
   FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8);
  else if (VAR_11 == VAR_0)
   FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);
  else if (VAR_11 == VAR_1)
   FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8);
  else
   goto slow;
 }
 else
 {
  goto slow;
 }
 return;

slow:
 FUNC_13(VAR_5, VAR_6, VAR_7, ((void*)0), VAR_4, VAR_8);
}
