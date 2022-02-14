
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_47__ TYPE_6__ ;
typedef struct TYPE_46__ TYPE_5__ ;
typedef struct TYPE_45__ TYPE_4__ ;
typedef struct TYPE_44__ TYPE_3__ ;
typedef struct TYPE_43__ TYPE_2__ ;
typedef struct TYPE_42__ TYPE_1__ ;


struct genstate {int at_bol; int emit_white; int pool; int styles; scalar_t__ is_fb2; int set; int images; int base_uri; int zip; int css; } ;
typedef int fz_xml ;
typedef int fz_image ;
struct TYPE_45__ {scalar_t__ type; char heading; int list_item; TYPE_5__* style; void* href; void* id; struct TYPE_45__* up; } ;
typedef TYPE_4__ fz_html_box ;
struct TYPE_44__ {int value; int unit; } ;
struct TYPE_43__ {int value; void* unit; } ;
struct TYPE_42__ {int value; void* unit; } ;
struct TYPE_46__ {int white_space; TYPE_3__ font_size; TYPE_2__ height; TYPE_1__ width; } ;
typedef TYPE_5__ fz_css_style ;
struct TYPE_47__ {scalar_t__ count; struct TYPE_47__* up; } ;
typedef TYPE_6__ fz_css_match ;
typedef int fz_context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int *,int ,TYPE_4__*,TYPE_4__*) ;
 int FUNC_1 (int *,int ,TYPE_5__*,TYPE_6__*) ;
 int FUNC_2 (char const*) ;
 void* FUNC_3 (int *,TYPE_5__*,int *,int ) ;
 int FUNC_4 (int *,TYPE_5__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,TYPE_6__*,int ,int *) ;
 char FUNC_8 (int,int) ;
 void* FUNC_9 (int *,int ,char const*) ;
 int FUNC_10 (char const*) ;
 int * FUNC_11 (int *,int ,char const*) ;
 int FUNC_12 (int *,char*) ;
 char* FUNC_13 (int *,char*) ;
 int * FUNC_14 (int *) ;
 int * FUNC_15 (int *) ;
 char* FUNC_16 (int *) ;
 char* FUNC_17 (int *) ;
 int FUNC_18 (int *,TYPE_4__*,struct genstate*) ;
 int FUNC_19 (int *,TYPE_4__*,int ,struct genstate*) ;
 int FUNC_20 (int *,TYPE_4__*,char const*,int,struct genstate*) ;
 TYPE_4__* FUNC_21 (int *,TYPE_4__*,TYPE_4__*) ;
 int FUNC_22 (int *,TYPE_4__*,int ,TYPE_4__*) ;
 TYPE_4__* FUNC_23 (int *,TYPE_4__*,TYPE_4__*) ;
 int FUNC_24 (int *,TYPE_4__*,TYPE_4__*,int,struct genstate*) ;
 TYPE_4__* FUNC_25 (int *,TYPE_4__*,TYPE_4__*) ;
 TYPE_4__* FUNC_26 (int *,TYPE_4__*,TYPE_4__*) ;
 TYPE_4__* FUNC_27 (int *,TYPE_4__*,TYPE_4__*) ;
 scalar_t__ FUNC_28 (char const*) ;
 int FUNC_29 (int *,int ,int ,char const*) ;
 int FUNC_30 (int *,int ,int ,int *) ;
 TYPE_4__* FUNC_31 (int *,int ,int) ;
 TYPE_4__* FUNC_32 (int *,int ,int) ;
 scalar_t__ FUNC_33 (char const*,char) ;
 int FUNC_34 (char const*,char*) ;

__attribute__((used)) static fz_html_box *
FUNC_35(fz_context *VAR_19,
 fz_xml *VAR_20,
 fz_html_box *VAR_21,
 fz_css_match *VAR_22,
 int VAR_23,
 int VAR_24,
 int VAR_25,
 int VAR_26,
 struct genstate *VAR_27)
{
 fz_css_match VAR_28;
 fz_html_box *VAR_29, *VAR_30;
 const char *VAR_31;
 int VAR_32;
 fz_css_style VAR_33;

 while (VAR_20)
 {
  VAR_28.up = VAR_22;
  VAR_28.count = 0;

  VAR_31 = FUNC_16(VAR_20);
  if (VAR_31)
  {
   FUNC_7(VAR_19, &VAR_28, VAR_27->css, VAR_20);

   VAR_32 = FUNC_5(&VAR_28);

   if (VAR_31[0]=='b' && VAR_31[1]=='r' && VAR_31[2]==0)
   {
    if (VAR_21->type == VAR_2)
    {
     fz_html_box *VAR_34 = VAR_21;
     while (VAR_34->type != VAR_1)
      VAR_34 = VAR_34->up;
     FUNC_0(VAR_19, VAR_27->pool, VAR_34, VAR_21);
    }
    else
    {
     VAR_29 = FUNC_32(VAR_19, VAR_27->pool, VAR_25);
     FUNC_1(VAR_19, VAR_27->set, &VAR_33, &VAR_28);
     VAR_29->style = FUNC_3(VAR_19, &VAR_33, &VAR_27->styles, VAR_27->pool);
     VAR_21 = FUNC_23(VAR_19, VAR_29, VAR_21);
    }
    VAR_27->at_bol = 1;
   }

   else if (VAR_31[0]=='i' && VAR_31[1]=='m' && VAR_31[2]=='g' && VAR_31[3]==0)
   {
    const char *VAR_35 = FUNC_13(VAR_20, "src");
    if (VAR_35)
    {
     int VAR_36, VAR_37;
     const char *VAR_38 = FUNC_13(VAR_20, "width");
     const char *VAR_39 = FUNC_13(VAR_20, "height");
     VAR_29 = FUNC_32(VAR_19, VAR_27->pool, VAR_25);
     FUNC_1(VAR_19, VAR_27->set, &VAR_33, &VAR_28);
     if (VAR_38 && (VAR_36 = FUNC_2(VAR_38)) > 0)
     {
      VAR_33.width.value = VAR_36;
      VAR_33.width.unit = FUNC_33(VAR_38, '%') ? VAR_16 : VAR_15;
     }
     if (VAR_39 && (VAR_37 = FUNC_2(VAR_39)) > 0)
     {
      VAR_33.height.value = VAR_37;
      VAR_33.height.unit = FUNC_33(VAR_39, '%') ? VAR_16 : VAR_15;
     }
     VAR_29->style = FUNC_3(VAR_19, &VAR_33, &VAR_27->styles, VAR_27->pool);
     FUNC_24(VAR_19, VAR_29, VAR_21, VAR_25, VAR_27);
     FUNC_19(VAR_19, VAR_29, FUNC_29(VAR_19, VAR_27->zip, VAR_27->base_uri, VAR_35), VAR_27);
    }
   }

   else if (VAR_31[0]=='s' && VAR_31[1]=='v' && VAR_31[2]=='g' && VAR_31[3]==0)
   {
    VAR_29 = FUNC_32(VAR_19, VAR_27->pool, VAR_25);
    FUNC_1(VAR_19, VAR_27->set, &VAR_33, &VAR_28);
    VAR_29->style = FUNC_3(VAR_19, &VAR_33, &VAR_27->styles, VAR_27->pool);
    FUNC_24(VAR_19, VAR_29, VAR_21, VAR_25, VAR_27);
    FUNC_19(VAR_19, VAR_29, FUNC_30(VAR_19, VAR_27->zip, VAR_27->base_uri, VAR_20), VAR_27);
   }

   else if (VAR_27->is_fb2 && VAR_31[0]=='i' && VAR_31[1]=='m' && VAR_31[2]=='a' && VAR_31[3]=='g' && VAR_31[4]=='e' && VAR_31[5]==0)
   {
    const char *VAR_40 = FUNC_13(VAR_20, "l:href");
    if (!VAR_40)
     VAR_40 = FUNC_13(VAR_20, "xlink:href");
    if (VAR_40 && VAR_40[0] == '#')
    {
     fz_image *VAR_41 = FUNC_11(VAR_19, VAR_27->images, VAR_40+1);
     if (VAR_32 == VAR_4)
     {
      fz_html_box *VAR_42;
      VAR_29 = FUNC_31(VAR_19, VAR_27->pool, VAR_25);
      FUNC_4(VAR_19, &VAR_33);
      FUNC_1(VAR_19, VAR_27->set, &VAR_33, &VAR_28);
      VAR_29->style = FUNC_3(VAR_19, &VAR_33, &VAR_27->styles, VAR_27->pool);
      VAR_21 = FUNC_21(VAR_19, VAR_29, VAR_21);
      VAR_42 = FUNC_32(VAR_19, VAR_27->pool, VAR_25);
      FUNC_1(VAR_19, VAR_27->set, &VAR_33, &VAR_28);
      VAR_42->style = FUNC_3(VAR_19, &VAR_33, &VAR_27->styles, VAR_27->pool);
      FUNC_24(VAR_19, VAR_42, VAR_29, VAR_25, VAR_27);
      FUNC_19(VAR_19, VAR_42, FUNC_6(VAR_19, VAR_41), VAR_27);
     }
     else if (VAR_32 == VAR_5)
     {
      VAR_29 = FUNC_32(VAR_19, VAR_27->pool, VAR_25);
      FUNC_1(VAR_19, VAR_27->set, &VAR_33, &VAR_28);
      VAR_29->style = FUNC_3(VAR_19, &VAR_33, &VAR_27->styles, VAR_27->pool);
      FUNC_24(VAR_19, VAR_29, VAR_21, VAR_25, VAR_27);
      FUNC_19(VAR_19, VAR_29, FUNC_6(VAR_19, VAR_41), VAR_27);
     }
    }
   }

   else if (VAR_32 != VAR_8)
   {
    const char *VAR_43, *VAR_44, *VAR_45, *VAR_46;
    int VAR_47 = VAR_25;
    int VAR_48 = VAR_26;

    VAR_43 = FUNC_13(VAR_20, "dir");
    if (VAR_43)
    {
     if (!FUNC_34(VAR_43, "auto"))
      VAR_47 = VAR_13;
     else if (!FUNC_34(VAR_43, "rtl"))
      VAR_47 = VAR_14;
     else if (!FUNC_34(VAR_43, "ltr"))
      VAR_47 = VAR_12;
     else
      VAR_47 = VAR_3;
    }

    VAR_44 = FUNC_13(VAR_20, "lang");
    if (VAR_44)
     VAR_48 = FUNC_10(VAR_44);

    if (VAR_32 == VAR_5)
     VAR_29 = FUNC_32(VAR_19, VAR_27->pool, VAR_47);
    else
     VAR_29 = FUNC_31(VAR_19, VAR_27->pool, VAR_47);
    FUNC_4(VAR_19, &VAR_33);
    FUNC_1(VAR_19, VAR_27->set, &VAR_33, &VAR_28);
    VAR_29->style = FUNC_3(VAR_19, &VAR_33, &VAR_27->styles, VAR_27->pool);

    VAR_45 = FUNC_13(VAR_20, "id");
    if (VAR_45)
     VAR_29->id = FUNC_9(VAR_19, VAR_27->pool, VAR_45);

    if (VAR_32 == VAR_4 || VAR_32 == VAR_6)
    {
     VAR_21 = FUNC_21(VAR_19, VAR_29, VAR_21);
     if (VAR_27->is_fb2)
     {
      if (!FUNC_34(VAR_31, "title") || !FUNC_34(VAR_31, "subtitle"))
       VAR_29->heading = FUNC_8(VAR_24, 6);
     }
     else
     {
      if (VAR_31[0]=='h' && VAR_31[1]>='1' && VAR_31[1]<='6' && VAR_31[2]==0)
       VAR_29->heading = VAR_31[1] - '0';
     }
    }
    else if (VAR_32 == VAR_7)
    {
     VAR_21 = FUNC_21(VAR_19, VAR_29, VAR_21);
     VAR_29->list_item = ++VAR_23;
    }
    else if (VAR_32 == VAR_5)
    {
     FUNC_24(VAR_19, VAR_29, VAR_21, VAR_47, VAR_27);
     if (VAR_45)
      FUNC_18(VAR_19, VAR_29, VAR_27);
     if (VAR_31[0]=='a' && VAR_31[1]==0)
     {
      if (VAR_27->is_fb2)
      {
       VAR_46 = FUNC_13(VAR_20, "l:href");
       if (!VAR_46)
        VAR_46 = FUNC_13(VAR_20, "xlink:href");
      }
      else
       VAR_46 = FUNC_13(VAR_20, VAR_27->is_fb2 ? "l:href" : "href");
      if (VAR_46)
       VAR_29->href = FUNC_9(VAR_19, VAR_27->pool, VAR_46);
     }
    }
    else if (VAR_32 == VAR_9)
    {
     VAR_21 = FUNC_25(VAR_19, VAR_29, VAR_21);
    }
    else if (VAR_32 == VAR_11)
    {
     VAR_21 = FUNC_27(VAR_19, VAR_29, VAR_21);
    }
    else if (VAR_32 == VAR_10)
    {
     VAR_21 = FUNC_26(VAR_19, VAR_29, VAR_21);
    }
    else
    {
     FUNC_12(VAR_19, "unknown box display type");
     FUNC_22(VAR_19, VAR_29, VAR_0, VAR_21);
    }

    if (FUNC_14(VAR_20))
    {
     int VAR_49 = VAR_23;
     int VAR_50 = VAR_24;
     if (!FUNC_34(VAR_31, "ul") || !FUNC_34(VAR_31, "ol"))
      VAR_49 = 0;
     if (!FUNC_34(VAR_31, "section"))
      ++VAR_50;
     VAR_30 = FUNC_35(VAR_19,
      FUNC_14(VAR_20),
      VAR_29,
      &VAR_28,
      VAR_49,
      VAR_50,
      VAR_47,
      VAR_48,
      VAR_27);
     if (VAR_30 != VAR_29)
      VAR_21 = VAR_30;
    }
   }
  }
  else
  {
   const char *VAR_51 = FUNC_17(VAR_20);
   int VAR_52 = VAR_21->style->white_space & VAR_18;
   if (VAR_52 && FUNC_28(VAR_51))
   {
    VAR_27->emit_white = 1;
   }
   else
   {
    if (VAR_21->type != VAR_2)
    {

     fz_css_style VAR_53;
     VAR_29 = FUNC_32(VAR_19, VAR_27->pool, VAR_25);
     FUNC_4(VAR_19, &VAR_53);
     VAR_29->style = FUNC_3(VAR_19, &VAR_53, &VAR_27->styles, VAR_27->pool);
     FUNC_24(VAR_19, VAR_29, VAR_21, VAR_25, VAR_27);
     VAR_53 = *VAR_21->style;

     VAR_53.font_size.value = 1;
     VAR_53.font_size.unit = VAR_17;
     VAR_29->style = FUNC_3(VAR_19, &VAR_53, &VAR_27->styles, VAR_27->pool);
     FUNC_20(VAR_19, VAR_29, VAR_51, VAR_26, VAR_27);
    }
    else
    {
     FUNC_20(VAR_19, VAR_21, VAR_51, VAR_26, VAR_27);
    }
   }
  }

  VAR_20 = FUNC_15(VAR_20);
 }

 return VAR_21;
}
