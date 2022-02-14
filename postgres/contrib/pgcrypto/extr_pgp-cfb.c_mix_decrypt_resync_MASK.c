
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {int block_no; int pos; int* encbuf; int* fre; int fr; int block_size; } ;
typedef TYPE_1__ PGP_CFB ;


 int FUNC_0 (int,int*,int) ;

__attribute__((used)) static int
FUNC_1(PGP_CFB *VAR_0, const uint8 *VAR_1, int VAR_2, uint8 *VAR_3)
{
 int VAR_4,
    VAR_5;


 if (VAR_0->block_no == 2)
 {
  VAR_5 = 2 - VAR_0->pos;
  if (VAR_2 < VAR_5)
   VAR_5 = VAR_2;
  for (VAR_4 = VAR_0->pos; VAR_4 < VAR_0->pos + VAR_5; VAR_4++)
  {
   VAR_0->encbuf[VAR_4] = *VAR_1++;
   *VAR_3++ = VAR_0->fre[VAR_4] ^ VAR_0->encbuf[VAR_4];
  }
  VAR_0->pos += VAR_5;
  VAR_2 -= VAR_5;

  if (VAR_0->pos == 2)
  {
   FUNC_0(VAR_0->fr, VAR_0->encbuf + 2, VAR_0->block_size - 2);
   FUNC_0(VAR_0->fr + VAR_0->block_size - 2, VAR_0->encbuf, 2);
   VAR_0->pos = 0;
   return VAR_5;
  }
 }
 for (VAR_4 = VAR_0->pos; VAR_4 < VAR_0->pos + VAR_2; VAR_4++)
 {
  VAR_0->encbuf[VAR_4] = *VAR_1++;
  *VAR_3++ = VAR_0->fre[VAR_4] ^ VAR_0->encbuf[VAR_4];
 }
 VAR_0->pos += VAR_2;
 return VAR_2;
}
