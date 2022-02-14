
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MD5Context {int* count; unsigned char const* buffer; int state; } ;


 int FUNC_0 (int ,unsigned char const*) ;
 int FUNC_1 (unsigned char const*,unsigned char const*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct MD5Context *VAR_0, const unsigned char *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5;


 VAR_4 = (VAR_0->count[0] >> 3) & 0x3F;


 VAR_0->count[0] += (VAR_2 << 3);
 if (VAR_0->count[0] < (VAR_2 << 3))
  VAR_0->count[1]++;
 VAR_0->count[1] += (VAR_2 >> 29);

 VAR_5 = 64 - VAR_4;


 if (VAR_2 >= VAR_5) {
  FUNC_1(&VAR_0->buffer[VAR_4], VAR_1, VAR_5);
  FUNC_0(VAR_0->state, VAR_0->buffer);

  for (VAR_3 = VAR_5; VAR_3 + 63 < VAR_2; VAR_3 += 64)
   FUNC_0(VAR_0->state, &VAR_1[VAR_3]);

  VAR_4 = 0;
 } else
  VAR_3 = 0;


 FUNC_1(&VAR_0->buffer[VAR_4], &VAR_1[VAR_3], VAR_2 - VAR_3);
}
