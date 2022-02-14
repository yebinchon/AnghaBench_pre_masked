
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct duplicator_capture {int monitor; float reset_timeout; scalar_t__ rot; scalar_t__ y; scalar_t__ x; scalar_t__ height; scalar_t__ width; int * duplicator; int capture_cursor; } ;
typedef int obs_data_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static inline void FUNC_5(struct duplicator_capture *VAR_0,
       obs_data_t *VAR_1)
{
 VAR_0->monitor = (int)FUNC_2(VAR_1, "monitor");
 VAR_0->capture_cursor = FUNC_1(VAR_1, "capture_cursor");

 FUNC_3();

 FUNC_0(VAR_0->duplicator);
 VAR_0->duplicator = ((void*)0);
 VAR_0->width = 0;
 VAR_0->height = 0;
 VAR_0->x = 0;
 VAR_0->y = 0;
 VAR_0->rot = 0;
 VAR_0->reset_timeout = 0.0f;

 FUNC_4();
}
