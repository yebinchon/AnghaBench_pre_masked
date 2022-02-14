
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_output {int received_video; int received_audio; } ;
struct encoder_packet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct encoder_packet* FUNC_0 (struct obs_output*,int ,size_t) ;

__attribute__((used)) static bool FUNC_1(struct obs_output *VAR_2,
     struct encoder_packet **VAR_3,
     struct encoder_packet **VAR_4,
     size_t VAR_5)
{
 *VAR_3 = FUNC_0(VAR_2, VAR_1, 0);
 if (!*VAR_3)
  VAR_2->received_video = 0;

 for (size_t VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_4[VAR_6] = FUNC_0(VAR_2, VAR_0, VAR_6);
  if (!VAR_4[VAR_6]) {
   VAR_2->received_audio = 0;
   return 0;
  }
 }

 if (!*VAR_3) {
  return 0;
 }

 return 1;
}
