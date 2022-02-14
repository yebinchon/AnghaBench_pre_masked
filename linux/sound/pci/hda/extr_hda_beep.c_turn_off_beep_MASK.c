
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_beep {scalar_t__ playing; int beep_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct hda_beep*,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_beep *VAR_0)
{
 FUNC_0(&VAR_0->beep_work);
 if (VAR_0->playing) {

  FUNC_1(VAR_0, 0);
 }
}
