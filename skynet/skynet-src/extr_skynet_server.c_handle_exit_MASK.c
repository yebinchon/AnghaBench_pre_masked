
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct skynet_context {scalar_t__ handle; } ;
struct TYPE_2__ {scalar_t__ monitor_exit; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct skynet_context*,char*,...) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct skynet_context*,scalar_t__,scalar_t__,int ,int ,int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct skynet_context * VAR_2, uint32_t VAR_3) {
 if (VAR_3 == 0) {
  VAR_3 = VAR_2->handle;
  FUNC_0(VAR_2, "KILL self");
 } else {
  FUNC_0(VAR_2, "KILL :%0x", VAR_3);
 }
 if (VAR_0.monitor_exit) {
  FUNC_2(VAR_2, VAR_3, VAR_0.monitor_exit, VAR_1, 0, ((void*)0), 0);
 }
 FUNC_1(VAR_3);
}
