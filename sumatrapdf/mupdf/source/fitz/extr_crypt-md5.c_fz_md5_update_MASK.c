
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* count; unsigned char const* buffer; int state; } ;
typedef TYPE_1__ fz_md5 ;


 int FUNC_0 (unsigned char const*,unsigned char const*,size_t) ;
 int FUNC_1 (int ,unsigned char const*) ;

void FUNC_2(fz_md5 *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
 size_t VAR_3, VAR_4, VAR_5;


 VAR_4 = (size_t)((VAR_0->count[0] >> 3) & 0x3F);


 VAR_0->count[0] += (unsigned int) VAR_2 << 3;
 if (VAR_0->count[0] < (unsigned int) VAR_2 << 3)
  VAR_0->count[1] ++;
 VAR_0->count[1] += (unsigned int) VAR_2 >> 29;

 VAR_5 = 64 - VAR_4;


 if (VAR_2 >= VAR_5)
 {
  FUNC_0(VAR_0->buffer + VAR_4, VAR_1, VAR_5);
  FUNC_1(VAR_0->state, VAR_0->buffer);

  for (VAR_3 = VAR_5; VAR_3 + 63 < VAR_2; VAR_3 += 64)
   FUNC_1(VAR_0->state, VAR_1 + VAR_3);

  VAR_4 = 0;
 }
 else
 {
  VAR_3 = 0;
 }


 FUNC_0(VAR_0->buffer + VAR_4, VAR_1 + VAR_3, VAR_2 - VAR_3);
}
