
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int type; int id; scalar_t__ checksum; scalar_t__ length; int leader; } ;
typedef TYPE_1__ kd_packet_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*,int *,int) ;

int FUNC_1(void *VAR_3, const uint32_t VAR_4, const uint32_t VAR_5) {
 kd_packet_t VAR_6;

 VAR_6.leader = VAR_2;
 VAR_6.length = 0;
 VAR_6.checksum = 0;
 VAR_6.id = VAR_5;
 VAR_6.type = VAR_4;

 if (FUNC_0 (VAR_3, (uint8_t *) &VAR_6, sizeof(kd_packet_t)) < 0) {
  return VAR_0;
 }

 return VAR_1;
}
