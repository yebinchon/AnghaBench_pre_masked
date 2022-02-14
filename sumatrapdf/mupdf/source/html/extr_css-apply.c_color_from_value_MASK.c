
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char type; int * data; TYPE_1__* next; struct TYPE_6__* args; } ;
typedef TYPE_2__ fz_css_value ;
typedef int fz_css_color ;
struct TYPE_5__ {TYPE_2__* next; } ;


 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int,int ) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static fz_css_color
FUNC_6(fz_css_value *VAR_3, fz_css_color VAR_4)
{
 if (!VAR_3)
  return VAR_4;

 if (VAR_3->type == VAR_0)
 {
  int VAR_5, VAR_6, VAR_7;
  size_t VAR_8;
hex_color:
  VAR_8 = FUNC_4(VAR_3->data);
  if (VAR_8 == 3)
  {
   VAR_5 = FUNC_5(VAR_3->data[0]) * 16 + FUNC_5(VAR_3->data[0]);
   VAR_6 = FUNC_5(VAR_3->data[1]) * 16 + FUNC_5(VAR_3->data[1]);
   VAR_7 = FUNC_5(VAR_3->data[2]) * 16 + FUNC_5(VAR_3->data[2]);
  }
  else if (VAR_8 == 6)
  {
   VAR_5 = FUNC_5(VAR_3->data[0]) * 16 + FUNC_5(VAR_3->data[1]);
   VAR_6 = FUNC_5(VAR_3->data[2]) * 16 + FUNC_5(VAR_3->data[3]);
   VAR_7 = FUNC_5(VAR_3->data[4]) * 16 + FUNC_5(VAR_3->data[5]);
  }
  else
  {
   VAR_5 = VAR_6 = VAR_7 = 0;
  }
  return FUNC_1(VAR_5, VAR_6, VAR_7, 255);
 }

 if (VAR_3->type == '(' && !FUNC_3(VAR_3->data, "rgb"))
 {
  fz_css_value *VAR_9, *VAR_10, *VAR_11;
  int VAR_12, VAR_13, VAR_14;
  VAR_9 = VAR_3->args;
  VAR_10 = VAR_9 && VAR_9->next ? VAR_9->next->next : ((void*)0);
  VAR_11 = VAR_10 && VAR_10->next ? VAR_10->next->next : ((void*)0);
  VAR_12 = FUNC_0(FUNC_2(VAR_9, 0, VAR_2), 255, 255, 0);
  VAR_13 = FUNC_0(FUNC_2(VAR_10, 0, VAR_2), 255, 255, 0);
  VAR_14 = FUNC_0(FUNC_2(VAR_11, 0, VAR_2), 255, 255, 0);
  return FUNC_1(VAR_12, VAR_13, VAR_14, 255);
 }

 if (VAR_3->type == VAR_1)
 {
  if (!FUNC_3(VAR_3->data, "transparent"))
   return FUNC_1(0, 0, 0, 0);
  if (!FUNC_3(VAR_3->data, "maroon"))
   return FUNC_1(0x80, 0x00, 0x00, 255);
  if (!FUNC_3(VAR_3->data, "red"))
   return FUNC_1(0xFF, 0x00, 0x00, 255);
  if (!FUNC_3(VAR_3->data, "orange"))
   return FUNC_1(0xFF, 0xA5, 0x00, 255);
  if (!FUNC_3(VAR_3->data, "yellow"))
   return FUNC_1(0xFF, 0xFF, 0x00, 255);
  if (!FUNC_3(VAR_3->data, "olive"))
   return FUNC_1(0x80, 0x80, 0x00, 255);
  if (!FUNC_3(VAR_3->data, "purple"))
   return FUNC_1(0x80, 0x00, 0x80, 255);
  if (!FUNC_3(VAR_3->data, "fuchsia"))
   return FUNC_1(0xFF, 0x00, 0xFF, 255);
  if (!FUNC_3(VAR_3->data, "white"))
   return FUNC_1(0xFF, 0xFF, 0xFF, 255);
  if (!FUNC_3(VAR_3->data, "lime"))
   return FUNC_1(0x00, 0xFF, 0x00, 255);
  if (!FUNC_3(VAR_3->data, "green"))
   return FUNC_1(0x00, 0x80, 0x00, 255);
  if (!FUNC_3(VAR_3->data, "navy"))
   return FUNC_1(0x00, 0x00, 0x80, 255);
  if (!FUNC_3(VAR_3->data, "blue"))
   return FUNC_1(0x00, 0x00, 0xFF, 255);
  if (!FUNC_3(VAR_3->data, "aqua"))
   return FUNC_1(0x00, 0xFF, 0xFF, 255);
  if (!FUNC_3(VAR_3->data, "teal"))
   return FUNC_1(0x00, 0x80, 0x80, 255);
  if (!FUNC_3(VAR_3->data, "black"))
   return FUNC_1(0x00, 0x00, 0x00, 255);
  if (!FUNC_3(VAR_3->data, "silver"))
   return FUNC_1(0xC0, 0xC0, 0xC0, 255);
  if (!FUNC_3(VAR_3->data, "gray"))
   return FUNC_1(0x80, 0x80, 0x80, 255);
  goto hex_color;
 }
 return VAR_4;
}
