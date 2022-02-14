
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
 int FUNC_2 (unsigned char) ;
 int* VAR_2 ;
 unsigned char FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (int,unsigned char*,int) ;
 unsigned long FUNC_5 (int,unsigned long,int ) ;
 int FUNC_6 (int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_7(int VAR_4)
{

 unsigned long VAR_5 =
  (VAR_2[VAR_3 - 1] - 0xF000) & ~(VAR_0 - 1);
 unsigned char VAR_6, VAR_7;
 loff_t VAR_8;
 off_t VAR_9;
 int VAR_10;

 VAR_8 = VAR_5 / VAR_0;
 VAR_6 = VAR_7 = FUNC_3();

 VAR_9 = FUNC_5(VAR_4, VAR_8, VAR_1);
 if (VAR_9 != VAR_8) {
  VAR_10 = -1;
  FUNC_2(VAR_10);
 }

 VAR_10 = FUNC_6(VAR_4, &VAR_6, sizeof(VAR_6));
 if (VAR_10 != sizeof(VAR_6))
  FUNC_2(VAR_10);

 VAR_9 = FUNC_5(VAR_4, VAR_8, VAR_1);
 if (VAR_9 != VAR_8) {
  VAR_10 = -1;
  FUNC_2(VAR_10);
 }

 VAR_10 = FUNC_4(VAR_4, &VAR_6, sizeof(VAR_6));
 if (VAR_10 != sizeof(VAR_6))
  FUNC_2(VAR_10);

 if (VAR_7 != VAR_6) {
  FUNC_0("\tExpected version %d but read version %d\n",
          VAR_7, VAR_6);
  FUNC_2(-VAR_7);
 }

 VAR_10 = 0;
out:
 FUNC_1(VAR_10);
}
