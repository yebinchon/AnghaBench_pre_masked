
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int short_report; int report; int jack; } ;
struct wm8350_data {TYPE_1__ mic; struct wm8350* wm8350; } ;
struct wm8350 {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct wm8350*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct wm8350_data *VAR_6 = VAR_5;
 struct wm8350 *VAR_7 = VAR_6->wm8350;
 u16 VAR_8;
 int VAR_9 = 0;


 FUNC_1("WM8350 mic");


 VAR_8 = FUNC_2(VAR_7, VAR_3);
 if (VAR_8 & VAR_1)
  VAR_9 |= VAR_6->mic.short_report;
 if (VAR_8 & VAR_2)
  VAR_9 |= VAR_6->mic.report;

 FUNC_0(VAR_6->mic.jack, VAR_9,
       VAR_6->mic.report | VAR_6->mic.short_report);

 return VAR_0;
}
