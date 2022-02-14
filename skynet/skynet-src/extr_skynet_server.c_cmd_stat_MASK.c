
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct skynet_context {char* result; int endless; double message_count; scalar_t__ cpu_start; scalar_t__ profile; scalar_t__ cpu_cost; int queue; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,char*,double) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static const char *
FUNC_5(struct skynet_context * VAR_0, const char * VAR_1) {
 if (FUNC_3(VAR_1, "mqlen") == 0) {
  int VAR_2 = FUNC_0(VAR_0->queue);
  FUNC_2(VAR_0->result, "%d", VAR_2);
 } else if (FUNC_3(VAR_1, "endless") == 0) {
  if (VAR_0->endless) {
   FUNC_4(VAR_0->result, "1");
   VAR_0->endless = 0;
  } else {
   FUNC_4(VAR_0->result, "0");
  }
 } else if (FUNC_3(VAR_1, "cpu") == 0) {
  double VAR_3 = (double)VAR_0->cpu_cost / 1000000.0;
  FUNC_2(VAR_0->result, "%lf", VAR_3);
 } else if (FUNC_3(VAR_1, "time") == 0) {
  if (VAR_0->profile) {
   uint64_t VAR_4 = FUNC_1() - VAR_0->cpu_start;
   double VAR_5 = (double)VAR_4 / 1000000.0;
   FUNC_2(VAR_0->result, "%lf", VAR_5);
  } else {
   FUNC_4(VAR_0->result, "0");
  }
 } else if (FUNC_3(VAR_1, "message") == 0) {
  FUNC_2(VAR_0->result, "%d", VAR_0->message_count);
 } else {
  VAR_0->result[0] = '\0';
 }
 return VAR_0->result;
}
