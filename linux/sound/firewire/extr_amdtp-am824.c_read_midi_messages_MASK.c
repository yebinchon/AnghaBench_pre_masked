
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct amdtp_stream {int flags; int data_block_quadlets; struct amdtp_am824* protocol; } ;
struct amdtp_am824 {size_t midi_position; scalar_t__* midi; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int*,int) ;

__attribute__((used)) static void FUNC_1(struct amdtp_stream *VAR_1, __be32 *VAR_2,
   unsigned int VAR_3, unsigned int VAR_4)
{
 struct amdtp_am824 *VAR_5 = VAR_1->protocol;
 int VAR_6;
 u8 *VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  unsigned int VAR_9 = VAR_8;

  if (!(VAR_1->flags & VAR_0))
   VAR_9 += VAR_4;
  VAR_9 %= 8;
  VAR_7 = (u8 *)&VAR_2[VAR_5->midi_position];

  VAR_6 = VAR_7[0] - 0x80;
  if ((1 <= VAR_6) && (VAR_6 <= 3) && (VAR_5->midi[VAR_9]))
   FUNC_0(VAR_5->midi[VAR_9], VAR_7 + 1, VAR_6);

  VAR_2 += VAR_1->data_block_quadlets;
 }
}
