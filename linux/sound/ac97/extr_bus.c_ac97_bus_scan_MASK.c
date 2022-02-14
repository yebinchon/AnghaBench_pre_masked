
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97_controller {int slots_available; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ac97_controller*,int,unsigned int) ;
 scalar_t__ FUNC_2 (struct ac97_controller*,int) ;
 unsigned int FUNC_3 (struct ac97_controller*,int) ;

__attribute__((used)) static int FUNC_4(struct ac97_controller *VAR_1)
{
 int VAR_2, VAR_3;
 unsigned int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (FUNC_2(VAR_1, VAR_3))
   continue;
  if (!(VAR_1->slots_available & FUNC_0(VAR_3)))
   continue;
  VAR_4 = FUNC_3(VAR_1, VAR_3);
  if (!VAR_4)
   continue;

  VAR_2 = FUNC_1(VAR_1, VAR_3, VAR_4);
  if (VAR_2 < 0)
   return VAR_2;
 }
 return 0;
}
