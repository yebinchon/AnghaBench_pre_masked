
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int version ;
typedef unsigned long off_t ;
typedef unsigned long loff_t ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned char,unsigned char) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (unsigned char) ;
 int* VAR_3 ;
 int FUNC_3 (unsigned char*,int ,int) ;
 unsigned char FUNC_4 () ;
 int VAR_4 ;
 int FUNC_5 (int,unsigned char*,int) ;
 unsigned long FUNC_6 (int,unsigned long,int ) ;
 int FUNC_7 (int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_8(int VAR_5)
{

 unsigned long VAR_6 =
  (VAR_3[VAR_4 - 1] - 0x5F000) & ~(VAR_0 - 1);
 unsigned char VAR_7[VAR_2],
        VAR_8[VAR_2];
 loff_t VAR_9;
 off_t VAR_10;
 int VAR_11, VAR_12;

 VAR_9 = VAR_6 / VAR_0;
 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
  VAR_7[VAR_12] = VAR_8[VAR_12] = FUNC_4();

 VAR_10 = FUNC_6(VAR_5, VAR_9, VAR_1);
 if (VAR_10 != VAR_9) {
  VAR_11 = -1;
  FUNC_2(VAR_11);
 }

 VAR_11 = FUNC_7(VAR_5, VAR_7, sizeof(VAR_7));
 if (VAR_11 != sizeof(VAR_7))
  FUNC_2(VAR_11);

 FUNC_3(VAR_7, 0, VAR_2);

 VAR_10 = FUNC_6(VAR_5, VAR_9, VAR_1);
 if (VAR_10 != VAR_9) {
  VAR_11 = -1;
  FUNC_2(VAR_11);
 }

 VAR_11 = FUNC_5(VAR_5, VAR_7, sizeof(VAR_7));
 if (VAR_11 != sizeof(VAR_7))
  FUNC_2(VAR_11);

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  if (VAR_8[VAR_12] != VAR_7[VAR_12]) {
   FUNC_0(
    "\tExpected version %d but read version %d\n",
    VAR_8[VAR_12], VAR_7[VAR_12]);
   FUNC_2(-VAR_8[VAR_12]);
  }
 }

 VAR_11 = 0;
out:
 FUNC_1(VAR_11);
}
