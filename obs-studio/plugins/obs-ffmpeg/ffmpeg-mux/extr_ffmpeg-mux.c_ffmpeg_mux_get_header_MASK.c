
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffm_packet_info {int size; int member_0; } ;
typedef struct ffm_packet_info uint8_t ;
struct ffmpeg_mux {int dummy; } ;
typedef int info ;


 int FUNC_0 (struct ffmpeg_mux*,struct ffm_packet_info*,struct ffm_packet_info*) ;
 int FUNC_1 (struct ffm_packet_info*) ;
 struct ffm_packet_info* FUNC_2 (int) ;
 int FUNC_3 (struct ffm_packet_info*,int) ;

__attribute__((used)) static bool FUNC_4(struct ffmpeg_mux *VAR_0)
{
 struct ffm_packet_info VAR_1 = {0};

 bool VAR_2 = FUNC_3(&VAR_1, sizeof(VAR_1)) == sizeof(VAR_1);
 if (VAR_2) {
  uint8_t *VAR_3 = FUNC_2(VAR_1.size);

  if (FUNC_3(VAR_3, VAR_1.size) == VAR_1.size) {
   FUNC_0(VAR_0, VAR_3, &VAR_1);
  } else {
   VAR_2 = 0;
  }

  FUNC_1(VAR_3);
 }

 return VAR_2;
}
