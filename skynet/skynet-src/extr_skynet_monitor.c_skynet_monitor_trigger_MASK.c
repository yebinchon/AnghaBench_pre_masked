
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct skynet_monitor {int version; void* destination; void* source; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct skynet_monitor *VAR_0, uint32_t VAR_1, uint32_t VAR_2) {
 VAR_0->source = VAR_1;
 VAR_0->destination = VAR_2;
 FUNC_0(&VAR_0->version);
}
