
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long dump_size; void* print_limit; void* min_percent; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char const*,unsigned long*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,TYPE_1__*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*,char*) ;
 void* FUNC_8 (char const*,char**) ;

int FUNC_9(const char *VAR_1, const char *VAR_2)
{
 char *VAR_3;

 if (!FUNC_7(VAR_1, "call-graph."))
  return 0;
 VAR_1 += sizeof("call-graph.") - 1;

 if (!FUNC_6(VAR_1, "record-mode"))
  return FUNC_3(VAR_2, &VAR_0);
 if (!FUNC_6(VAR_1, "dump-size")) {
  unsigned long VAR_4 = 0;
  int VAR_5;

  VAR_5 = FUNC_0(VAR_2, &VAR_4);
  VAR_0.dump_size = VAR_4;

  return VAR_5;
 }
 if (!FUNC_6(VAR_1, "print-type")){
  int VAR_6;
  VAR_6 = FUNC_1(VAR_2);
  if (VAR_6 == -1)
   FUNC_5("Invalid callchain mode: %s\n", VAR_2);
  return VAR_6;
 }
 if (!FUNC_6(VAR_1, "order")){
  int VAR_7;
  VAR_7 = FUNC_2(VAR_2);
  if (VAR_7 == -1)
   FUNC_5("Invalid callchain order: %s\n", VAR_2);
  return VAR_7;
 }
 if (!FUNC_6(VAR_1, "sort-key")){
  int VAR_8;
  VAR_8 = FUNC_4(VAR_2);
  if (VAR_8 == -1)
   FUNC_5("Invalid callchain sort key: %s\n", VAR_2);
  return VAR_8;
 }
 if (!FUNC_6(VAR_1, "threshold")) {
  VAR_0.min_percent = FUNC_8(VAR_2, &VAR_3);
  if (VAR_2 == VAR_3) {
   FUNC_5("Invalid callchain threshold: %s\n", VAR_2);
   return -1;
  }
 }
 if (!FUNC_6(VAR_1, "print-limit")) {
  VAR_0.print_limit = FUNC_8(VAR_2, &VAR_3);
  if (VAR_2 == VAR_3) {
   FUNC_5("Invalid callchain print limit: %s\n", VAR_2);
   return -1;
  }
 }

 return 0;
}
