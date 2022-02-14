
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event {struct tep_handle* pevent; } ;
struct tep_handle {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (struct tep_handle*) ;
 int FUNC_8 (struct tep_handle*) ;
 int FUNC_9 (struct tep_handle*) ;
 int FUNC_10 (struct tep_handle*) ;
 int FUNC_11 (struct tep_handle*) ;
 int FUNC_12 (struct tep_handle*) ;
 int FUNC_13 (struct tep_handle*) ;
 char* FUNC_14 () ;
 int VAR_3 ;
 int FUNC_15 (struct tep_handle*) ;
 int FUNC_16 (struct tep_handle*) ;
 int FUNC_17 (struct tep_handle*,int) ;
 int FUNC_18 (struct tep_handle*,int ) ;
 int FUNC_19 (struct tep_handle*,int) ;
 int FUNC_20 (struct tep_handle*,int) ;
 int FUNC_21 (struct tep_handle*,int) ;
 int VAR_4 ;
 int FUNC_22 (struct trace_event*) ;
 scalar_t__ FUNC_23 (struct trace_event*) ;

ssize_t FUNC_24(int VAR_5, struct trace_event *VAR_6, bool VAR_7)
{
 char VAR_8[VAR_0];
 char VAR_9[] = { 23, 8, 68 };
 char *VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13 = 0;
 ssize_t VAR_14 = -1;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 struct tep_handle *VAR_19 = ((void*)0);
 int VAR_20;

 VAR_3 = VAR_7;
 VAR_2 = VAR_5;

 if (FUNC_2(VAR_8, 3) < 0)
  return -1;
 if (FUNC_4(VAR_8, VAR_9, 3) != 0) {
  FUNC_5("no trace data in the file");
  return -1;
 }

 if (FUNC_2(VAR_8, 7) < 0)
  return -1;
 if (FUNC_4(VAR_8, "tracing", 7) != 0) {
  FUNC_5("not a trace file (missing 'tracing' tag)");
  return -1;
 }

 VAR_10 = FUNC_14();
 if (VAR_10 == ((void*)0))
  return -1;
 if (VAR_11)
  FUNC_6("version = %s\n", VAR_10);

 if (FUNC_2(VAR_8, 1) < 0) {
  FUNC_3(VAR_10);
  return -1;
 }
 VAR_15 = VAR_8[0];
 VAR_16 = FUNC_1();

 if (FUNC_23(VAR_6)) {
  FUNC_5("trace_event__init failed");
  goto out;
 }

 VAR_19 = VAR_6->pevent;

 FUNC_18(VAR_19, VAR_1);
 FUNC_17(VAR_19, VAR_15);
 FUNC_19(VAR_19, VAR_16);

 if (FUNC_2(VAR_8, 1) < 0)
  goto out;
 VAR_17 = VAR_8[0];

 VAR_18 = FUNC_7(VAR_19);
 if (!VAR_18)
  goto out;

 FUNC_20(VAR_19, VAR_17);
 FUNC_21(VAR_19, VAR_18);

 VAR_20 = FUNC_11(VAR_19);
 if (VAR_20)
  goto out;
 VAR_20 = FUNC_9(VAR_19);
 if (VAR_20)
  goto out;
 VAR_20 = FUNC_8(VAR_19);
 if (VAR_20)
  goto out;
 VAR_20 = FUNC_12(VAR_19);
 if (VAR_20)
  goto out;
 VAR_20 = FUNC_10(VAR_19);
 if (VAR_20)
  goto out;
 if (FUNC_0(VAR_10) >= 0.6) {
  VAR_20 = FUNC_13(VAR_19);
  if (VAR_20)
   goto out;
 }

 VAR_14 = VAR_4;
 VAR_3 = 0;

 if (VAR_12) {
  FUNC_15(VAR_19);
 } else if (VAR_13) {
  FUNC_16(VAR_19);
 }

 VAR_19 = ((void*)0);

out:
 if (VAR_19)
  FUNC_22(VAR_6);
 FUNC_3(VAR_10);
 return VAR_14;
}
