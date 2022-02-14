
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct amdtp_stream {int data_block_quadlets; struct amdtp_dot* protocol; } ;
struct amdtp_dot {int ** midi; } ;
typedef int __be32 ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct amdtp_stream*,unsigned int) ;
 int FUNC_1 (struct amdtp_stream*,unsigned int,int) ;
 int FUNC_2 (int *,int*,int) ;

__attribute__((used)) static void FUNC_3(struct amdtp_stream *VAR_1, __be32 *VAR_2,
  unsigned int VAR_3, unsigned int VAR_4)
{
 struct amdtp_dot *VAR_5 = VAR_1->protocol;
 unsigned int VAR_6, VAR_7;
 int VAR_8;
 u8 *VAR_9;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_7 = (VAR_4 + VAR_6) % 8;
  VAR_9 = (u8 *)&VAR_2[0];

  VAR_8 = 0;
  if (VAR_7 < VAR_0 &&
      FUNC_0(VAR_1, VAR_7) &&
      VAR_5->midi[VAR_7] != ((void*)0))
   VAR_8 = FUNC_2(VAR_5->midi[VAR_7], VAR_9 + 1, 2);

  if (VAR_8 > 0) {






   if (VAR_7 == 2)
    VAR_9[3] = 0xe0;
   else if (VAR_7 == 1)
    VAR_9[3] = 0x20;
   else
    VAR_9[3] = 0x00;
   VAR_9[3] |= VAR_8;
   FUNC_1(VAR_1, VAR_7, VAR_8);
  } else {
   VAR_9[1] = 0;
   VAR_9[2] = 0;
   VAR_9[3] = 0;
  }
  VAR_9[0] = 0x80;

  VAR_2 += VAR_1->data_block_quadlets;
 }
}
