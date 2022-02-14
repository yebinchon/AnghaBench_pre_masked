
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
 int FUNC_3 (int,unsigned char*,int,unsigned long) ;
 int FUNC_4 (int,unsigned char*,int,unsigned long) ;
 unsigned char FUNC_5 () ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_6(int VAR_3)
{

 unsigned long VAR_4 =
  (VAR_2[0] + 0x6000) & ~(VAR_0 - 1);
 unsigned char VAR_5[VAR_1],
  VAR_6[VAR_1];
 loff_t VAR_7;
 int VAR_8, VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_5[VAR_9] = FUNC_5();
  VAR_6[VAR_9] = VAR_5[VAR_9];
 }

 VAR_7 = VAR_4 / VAR_0;

 VAR_8 = FUNC_4(VAR_3, VAR_5, sizeof(VAR_5), VAR_7);
 if (VAR_8 != sizeof(VAR_5))
  FUNC_2(VAR_8);

 VAR_8 = FUNC_3(VAR_3, VAR_5, sizeof(VAR_5), VAR_7);
 if (VAR_8 != sizeof(VAR_5))
  FUNC_2(VAR_8);

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  if (VAR_6[VAR_9] != VAR_5[VAR_9]) {
   FUNC_0(
    "\tExpected version %d but read version %d\n",
    VAR_6, VAR_5[0]);
   FUNC_2(-VAR_6[VAR_9]);
  }
 }

 VAR_8 = 0;
out:
 FUNC_1(VAR_8);
}
