
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int length; int id; int type; scalar_t__ checksum; int leader; } ;
typedef TYPE_1__ kd_packet_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*,int *,int const) ;
 scalar_t__ FUNC_1 (int const*,int const) ;

int FUNC_2(void *VAR_5, const uint32_t VAR_6, const uint32_t VAR_7, const uint8_t *VAR_8,
   const int VAR_9, const uint8_t *VAR_10, const uint32_t VAR_11) {
 kd_packet_t VAR_12;

 if (VAR_9 + VAR_11 > VAR_3) {
  return VAR_1;
 }




 VAR_12.leader = VAR_4;
 VAR_12.length = VAR_9 + VAR_11;
 VAR_12.checksum = FUNC_1 (VAR_8, VAR_9) +
         FUNC_1 (VAR_10, VAR_11);
 VAR_12.id = VAR_7;
 VAR_12.type = VAR_6;

 if (FUNC_0 (VAR_5, (uint8_t *) &VAR_12, sizeof(kd_packet_t)) < 0) {
  return VAR_0;
 }

 if (FUNC_0 (VAR_5, (uint8_t *) VAR_8, VAR_9) < 0) {
  return VAR_0;
 }

 if (VAR_10 && FUNC_0 (VAR_5, (uint8_t *) VAR_10, VAR_11) < 0) {
  return VAR_0;
 }

 if (FUNC_0 (VAR_5, (uint8_t *) "\xAA", 1) < 0) {
  return VAR_0;
 }

 return VAR_2;
}
