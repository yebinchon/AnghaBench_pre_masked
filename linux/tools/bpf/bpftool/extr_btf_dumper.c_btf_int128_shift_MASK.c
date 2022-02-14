
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int __u64 ;



__attribute__((used)) static void FUNC_0(__u64 *VAR_0, u16 VAR_1,
        u16 VAR_2)
{
 __u64 VAR_3, VAR_4;





 VAR_3 = VAR_0[1];
 VAR_4 = VAR_0[0];



 if (VAR_1 >= 64) {
  VAR_3 = VAR_4 << (VAR_1 - 64);
  VAR_4 = 0;
 } else {
  VAR_3 = (VAR_3 << VAR_1) |
       (VAR_4 >> (64 - VAR_1));
  VAR_4 = VAR_4 << VAR_1;
 }

 if (VAR_2 >= 64) {
  VAR_4 = VAR_3 >> (VAR_2 - 64);
  VAR_3 = 0;
 } else {
  VAR_4 = (VAR_4 >> VAR_2) |
       (VAR_3 << (64 - VAR_2));
  VAR_3 = VAR_3 >> VAR_2;
 }





 VAR_0[0] = VAR_4;
 VAR_0[1] = VAR_3;

}
