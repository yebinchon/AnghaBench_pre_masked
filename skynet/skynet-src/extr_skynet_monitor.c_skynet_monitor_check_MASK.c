
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_monitor {scalar_t__ version; scalar_t__ check_version; scalar_t__ destination; int source; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*,int ,scalar_t__,scalar_t__) ;

void
FUNC_2(struct skynet_monitor *VAR_0) {
 if (VAR_0->version == VAR_0->check_version) {
  if (VAR_0->destination) {
   FUNC_0(VAR_0->destination);
   FUNC_1(((void*)0), "A message from [ :%08x ] to [ :%08x ] maybe in an endless loop (version = %d)", VAR_0->source , VAR_0->destination, VAR_0->version);
  }
 } else {
  VAR_0->check_version = VAR_0->version;
 }
}
