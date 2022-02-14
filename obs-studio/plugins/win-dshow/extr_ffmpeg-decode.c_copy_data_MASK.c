
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ffmpeg_decode {size_t packet_size; int packet_buffer; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,int *,size_t) ;
 int FUNC_2 (int ,int ,size_t) ;

__attribute__((used)) static inline void FUNC_3(struct ffmpeg_decode *VAR_1, uint8_t *VAR_2,
        size_t VAR_3)
{
 size_t VAR_4 = VAR_3 + VAR_0;

 if (VAR_1->packet_size < VAR_4) {
  VAR_1->packet_buffer =
   FUNC_0(VAR_1->packet_buffer, VAR_4);
  VAR_1->packet_size = VAR_4;
 }

 FUNC_2(VAR_1->packet_buffer + VAR_3, 0, VAR_0);
 FUNC_1(VAR_1->packet_buffer, VAR_2, VAR_3);
}
