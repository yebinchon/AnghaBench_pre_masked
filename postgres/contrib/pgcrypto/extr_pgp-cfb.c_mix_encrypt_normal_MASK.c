
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {int pos; int* encbuf; int* fre; } ;
typedef TYPE_1__ PGP_CFB ;



__attribute__((used)) static int
FUNC_0(PGP_CFB *VAR_0, const uint8 *VAR_1, int VAR_2, uint8 *VAR_3)
{
 int VAR_4;

 for (VAR_4 = VAR_0->pos; VAR_4 < VAR_0->pos + VAR_2; VAR_4++)
  *VAR_3++ = VAR_0->encbuf[VAR_4] = VAR_0->fre[VAR_4] ^ (*VAR_1++);
 VAR_0->pos += VAR_2;
 return VAR_2;
}
