
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
typedef int (* mix_data_t ) (TYPE_1__*,int const*,int,int *) ;
struct TYPE_5__ {scalar_t__ pos; int block_size; int block_no; int encbuf; int fr; int fre; int ciph; } ;
typedef TYPE_1__ PGP_CFB ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int ) ;

__attribute__((used)) static int
FUNC_2(PGP_CFB *VAR_0, const uint8 *VAR_1, int VAR_2, uint8 *VAR_3,
   mix_data_t VAR_4)
{
 int VAR_5;
 int VAR_6;

 while (VAR_2 > 0 && VAR_0->pos > 0)
 {
  VAR_5 = VAR_0->block_size - VAR_0->pos;
  if (VAR_2 < VAR_5)
   VAR_5 = VAR_2;

  VAR_5 = VAR_4(VAR_0, VAR_1, VAR_5, VAR_3);
  VAR_1 += VAR_5;
  VAR_3 += VAR_5;
  VAR_2 -= VAR_5;

  if (VAR_0->pos == VAR_0->block_size)
  {
   FUNC_0(VAR_0->fr, VAR_0->encbuf, VAR_0->block_size);
   VAR_0->pos = 0;
  }
 }

 while (VAR_2 > 0)
 {
  FUNC_1(VAR_0->ciph, VAR_0->fr, VAR_0->block_size, VAR_0->fre);
  if (VAR_0->block_no < 5)
   VAR_0->block_no++;

  VAR_5 = VAR_0->block_size;
  if (VAR_2 < VAR_5)
   VAR_5 = VAR_2;

  VAR_6 = VAR_4(VAR_0, VAR_1, VAR_5, VAR_3);
  VAR_1 += VAR_6;
  VAR_3 += VAR_6;
  VAR_2 -= VAR_6;

  if (VAR_0->pos == VAR_0->block_size)
  {
   FUNC_0(VAR_0->fr, VAR_0->encbuf, VAR_0->block_size);
   VAR_0->pos = 0;
  }
 }
 return 0;
}
