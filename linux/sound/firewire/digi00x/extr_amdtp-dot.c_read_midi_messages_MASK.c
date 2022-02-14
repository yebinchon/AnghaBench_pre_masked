
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct amdtp_stream {int data_block_quadlets; struct amdtp_dot* protocol; } ;
struct amdtp_dot {scalar_t__* midi; } ;
typedef int __be32 ;


 unsigned int VAR_0 ;
 int FUNC_0 (scalar_t__,int*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct amdtp_stream *VAR_1, __be32 *VAR_2,
          unsigned int VAR_3)
{
 struct amdtp_dot *VAR_4 = VAR_1->protocol;
 unsigned int VAR_5, VAR_6, VAR_7;
 u8 *VAR_8;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_8 = (u8 *)&VAR_2[0];

  VAR_7 = VAR_8[3] & 0x0f;
  if (VAR_7 > 0) {





   if (VAR_8[3] >> 4 > 0)
    VAR_6 = 2;
   else
    VAR_6 = 0;

   if (VAR_6 < VAR_0 && VAR_4->midi[VAR_6])
    FUNC_0(VAR_4->midi[VAR_6], VAR_8 + 1, VAR_7);
  }

  VAR_2 += VAR_1->data_block_quadlets;
 }
}
