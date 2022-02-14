
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_1 (unsigned long*,int,int) ;
 unsigned long* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;

unsigned long FUNC_3()
{
   unsigned long * VAR_5 = VAR_3;
   int VAR_6 = VAR_4;
   unsigned long VAR_7,VAR_8;
   int VAR_9;

   if (VAR_6 >= VAR_2*sizeof(unsigned long)) {
      if (VAR_6 > VAR_2*sizeof(unsigned long))
         FUNC_2(0);
      VAR_6 = 0;
      VAR_9 = 0;
      for (; VAR_9 < VAR_1; VAR_9++) {
         VAR_7 = FUNC_1(VAR_5, VAR_9, VAR_9+1);
         VAR_5[VAR_9] = VAR_5[VAR_9 + VAR_0] ^ (VAR_7 >> 1) ^ FUNC_0(VAR_7);
      }
      for (; VAR_9 < VAR_2-1; VAR_9++) {
         VAR_7 = FUNC_1(VAR_5, VAR_9, VAR_9+1);
         VAR_5[VAR_9] = VAR_5[VAR_9 - VAR_1] ^ (VAR_7 >> 1) ^ FUNC_0(VAR_7);
      }

      VAR_7 = FUNC_1(VAR_5, VAR_2-1, 0);
      VAR_5[VAR_2-1] = VAR_5[VAR_0-1] ^ (VAR_7 >> 1) ^ FUNC_0(VAR_7);
   }
   VAR_4 = VAR_6 + sizeof(unsigned long);

   VAR_8 = *(unsigned long *)((unsigned char *)VAR_5 + VAR_6);

   VAR_8 ^= (VAR_8 >> 11);
   VAR_8 ^= (VAR_8 << 7) & 0x9D2C5680;
   VAR_8 ^= (VAR_8 << 15) & 0xEFC60000;
   VAR_8 ^= (VAR_8 >> 18);

   return VAR_8;
}
