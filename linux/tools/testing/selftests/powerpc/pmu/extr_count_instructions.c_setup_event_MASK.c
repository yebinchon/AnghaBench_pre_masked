
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int disabled; int exclude_kernel; int exclude_hv; int exclude_idle; } ;
struct event {TYPE_1__ attr; } ;


 int VAR_0 ;
 int FUNC_0 (struct event*,int ,int ,char*) ;

__attribute__((used)) static void FUNC_1(struct event *VAR_1, u64 VAR_2, char *VAR_3)
{
 FUNC_0(VAR_1, VAR_2, VAR_0, VAR_3);

 VAR_1->attr.disabled = 1;
 VAR_1->attr.exclude_kernel = 1;
 VAR_1->attr.exclude_hv = 1;
 VAR_1->attr.exclude_idle = 1;
}
