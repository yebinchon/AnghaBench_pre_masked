
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct skynet_context {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct skynet_context*,char*,int) ;
 scalar_t__ FUNC_3 () ;

void
FUNC_4(struct skynet_context * VAR_0, FILE *VAR_1, uint32_t VAR_2) {
 FUNC_2(VAR_0, "Close log file :%08x", VAR_2);
 FUNC_1(VAR_1, "close time: %u\n", (uint32_t)FUNC_3());
 FUNC_0(VAR_1);
}
