
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (void*,long,long,int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int VAR_1 ;
 int FUNC_4 (unsigned int*) ;
 int VAR_2 ;
 unsigned int* FUNC_5 (long) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int) ;
 long FUNC_8 (int ,void*,unsigned long,unsigned int*) ;

__attribute__((used)) static int FUNC_9(void *VAR_3, unsigned long VAR_4)
{
 unsigned int *VAR_5;
 long VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_8 = VAR_4 / 0x10000;
 VAR_5 = FUNC_5(VAR_8 * 4);
 FUNC_0(VAR_5);





 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  VAR_5[VAR_6] = (0x40000000 >> (((VAR_6 + 1) * 2) % 32)) |
   (0xc0000000 >> (((VAR_6 + 3) * 2) % 32));
 }

 VAR_9 = FUNC_8(VAR_0, VAR_3, VAR_4, VAR_5);
 if (VAR_9) {
  FUNC_6("subpage_perm");
  return 1;
 }
 FUNC_4(VAR_5);

 VAR_2 = 1;
 VAR_1 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < 16; VAR_7++, VAR_3 += 0x1000) {
   FUNC_2(VAR_3);
   FUNC_1(VAR_3, VAR_6, VAR_7, 0);
   FUNC_3(VAR_3);
   FUNC_1(VAR_3, VAR_6, VAR_7, 1);
  }
 }

 VAR_2 = 0;
 if (VAR_1) {
  FUNC_7("%d errors detected\n", VAR_1);
  return 1;
 }

 return 0;
}
