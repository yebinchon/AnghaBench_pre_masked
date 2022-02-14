
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int version ;
typedef unsigned long loff_t ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned char*,unsigned char) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (unsigned char) ;
 int* VAR_2 ;
 int FUNC_3 (int,unsigned char*,int,unsigned long) ;
 int FUNC_4 (int,unsigned char*,int,unsigned long) ;
 unsigned char FUNC_5 () ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(int VAR_4)
{

 unsigned long VAR_5 =
  (VAR_2[VAR_3 - 1] - 0x6000) & ~(VAR_0 - 1);
 unsigned char VAR_6[VAR_1],
  VAR_7[VAR_1];
 loff_t VAR_8;
 int VAR_9, VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_6[VAR_10] = FUNC_5();
  VAR_7[VAR_10] = VAR_6[VAR_10];
 }

 VAR_8 = VAR_5 / VAR_0;

 VAR_9 = FUNC_4(VAR_4, VAR_6, sizeof(VAR_6), VAR_8);
 if (VAR_9 != sizeof(VAR_6))
  FUNC_2(VAR_9);

 VAR_9 = FUNC_3(VAR_4, VAR_6, sizeof(VAR_6), VAR_8);
 if (VAR_9 != sizeof(VAR_6))
  FUNC_2(VAR_9);

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  if (VAR_7[VAR_10] != VAR_6[VAR_10]) {
   FUNC_0(
    "\tExpected version %d but read version %d\n",
    VAR_7, VAR_6[0]);
   FUNC_2(-VAR_7[VAR_10]);
  }
 }

 VAR_9 = 0;
out:
 FUNC_1(VAR_9);
}
