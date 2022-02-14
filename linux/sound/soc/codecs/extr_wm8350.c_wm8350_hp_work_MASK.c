
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350_jack_data {int report; int jack; } ;
struct wm8350_data {struct wm8350* wm8350; } ;
struct wm8350 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct wm8350*,int ) ;

__attribute__((used)) static void FUNC_2(struct wm8350_data *VAR_1,
      struct wm8350_jack_data *VAR_2,
      u16 VAR_3)
{
 struct wm8350 *VAR_4 = VAR_1->wm8350;
 u16 VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_4, VAR_0);
 if (VAR_5 & VAR_3)
  VAR_6 = VAR_2->report;
 else
  VAR_6 = 0;

 FUNC_0(VAR_2->jack, VAR_6, VAR_2->report);

}
