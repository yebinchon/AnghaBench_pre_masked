
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hist_entry {TYPE_1__* thread; } ;
struct TYPE_2__ {int tid; } ;


 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (char*,size_t,char*,int ,unsigned int,unsigned int,char*) ;
 char* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct hist_entry *VAR_0, char *VAR_1,
           size_t VAR_2, unsigned int VAR_3)
{
 const char *VAR_4 = FUNC_2(VAR_0->thread);

 VAR_3 = FUNC_0(7U, VAR_3) - 8;
 return FUNC_1(VAR_1, VAR_2, "%7d:%-*.*s", VAR_0->thread->tid,
          VAR_3, VAR_3, VAR_4 ?: "");
}
