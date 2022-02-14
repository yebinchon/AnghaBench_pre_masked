
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ fz_css_value ;
typedef int fz_css_match ;


 int FUNC_0 (int *,char const*,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(fz_css_match *VAR_0, fz_css_value *VAR_1, int VAR_2,
 const char *VAR_3, const char *VAR_4, const char *VAR_5, const char *VAR_6)
{
 int VAR_7 = FUNC_1(VAR_1);

 if (VAR_7 == 1)
 {
  FUNC_0(VAR_0, VAR_3, VAR_1, VAR_2);
  FUNC_0(VAR_0, VAR_4, VAR_1, VAR_2);
  FUNC_0(VAR_0, VAR_5, VAR_1, VAR_2);
  FUNC_0(VAR_0, VAR_6, VAR_1, VAR_2);
 }

 if (VAR_7 == 2)
 {
  fz_css_value *VAR_8 = VAR_1;
  fz_css_value *VAR_9 = VAR_1->next;

  FUNC_0(VAR_0, VAR_3, VAR_8, VAR_2);
  FUNC_0(VAR_0, VAR_4, VAR_9, VAR_2);
  FUNC_0(VAR_0, VAR_5, VAR_8, VAR_2);
  FUNC_0(VAR_0, VAR_6, VAR_9, VAR_2);
 }

 if (VAR_7 == 3)
 {
  fz_css_value *VAR_10 = VAR_1;
  fz_css_value *VAR_11 = VAR_1->next;
  fz_css_value *VAR_12 = VAR_1->next->next;

  FUNC_0(VAR_0, VAR_3, VAR_10, VAR_2);
  FUNC_0(VAR_0, VAR_4, VAR_11, VAR_2);
  FUNC_0(VAR_0, VAR_5, VAR_12, VAR_2);
  FUNC_0(VAR_0, VAR_6, VAR_11, VAR_2);
 }

 if (VAR_7 == 4)
 {
  fz_css_value *VAR_13 = VAR_1;
  fz_css_value *VAR_14 = VAR_1->next;
  fz_css_value *VAR_15 = VAR_1->next->next;
  fz_css_value *VAR_16 = VAR_1->next->next->next;

  FUNC_0(VAR_0, VAR_3, VAR_13, VAR_2);
  FUNC_0(VAR_0, VAR_4, VAR_14, VAR_2);
  FUNC_0(VAR_0, VAR_5, VAR_15, VAR_2);
  FUNC_0(VAR_0, VAR_6, VAR_16, VAR_2);
 }
}
