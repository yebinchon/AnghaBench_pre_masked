
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_data {scalar_t__ handle; size_t allocated; } ;


 int VAR_0 ;
 struct mem_data* VAR_1 ;
 int FUNC_0 (int *,char*,...) ;

void
FUNC_1() {
 int VAR_2;
 size_t VAR_3 = 0;
 FUNC_0(((void*)0), "dump all service mem:");
 for(VAR_2=0; VAR_2<VAR_0; VAR_2++) {
  struct mem_data* VAR_4 = &VAR_1[VAR_2];
  if(VAR_4->handle != 0 && VAR_4->allocated != 0) {
   VAR_3 += VAR_4->allocated;
   FUNC_0(((void*)0), ":%08x -> %zdkb %db", VAR_4->handle, VAR_4->allocated >> 10, (int)(VAR_4->allocated % 1024));
  }
 }
 FUNC_0(((void*)0), "+total: %zdkb",VAR_3 >> 10);
}
