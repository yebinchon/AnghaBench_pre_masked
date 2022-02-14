
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long FUNC_0 (char*,char*,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,void*,int) ;
 int FUNC_3 (char*,void*,unsigned long) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void FUNC_6(char *VAR_3, char *VAR_4, unsigned long VAR_5,
     unsigned long VAR_6, unsigned long VAR_7, void *VAR_8,
     void *VAR_9)
{
 char *VAR_10, *VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13;

 VAR_10 = VAR_3 + VAR_1 + VAR_5;
 VAR_11 = VAR_4 + VAR_1 + VAR_6;

 FUNC_4(VAR_3, VAR_2, VAR_0);
 FUNC_4(VAR_4, VAR_2, VAR_0);
 FUNC_3(VAR_10, VAR_9, VAR_7);

 VAR_12 = FUNC_0(VAR_11, VAR_10, VAR_7);
 if (VAR_12 && VAR_12 != (unsigned long)VAR_11) {
  FUNC_5("(%p,%p,%ld) returned %ld\n", VAR_11, VAR_10, VAR_7, VAR_12);
  FUNC_1();
 }

 if (FUNC_2(VAR_11, VAR_10, VAR_7)) {
  FUNC_5("(%p,%p,%ld) miscompare\n", VAR_11, VAR_10, VAR_7);
  FUNC_5("src: ");
  for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
   FUNC_5("%02x ", VAR_10[VAR_13]);
  FUNC_5("\ndst: ");
  for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
   FUNC_5("%02x ", VAR_11[VAR_13]);
  FUNC_5("\n");
  FUNC_1();
 }

 if (FUNC_2(VAR_4, VAR_8, VAR_11 - VAR_4)) {
  FUNC_5("(%p,%p,%ld) redzone before corrupted\n",
         VAR_11, VAR_10, VAR_7);
  FUNC_1();
 }

 if (FUNC_2(VAR_11+VAR_7, VAR_8, VAR_4+VAR_0-(VAR_11+VAR_7))) {
  FUNC_5("(%p,%p,%ld) redzone after corrupted\n",
         VAR_11, VAR_10, VAR_7);
  FUNC_1();
 }
}
