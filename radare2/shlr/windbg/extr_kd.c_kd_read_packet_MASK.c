
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ leader; int length; scalar_t__ checksum; int id; } ;
typedef TYPE_1__ kd_packet_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (void*,int*,int) ;
 scalar_t__ FUNC_3 (int*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (void*,int ,int) ;
 int* FUNC_6 (int) ;
 int FUNC_7 (int*,TYPE_1__*,int) ;
 int FUNC_8 (char*) ;

int FUNC_9(void *VAR_5, kd_packet_t **VAR_6) {
 kd_packet_t VAR_7;
 uint8_t *VAR_8;

 *VAR_6 = ((void*)0);

 if (FUNC_2 (VAR_5, (uint8_t *) &VAR_7, sizeof (kd_packet_t)) <= 0) {
  return VAR_0;
 }

 if (!FUNC_4 (&VAR_7)) {
  FUNC_0 ("invalid leader %08x\n", VAR_7.leader);
  return VAR_1;
 }

 VAR_8 = FUNC_6 (sizeof (kd_packet_t) + VAR_7.length);
 if (!VAR_8) {
  return VAR_0;
 }
 FUNC_7 (VAR_8, &VAR_7, sizeof(kd_packet_t));

 if (VAR_7.length) {
  FUNC_2 (VAR_5, (uint8_t *) VAR_8 + sizeof(kd_packet_t), VAR_7.length);
 }

 if (VAR_7.checksum != FUNC_3 (VAR_8 + sizeof(kd_packet_t), VAR_7.length)) {
  FUNC_0 ("Checksum mismatch!\n");
  FUNC_1 (VAR_8);
  return VAR_1;
 }

 if (VAR_7.leader == VAR_3) {
  uint8_t VAR_9;
  FUNC_2 (VAR_5, (uint8_t *) &VAR_9, 1);

  if (VAR_9 != 0xAA) {
   FUNC_8 ("Missing trailer 0xAA\n");
   FUNC_1 (VAR_8);
   return VAR_1;
  }

  FUNC_5 (VAR_5, VAR_4, ((kd_packet_t *) VAR_8)->id & ~(0x800));
 }

 *VAR_6 = (kd_packet_t *) VAR_8;

 return VAR_2;
}
