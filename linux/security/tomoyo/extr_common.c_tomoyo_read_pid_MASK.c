
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int eof; scalar_t__ w_pos; } ;
struct tomoyo_io_buffer {char* write_buf; TYPE_1__ r; } ;
struct tomoyo_domain_info {TYPE_2__* domainname; int profile; } ;
struct task_struct {int dummy; } ;
struct TYPE_6__ {struct tomoyo_domain_info* domain_info; } ;
struct TYPE_5__ {int name; } ;


 struct task_struct* FUNC_0 (unsigned int,int *) ;
 struct task_struct* FUNC_1 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*,int,unsigned int*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct tomoyo_io_buffer*,char*,unsigned int,int ) ;
 int FUNC_6 (struct tomoyo_io_buffer*,int ) ;
 scalar_t__ FUNC_7 (char**,char*) ;
 TYPE_3__* FUNC_8 (struct task_struct*) ;

__attribute__((used)) static void FUNC_9(struct tomoyo_io_buffer *VAR_1)
{
 char *VAR_2 = VAR_1->write_buf;
 bool VAR_3 = 0;
 unsigned int VAR_4;
 struct task_struct *VAR_5;
 struct tomoyo_domain_info *VAR_6 = ((void*)0);


 if (!VAR_2) {
  VAR_1->r.eof = 1;
  return;
 }
 if (VAR_1->r.w_pos || VAR_1->r.eof)
  return;
 VAR_1->r.eof = 1;
 if (FUNC_7(&VAR_2, "global-pid "))
  VAR_3 = 1;
 if (FUNC_2(VAR_2, 10, &VAR_4))
  return;
 FUNC_3();
 if (VAR_3)
  VAR_5 = FUNC_0(VAR_4, &VAR_0);
 else
  VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  VAR_6 = FUNC_8(VAR_5)->domain_info;
 FUNC_4();
 if (!VAR_6)
  return;
 FUNC_5(VAR_1, "%u %u ", VAR_4, VAR_6->profile);
 FUNC_6(VAR_1, VAR_6->domainname->name);
}
