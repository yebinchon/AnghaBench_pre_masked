
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ksym {int name; } ;
struct ipcount {int dummy; } ;
typedef scalar_t__ __u64 ;
typedef int __u32 ;
struct TYPE_3__ {int count; scalar_t__ ip; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int,scalar_t__*,int *) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 struct ksym* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_1__*,int,int,int ) ;

__attribute__((used)) static void FUNC_5(int VAR_4)
{
 struct ksym *VAR_5;
 __u64 VAR_6, VAR_7;
 __u32 VAR_8;
 int VAR_9, VAR_10;

 FUNC_3("%-19s %-32s %s\n", "ADDR", "KSYM", "COUNT");


 VAR_6 = 0, VAR_9 = 0;
 while (FUNC_0(VAR_4, &VAR_6, &VAR_7) == 0) {
  FUNC_1(VAR_4, &VAR_7, &VAR_8);
  VAR_3[VAR_9].ip = VAR_7;
  VAR_3[VAR_9++].count = VAR_8;
  VAR_6 = VAR_7;
 }
 VAR_10 = VAR_9;


 FUNC_4(VAR_3, VAR_10, sizeof(struct ipcount), VAR_2);
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  if (VAR_3[VAR_9].ip > VAR_1) {
   VAR_5 = FUNC_2(VAR_3[VAR_9].ip);
   if (!VAR_5) {
    FUNC_3("ksym not found. Is kallsyms loaded?\n");
    continue;
   }

   FUNC_3("0x%-17llx %-32s %u\n", VAR_3[VAR_9].ip, VAR_5->name,
          VAR_3[VAR_9].count);
  } else {
   FUNC_3("0x%-17llx %-32s %u\n", VAR_3[VAR_9].ip, "(user)",
          VAR_3[VAR_9].count);
  }
 }

 if (VAR_10 == VAR_0) {
  FUNC_3("WARNING: IP hash was full (max %d entries); ", VAR_10);
  FUNC_3("may have dropped samples\n");
 }
}
