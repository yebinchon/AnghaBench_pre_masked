
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct amdtp_stream {int data_block_quadlets; struct amdtp_am824* protocol; } ;
struct amdtp_am824 {size_t midi_position; int ** midi; } ;
typedef int __be32 ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct amdtp_stream*,unsigned int) ;
 scalar_t__ FUNC_1 (struct amdtp_stream*,unsigned int) ;
 int FUNC_2 (int *,int*,int) ;

__attribute__((used)) static void FUNC_3(struct amdtp_stream *VAR_1, __be32 *VAR_2,
   unsigned int VAR_3, unsigned int VAR_4)
{
 struct amdtp_am824 *VAR_5 = VAR_1->protocol;
 unsigned int VAR_6, VAR_7;
 u8 *VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_8 = (u8 *)&VAR_2[VAR_5->midi_position];

  VAR_7 = (VAR_4 + VAR_6) % 8;
  if (VAR_6 < VAR_0 &&
      FUNC_1(VAR_1, VAR_7) &&
      VAR_5->midi[VAR_7] != ((void*)0) &&
      FUNC_2(VAR_5->midi[VAR_7], &VAR_8[1], 1) == 1) {
   FUNC_0(VAR_1, VAR_7);
   VAR_8[0] = 0x81;
  } else {
   VAR_8[0] = 0x80;
   VAR_8[1] = 0;
  }
  VAR_8[2] = 0;
  VAR_8[3] = 0;

  VAR_2 += VAR_1->data_block_quadlets;
 }
}
