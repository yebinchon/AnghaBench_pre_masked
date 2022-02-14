
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct game_capture {int thread_id; int process_id; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct game_capture *VAR_0)
{
 return FUNC_0(VAR_0->process_id, VAR_0->thread_id);
}
