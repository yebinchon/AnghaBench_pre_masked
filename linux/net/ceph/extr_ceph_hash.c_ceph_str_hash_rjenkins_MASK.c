
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;


 int FUNC_0 (int,int,int) ;

unsigned int FUNC_1(const char *VAR_0, unsigned int VAR_1)
{
 const unsigned char *VAR_2 = (const unsigned char *)VAR_0;
 __u32 VAR_3, VAR_4, VAR_5;
 __u32 VAR_6;


 VAR_6 = VAR_1;
 VAR_3 = 0x9e3779b9;
 VAR_4 = VAR_3;
 VAR_5 = 0;


 while (VAR_6 >= 12) {
  VAR_3 = VAR_3 + (VAR_2[0] + ((__u32)VAR_2[1] << 8) + ((__u32)VAR_2[2] << 16) +
    ((__u32)VAR_2[3] << 24));
  VAR_4 = VAR_4 + (VAR_2[4] + ((__u32)VAR_2[5] << 8) + ((__u32)VAR_2[6] << 16) +
    ((__u32)VAR_2[7] << 24));
  VAR_5 = VAR_5 + (VAR_2[8] + ((__u32)VAR_2[9] << 8) + ((__u32)VAR_2[10] << 16) +
    ((__u32)VAR_2[11] << 24));
  FUNC_0(VAR_3, VAR_4, VAR_5);
  VAR_2 = VAR_2 + 12;
  VAR_6 = VAR_6 - 12;
 }


 VAR_5 = VAR_5 + VAR_1;
 switch (VAR_6) {
 case 11:
  VAR_5 = VAR_5 + ((__u32)VAR_2[10] << 24);

 case 10:
  VAR_5 = VAR_5 + ((__u32)VAR_2[9] << 16);

 case 9:
  VAR_5 = VAR_5 + ((__u32)VAR_2[8] << 8);


 case 8:
  VAR_4 = VAR_4 + ((__u32)VAR_2[7] << 24);

 case 7:
  VAR_4 = VAR_4 + ((__u32)VAR_2[6] << 16);

 case 6:
  VAR_4 = VAR_4 + ((__u32)VAR_2[5] << 8);

 case 5:
  VAR_4 = VAR_4 + VAR_2[4];

 case 4:
  VAR_3 = VAR_3 + ((__u32)VAR_2[3] << 24);

 case 3:
  VAR_3 = VAR_3 + ((__u32)VAR_2[2] << 16);

 case 2:
  VAR_3 = VAR_3 + ((__u32)VAR_2[1] << 8);

 case 1:
  VAR_3 = VAR_3 + VAR_2[0];

 }
 FUNC_0(VAR_3, VAR_4, VAR_5);

 return VAR_5;
}
