
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {scalar_t__ state; int buffer; } ;
struct tep_record {void* data; } ;
struct tep_handle {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_0 (struct tep_handle*,void*) ;
 int FUNC_1 (struct tep_handle*,void*) ;
 int FUNC_2 (struct tep_handle*,void*) ;
 unsigned int FUNC_3 (struct tep_handle*,void*) ;
 int FUNC_4 (struct trace_seq*) ;
 int FUNC_5 (struct trace_seq*) ;
 int FUNC_6 (struct trace_seq*,char*,...) ;
 int FUNC_7 (struct trace_seq*,int ) ;
 int FUNC_8 (struct trace_seq*) ;

__attribute__((used)) static void FUNC_9(struct tep_handle *VAR_6, struct trace_seq *VAR_7,
    char *VAR_8, struct tep_record *VAR_9)
{
 static int VAR_10 = 1;
 static int VAR_11 = 1;
 static int VAR_12;
 static int VAR_13;
 unsigned int VAR_14;
 struct trace_seq VAR_15;
 unsigned int VAR_16;
 int VAR_17 = 0;
 int VAR_18 = 0;
 int VAR_19;
 int VAR_20;
 void *VAR_21 = VAR_9->data;

 FUNC_5(&VAR_15);
 VAR_14 = FUNC_0(VAR_6, VAR_21);
 VAR_16 = FUNC_3(VAR_6, VAR_21);

 if (VAR_12)
  VAR_17 = FUNC_1(VAR_6, VAR_21);
 else if (VAR_10) {
  VAR_17 = FUNC_1(VAR_6, VAR_21);
  if (VAR_17 < 0)
   VAR_10 = 0;
  else
   VAR_12 = 1;
 }


 if (VAR_13)
  VAR_18 = FUNC_2(VAR_6, VAR_21);
 else if (VAR_11) {
  VAR_18 = FUNC_2(VAR_6, VAR_21);
  if (VAR_18 < 0)
   VAR_11 = 0;
  else
   VAR_13 = 1;
 }

 VAR_19 = VAR_14 & VAR_0;
 VAR_20 = VAR_14 & VAR_4;

 FUNC_6(&VAR_15, "%c%c%c",
        (VAR_14 & VAR_2) ? 'd' :
        (VAR_14 & VAR_1) ?
        'X' : '.',
        (VAR_14 & VAR_3) ?
        'N' : '.',
        (VAR_19 && VAR_20) ? 'H' :
        VAR_19 ? 'h' : VAR_20 ? 's' : '.');

 if (VAR_16)
  FUNC_6(&VAR_15, "%x", VAR_16);
 else
  FUNC_6(&VAR_15, ".");

 if (VAR_13) {
  if (VAR_18 < 0)
   FUNC_6(&VAR_15, ".");
  else
   FUNC_6(&VAR_15, "%d", VAR_18);
 }

 if (VAR_12) {
  if (VAR_17 < 0)
   FUNC_6(&VAR_15, ".");
  else
   FUNC_6(&VAR_15, "%d", VAR_17);
 }

 if (VAR_15.state == VAR_5) {
  VAR_7->state = VAR_5;
  return;
 }

 FUNC_8(&VAR_15);
 FUNC_7(VAR_7, VAR_15.buffer);
 FUNC_4(&VAR_15);
 FUNC_8(VAR_7);
}
