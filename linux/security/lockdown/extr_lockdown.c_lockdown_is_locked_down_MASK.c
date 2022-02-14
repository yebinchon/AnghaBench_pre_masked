
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum lockdown_reason { ____Placeholder_lockdown_reason } lockdown_reason ;
struct TYPE_2__ {int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_1 (char*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(enum lockdown_reason VAR_5)
{
 if (FUNC_0(VAR_5 >= VAR_1,
   "Invalid lockdown reason"))
  return -VAR_0;

 if (VAR_3 >= VAR_5) {
  if (VAR_4[VAR_5])
   FUNC_1("Lockdown: %s: %s is restricted; see man kernel_lockdown.7\n",
      VAR_2->comm, VAR_4[VAR_5]);
  return -VAR_0;
 }

 return 0;
}
