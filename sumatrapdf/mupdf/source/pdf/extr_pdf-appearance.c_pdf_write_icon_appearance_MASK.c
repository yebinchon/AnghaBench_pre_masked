
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_annot ;
struct TYPE_5__ {int x0; int x1; int y0; int y1; } ;
typedef TYPE_1__ fz_rect ;
typedef int fz_context ;
typedef int fz_buffer ;


 int FUNC_0 (int *,int *,char*) ;
 TYPE_1__ FUNC_1 (float,float,int,int) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 char* FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_14, pdf_annot *VAR_15, fz_buffer *VAR_16, fz_rect *VAR_17, fz_rect *VAR_18)
{
 const char *VAR_19;
 float VAR_20 = (VAR_17->x0 + VAR_17->x1) / 2;
 float VAR_21 = (VAR_17->y0 + VAR_17->y1) / 2;

 if (!FUNC_4(VAR_14, VAR_15, VAR_16))
  FUNC_0(VAR_14, VAR_16, "1 g\n");

 FUNC_0(VAR_14, VAR_16, "1 w\n0.5 0.5 15 15 re\nb\n");
 FUNC_0(VAR_14, VAR_16, "1 0 0 -1 4 12 cm\n");

 if (FUNC_3(VAR_14, VAR_15))
  FUNC_0(VAR_14, VAR_16, "1 g\n");
 else
  FUNC_0(VAR_14, VAR_16, "0 g\n");

 VAR_19 = FUNC_2(VAR_14, VAR_15);


 if (!FUNC_5(VAR_19, "Comment"))
  FUNC_0(VAR_14, VAR_16, VAR_0);
 else if (!FUNC_5(VAR_19, "Key"))
  FUNC_0(VAR_14, VAR_16, VAR_4);
 else if (!FUNC_5(VAR_19, "Note"))
  FUNC_0(VAR_14, VAR_16, VAR_7);
 else if (!FUNC_5(VAR_19, "Help"))
  FUNC_0(VAR_14, VAR_16, VAR_2);
 else if (!FUNC_5(VAR_19, "NewParagraph"))
  FUNC_0(VAR_14, VAR_16, VAR_6);
 else if (!FUNC_5(VAR_19, "Paragraph"))
  FUNC_0(VAR_14, VAR_16, VAR_9);
 else if (!FUNC_5(VAR_19, "Insert"))
  FUNC_0(VAR_14, VAR_16, VAR_3);


 else if (!FUNC_5(VAR_19, "Graph"))
  FUNC_0(VAR_14, VAR_16, VAR_1);
 else if (!FUNC_5(VAR_19, "PushPin"))
  FUNC_0(VAR_14, VAR_16, VAR_10);
 else if (!FUNC_5(VAR_19, "Paperclip"))
  FUNC_0(VAR_14, VAR_16, VAR_8);
 else if (!FUNC_5(VAR_19, "Tag"))
  FUNC_0(VAR_14, VAR_16, VAR_13);


 else if (!FUNC_5(VAR_19, "Speaker"))
  FUNC_0(VAR_14, VAR_16, VAR_11);
 else if (!FUNC_5(VAR_19, "Mic"))
  FUNC_0(VAR_14, VAR_16, VAR_5);


 else
  FUNC_0(VAR_14, VAR_16, VAR_12);

 *VAR_17 = FUNC_1(VAR_20 - 9, VAR_21 - 9, VAR_20 + 9, VAR_21 + 9);
 *VAR_18 = FUNC_1(0, 0, 16, 16);
}
