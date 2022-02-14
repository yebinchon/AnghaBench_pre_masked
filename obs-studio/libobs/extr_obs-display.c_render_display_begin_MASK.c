
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vec4 {float w; } ;
struct obs_display {int background_color; int swap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int,struct vec4*,float,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (float,float,float,float,float,float) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct vec4*,int ) ;

__attribute__((used)) static inline void FUNC_9(struct obs_display *VAR_4,
     uint32_t VAR_5, uint32_t VAR_6,
     bool VAR_7)
{
 struct vec4 VAR_8;

 FUNC_3(VAR_4->swap);

 if (VAR_7)
  FUNC_5(VAR_5, VAR_6);

 FUNC_0();

 FUNC_8(&VAR_8, VAR_4->background_color);
 VAR_8.w = 1.0f;

 FUNC_1(VAR_0 | VAR_1 | VAR_2,
   &VAR_8, 1.0f, 0);

 FUNC_2(0);

 FUNC_6(VAR_3);

 FUNC_4(0.0f, (float)VAR_5, 0.0f, (float)VAR_6, -100.0f, 100.0f);
 FUNC_7(0, 0, VAR_5, VAR_6);
}
