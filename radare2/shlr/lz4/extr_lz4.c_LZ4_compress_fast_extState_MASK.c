
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int internal_donotuse; } ;
typedef int LZ4_stream_t_internal ;
typedef TYPE_1__ LZ4_stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char const*,char*,int,int,int ,int ,int ,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_3(void* VAR_9, const char* VAR_10, char* VAR_11, int VAR_12, int VAR_13, int VAR_14) {
 LZ4_stream_t_internal* VAR_15 = &((LZ4_stream_t*)VAR_9)->internal_donotuse;
 FUNC_2 ((LZ4_stream_t*)VAR_9);
 if (VAR_14 < 1) {
  VAR_14 = VAR_0;
 }
 if (VAR_13 >= FUNC_0(VAR_12)) {
  if (VAR_12 < VAR_1) {
   return FUNC_1(VAR_15, VAR_10, VAR_11, VAR_12, 0, VAR_8, VAR_3, VAR_6, VAR_7, VAR_14);
  }
  return FUNC_1(VAR_15, VAR_10, VAR_11, VAR_12, 0, VAR_8, (sizeof(void*)==8) ? VAR_4 : VAR_2, VAR_6, VAR_7, VAR_14);
 }
 if (VAR_12 < VAR_1) {
  return FUNC_1(VAR_15, VAR_10, VAR_11, VAR_12, VAR_13, VAR_5, VAR_3, VAR_6, VAR_7, VAR_14);
 }
 return FUNC_1(VAR_15, VAR_10, VAR_11, VAR_12, VAR_13, VAR_5, (sizeof(void*)==8) ? VAR_4 : VAR_2, VAR_6, VAR_7, VAR_14);
}
