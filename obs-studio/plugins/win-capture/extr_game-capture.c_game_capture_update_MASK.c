
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct game_capture_config {scalar_t__ scale_cx; scalar_t__ scale_cy; scalar_t__ mode; int priority; int executable; int class; int title; int hook_rate; scalar_t__ force_scaling; } ;
struct game_capture {int error_acquiring; int activate_hook; int retry_interval; int wait_for_target_startup; int initial_config; struct game_capture_config config; int priority; int executable; int class; int title; } ;
typedef int obs_data_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct game_capture_config*,struct game_capture_config*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct game_capture_config*) ;
 int FUNC_4 (struct game_capture_config*,int *,char const*) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (int *,int ) ;
 int FUNC_7 (struct game_capture*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void *VAR_4, obs_data_t *VAR_5)
{
 struct game_capture *VAR_6 = VAR_4;
 struct game_capture_config VAR_7;
 bool VAR_8 = 0;
 const char *VAR_9 =
  FUNC_6(VAR_5, VAR_3);

 FUNC_4(&VAR_7, VAR_5, VAR_9);
 VAR_8 = FUNC_0(&VAR_7, &VAR_6->config);

 if (VAR_7.force_scaling && (VAR_7.scale_cx == 0 || VAR_7.scale_cy == 0)) {
  VAR_6->error_acquiring = 1;
  FUNC_8("error acquiring, scale is bad");
 } else {
  VAR_6->error_acquiring = 0;
 }

 if (VAR_7.mode == VAR_0 &&
     VAR_6->config.mode != VAR_0) {
  VAR_6->activate_hook = 0;
 } else {
  VAR_6->activate_hook = !!VAR_9 && !!*VAR_9;
 }

 FUNC_3(&VAR_6->config);
 VAR_6->config = VAR_7;
 VAR_6->retry_interval = VAR_2 *
        FUNC_5(VAR_6->config.hook_rate);
 VAR_6->wait_for_target_startup = 0;

 FUNC_2(&VAR_6->title);
 FUNC_2(&VAR_6->class);
 FUNC_2(&VAR_6->executable);

 if (VAR_7.mode == VAR_1) {
  FUNC_1(&VAR_6->title, VAR_6->config.title);
  FUNC_1(&VAR_6->class, VAR_6->config.class);
  FUNC_1(&VAR_6->executable, VAR_6->config.executable);
  VAR_6->priority = VAR_6->config.priority;
 }

 if (!VAR_6->initial_config) {
  if (VAR_8) {
   FUNC_7(VAR_6);
  }
 } else {
  VAR_6->initial_config = 0;
 }
}
