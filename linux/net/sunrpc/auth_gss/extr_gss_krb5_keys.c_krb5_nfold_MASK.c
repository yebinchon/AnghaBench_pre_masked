
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int inbits ;


 unsigned long FUNC_0 (int,int) ;
 int FUNC_1 (int*,int ,int) ;

__attribute__((used)) static void FUNC_2(u32 VAR_0, const u8 *VAR_1,
         u32 VAR_2, u8 *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5, VAR_6, VAR_7;




 VAR_0 >>= 3;
 VAR_2 >>= 3;


 VAR_4 = FUNC_0(VAR_0, VAR_2);



 FUNC_1(VAR_3, 0, VAR_2);
 VAR_5 = 0;



 for (VAR_6 = VAR_4-1; VAR_6 >= 0; VAR_6--) {

  VAR_7 = (


    ((VAR_0 << 3) - 1)


    + (((VAR_0 << 3) + 13) * (VAR_6/VAR_0))


    + ((VAR_0 - (VAR_6 % VAR_0)) << 3)
    ) % (VAR_0 << 3);


  VAR_5 += (((VAR_1[((VAR_0 - 1) - (VAR_7 >> 3)) % VAR_0] << 8)|
      (VAR_1[((VAR_0) - (VAR_7 >> 3)) % VAR_0]))
     >> ((VAR_7 & 7) + 1)) & 0xff;


  VAR_5 += VAR_3[VAR_6 % VAR_2];
  VAR_3[VAR_6 % VAR_2] = VAR_5 & 0xff;


  VAR_5 >>= 8;

 }


 if (VAR_5) {
  for (VAR_6 = VAR_2 - 1; VAR_6 >= 0; VAR_6--) {

   VAR_5 += VAR_3[VAR_6];
   VAR_3[VAR_6] = VAR_5 & 0xff;


   VAR_5 >>= 8;
  }
 }
}
