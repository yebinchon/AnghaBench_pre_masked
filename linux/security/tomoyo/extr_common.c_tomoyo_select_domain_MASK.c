
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int print_this_domain_only; int eof; int * domain; } ;
struct TYPE_4__ {struct tomoyo_domain_info* domain; } ;
struct tomoyo_io_buffer {TYPE_3__ r; int read_buf; TYPE_1__ w; } ;
struct tomoyo_domain_info {scalar_t__ is_deleted; int list; } ;
struct task_struct {int dummy; } ;
struct TYPE_5__ {struct tomoyo_domain_info* domain_info; } ;


 struct task_struct* FUNC_0 (unsigned int,int *) ;
 struct task_struct* FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char const*,char*,unsigned int*) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;
 scalar_t__ FUNC_7 (char const*) ;
 struct tomoyo_domain_info* FUNC_8 (char const*) ;
 struct tomoyo_domain_info* FUNC_9 (unsigned int) ;
 int FUNC_10 (struct tomoyo_io_buffer*,char*,...) ;
 TYPE_2__* FUNC_11 (struct task_struct*) ;

__attribute__((used)) static bool FUNC_12(struct tomoyo_io_buffer *VAR_1,
     const char *VAR_2)
{
 unsigned int VAR_3;
 struct tomoyo_domain_info *VAR_4 = ((void*)0);
 bool VAR_5 = 0;

 if (FUNC_6(VAR_2, "select ", 7))
  return 0;
 VAR_2 += 7;
 if (FUNC_5(VAR_2, "pid=%u", &VAR_3) == 1 ||
     (VAR_5 = 1, FUNC_5(VAR_2, "global-pid=%u", &VAR_3) == 1)) {
  struct task_struct *VAR_6;

  FUNC_3();
  if (VAR_5)
   VAR_6 = FUNC_0(VAR_3, &VAR_0);
  else
   VAR_6 = FUNC_1(VAR_3);
  if (VAR_6)
   VAR_4 = FUNC_11(VAR_6)->domain_info;
  FUNC_4();
 } else if (!FUNC_6(VAR_2, "domain=", 7)) {
  if (FUNC_7(VAR_2 + 7))
   VAR_4 = FUNC_8(VAR_2 + 7);
 } else if (FUNC_5(VAR_2, "Q=%u", &VAR_3) == 1) {
  VAR_4 = FUNC_9(VAR_3);
 } else
  return 0;
 VAR_1->w.domain = VAR_4;

 if (!VAR_1->read_buf)
  return 1;
 FUNC_2(&VAR_1->r, 0, sizeof(VAR_1->r));
 VAR_1->r.print_this_domain_only = 1;
 if (VAR_4)
  VAR_1->r.domain = &VAR_4->list;
 else
  VAR_1->r.eof = 1;
 FUNC_10(VAR_1, "# select %s\n", VAR_2);
 if (VAR_4 && VAR_4->is_deleted)
  FUNC_10(VAR_1, "# This is a deleted domain.\n");
 return 1;
}
