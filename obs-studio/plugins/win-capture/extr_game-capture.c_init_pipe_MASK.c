
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct game_capture {int pipe; int process_id; } ;


 char* VAR_0 ;
 int FUNC_0 (int *,char*,int ,struct game_capture*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,char*,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static inline bool FUNC_3(struct game_capture *VAR_2)
{
 char VAR_3[64];
 FUNC_1(VAR_3, "%s%lu", VAR_0, VAR_2->process_id);

 if (!FUNC_0(&VAR_2->pipe, VAR_3, VAR_1, VAR_2)) {
  FUNC_2("init_pipe: failed to start pipe");
  return 0;
 }

 return 1;
}
