
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * sample; } ;
struct record {TYPE_1__ tool; int timestamp_boundary; scalar_t__ buildid_all; int data; struct perf_session* session; } ;
struct perf_session {int dummy; } ;
struct TYPE_4__ {int ignore_vmlinux_buildid; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct perf_session*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static int FUNC_2(struct record *VAR_1)
{
 struct perf_session *VAR_2 = VAR_1->session;

 if (FUNC_0(&VAR_1->data) == 0)
  return 0;
 VAR_0.ignore_vmlinux_buildid = 1;







 if (VAR_1->buildid_all && !VAR_1->timestamp_boundary)
  VAR_1->tool.sample = ((void*)0);

 return FUNC_1(VAR_2);
}
