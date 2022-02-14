
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat_session {int stat_mutex; } ;
struct seq_file {struct stat_session* private; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct stat_session *VAR_2 = VAR_0->private;
 FUNC_0(&VAR_2->stat_mutex);
}
