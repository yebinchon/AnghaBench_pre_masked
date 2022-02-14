
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts3a227e {int buttons_held; int jack; scalar_t__ mic_present; scalar_t__ plugged; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,int,int ) ;
 int* VAR_4 ;

__attribute__((used)) static void FUNC_1(struct ts3a227e *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7 = 0;

 if (!VAR_5->jack)
  return;

 if (VAR_5->plugged)
  VAR_7 = VAR_0;
 if (VAR_5->mic_present)
  VAR_7 |= VAR_1;
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (VAR_5->buttons_held & (1 << VAR_6))
   VAR_7 |= VAR_4[VAR_6];
 }
 FUNC_0(VAR_5->jack, VAR_7, VAR_2);
}
