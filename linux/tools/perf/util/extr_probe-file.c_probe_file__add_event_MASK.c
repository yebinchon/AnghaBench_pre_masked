
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_trace_event {int dummy; } ;
typedef int sbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int,char*,int) ;
 scalar_t__ FUNC_4 (char*) ;
 char* FUNC_5 (struct probe_trace_event*) ;
 int FUNC_6 (int,char*,scalar_t__) ;

int FUNC_7(int VAR_4, struct probe_trace_event *VAR_5)
{
 int VAR_6 = 0;
 char *VAR_7 = FUNC_5(VAR_5);
 char VAR_8[VAR_1];

 if (!VAR_7) {
  FUNC_1("Failed to synthesize probe trace event.\n");
  return -VAR_0;
 }

 FUNC_1("Writing event: %s\n", VAR_7);
 if (!VAR_3) {
  if (FUNC_6(VAR_4, VAR_7, FUNC_4(VAR_7)) < (int)FUNC_4(VAR_7)) {
   VAR_6 = -VAR_2;
   FUNC_2("Failed to write event: %s\n",
       FUNC_3(VAR_2, VAR_8, sizeof(VAR_8)));
  }
 }
 FUNC_0(VAR_7);

 return VAR_6;
}
