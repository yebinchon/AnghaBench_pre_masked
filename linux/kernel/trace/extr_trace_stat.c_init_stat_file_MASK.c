
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat_session {int file; TYPE_1__* ts; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,struct stat_session*,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct stat_session *VAR_4)
{
 if (!VAR_2 && FUNC_1())
  return -VAR_0;

 VAR_4->file = FUNC_0(VAR_4->ts->name, 0644,
         VAR_2,
         VAR_4, &VAR_3);
 if (!VAR_4->file)
  return -VAR_1;
 return 0;
}
