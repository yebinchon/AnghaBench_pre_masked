
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_6__* colorspace; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;
typedef int buf ;
struct TYPE_11__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int *,TYPE_1__*,TYPE_6__*,int *,int *,int ,int) ;
 int VAR_2 ;
 TYPE_6__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*,char*) ;
 int FUNC_4 (int *,TYPE_1__*,char*) ;
 int FUNC_5 (char*,int,char*,char*) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static void FUNC_7(fz_context *VAR_3, fz_pixmap *VAR_4, char *VAR_5, int VAR_6)
{
 char VAR_7[1024];
 fz_pixmap *VAR_8 = ((void*)0);

 if (!VAR_4)
  return;

 if (VAR_6 && VAR_4->colorspace && VAR_4->colorspace != FUNC_1(VAR_3))
 {
  VAR_8 = FUNC_0(VAR_3, VAR_4, FUNC_1(VAR_3), ((void*)0), ((void*)0), VAR_2 , 1);
  VAR_4 = VAR_8;
 }

 if (!VAR_4->colorspace || VAR_4->colorspace->type == VAR_0 || VAR_4->colorspace->type == VAR_1)
 {
  FUNC_5(VAR_7, sizeof(VAR_7), "%s.png", VAR_5);
  FUNC_6("extracting image %s\n", VAR_7);
  FUNC_4(VAR_3, VAR_4, VAR_7);
 }
 else
 {
  FUNC_5(VAR_7, sizeof(VAR_7), "%s.pam", VAR_5);
  FUNC_6("extracting image %s\n", VAR_7);
  FUNC_3(VAR_3, VAR_4, VAR_7);
 }

 FUNC_2(VAR_3, VAR_8);
}
