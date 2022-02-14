
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct portman {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct portman*) ;
 int FUNC_2 (struct portman*,unsigned char) ;
 int FUNC_3 (struct portman*,int) ;

__attribute__((used)) static int FUNC_4(struct portman *VAR_4, int VAR_5)
{
 unsigned char VAR_6 = 0;
 unsigned char VAR_7;


 FUNC_3(VAR_4, 0);


 VAR_7 = (VAR_5 << 1) | VAR_1;
 FUNC_2(VAR_4, VAR_7);

 while ((FUNC_1(VAR_4) & VAR_0) == VAR_0)
  FUNC_0();




 if ((FUNC_1(VAR_4) & VAR_2) == 0)
  return -1;


 FUNC_2(VAR_4, VAR_7 | VAR_3);

 while ((FUNC_1(VAR_4) & VAR_0) == 0)
  FUNC_0();


 VAR_6 = (FUNC_1(VAR_4) & 128);
 FUNC_3(VAR_4, 1);


 FUNC_3(VAR_4, 0);
 VAR_6 |= (FUNC_1(VAR_4) >> 1) & 64;
 FUNC_3(VAR_4, 1);


 FUNC_3(VAR_4, 0);
 VAR_6 |= (FUNC_1(VAR_4) >> 2) & 32;
 FUNC_3(VAR_4, 1);


 FUNC_3(VAR_4, 0);
 VAR_6 |= (FUNC_1(VAR_4) >> 3) & 16;
 FUNC_3(VAR_4, 1);


 FUNC_3(VAR_4, 0);
 VAR_6 |= (FUNC_1(VAR_4) >> 4) & 8;
 FUNC_3(VAR_4, 1);


 FUNC_3(VAR_4, 0);
 VAR_6 |= (FUNC_1(VAR_4) >> 5) & 4;
 FUNC_3(VAR_4, 1);


 FUNC_3(VAR_4, 0);
 VAR_6 |= (FUNC_1(VAR_4) >> 6) & 2;
 FUNC_3(VAR_4, 1);


 FUNC_3(VAR_4, 0);
 VAR_6 |= (FUNC_1(VAR_4) >> 7) & 1;
 FUNC_3(VAR_4, 1);
 FUNC_3(VAR_4, 0);



 FUNC_2(VAR_4, VAR_7);


 while ((FUNC_1(VAR_4) & VAR_0) == VAR_0)
  FUNC_0();

 return (VAR_6 & 255);
}
