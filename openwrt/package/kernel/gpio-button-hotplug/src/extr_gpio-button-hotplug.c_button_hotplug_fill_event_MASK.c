
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bh_event {char* action; char* name; scalar_t__ type; char* seen; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bh_event*,int ,char*,char*) ;
 char* FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct bh_event *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, 0, "HOME=%s", "/");
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_1, 0, "PATH=%s",
     "/sbin:/bin:/usr/sbin:/usr/bin");
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_1, 0, "SUBSYSTEM=%s", "button");
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_1, 0, "ACTION=%s", VAR_1->action);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_1, 0, "BUTTON=%s", VAR_1->name);
 if (VAR_2)
  return VAR_2;

 if (VAR_1->type == VAR_0) {
  VAR_2 = FUNC_0(VAR_1, 0, "TYPE=%s", "switch");
  if (VAR_2)
   return VAR_2;
 }

 VAR_2 = FUNC_0(VAR_1, 0, "SEEN=%ld", VAR_1->seen);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_1, 0, "SEQNUM=%llu", FUNC_1());

 return VAR_2;
}
