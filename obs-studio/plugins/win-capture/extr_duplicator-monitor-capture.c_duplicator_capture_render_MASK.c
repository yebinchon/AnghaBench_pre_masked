
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct duplicator_capture {int rot; scalar_t__ capture_cursor; scalar_t__ width; scalar_t__ height; int duplicator; } ;
typedef int gs_texture_t ;
typedef int gs_effect_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float) ;
 int FUNC_1 (struct duplicator_capture*) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (float,float,float,int ) ;
 int FUNC_7 (float,float,float) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_10(void *VAR_2, gs_effect_t *VAR_3)
{
 struct duplicator_capture *VAR_4 = VAR_2;
 gs_texture_t *VAR_5;
 int VAR_6;

 if (!VAR_4->duplicator)
  return;

 VAR_5 = FUNC_2(VAR_4->duplicator);
 if (!VAR_5)
  return;

 VAR_3 = FUNC_8(VAR_1);

 VAR_6 = VAR_4->rot;

 while (FUNC_3(VAR_3, "Draw")) {
  if (VAR_6 != 0) {
   float VAR_7 = 0.0f;
   float VAR_8 = 0.0f;

   switch (VAR_6) {
   case 90:
    VAR_7 = (float)VAR_4->height;
    break;
   case 180:
    VAR_7 = (float)VAR_4->width;
    VAR_8 = (float)VAR_4->height;
    break;
   case 270:
    VAR_8 = (float)VAR_4->width;
    break;
   }

   FUNC_5();
   FUNC_7(VAR_7, VAR_8, 0.0f);
   FUNC_6(0.0f, 0.0f, 1.0f, FUNC_0((float)VAR_6));
  }

  FUNC_9(VAR_5, 0, 0, 0, 0, 0);

  if (VAR_6 != 0)
   FUNC_4();
 }

 if (VAR_4->capture_cursor) {
  VAR_3 = FUNC_8(VAR_0);

  while (FUNC_3(VAR_3, "Draw")) {
   FUNC_1(VAR_4);
  }
 }
}
