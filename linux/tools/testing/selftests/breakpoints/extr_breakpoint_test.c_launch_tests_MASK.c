
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*,int ,int,int,int) ;
 int FUNC_4 (int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 char VAR_6[1024];
 unsigned int VAR_7 = 0;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_7 += 3 * VAR_2;
 VAR_7 += sizeof(long) / 2 * 3 * VAR_3;
 VAR_7 += sizeof(long) / 2 * 3 * VAR_3;
 VAR_7 += 2;
 FUNC_1(VAR_7);


 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
   if (!VAR_9 && !VAR_10)
    continue;
   FUNC_2(VAR_6, VAR_9, VAR_10);
  }
 }


 for (VAR_8 = 1; VAR_8 <= sizeof(long); VAR_8 <<= 1) {
  for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
   for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
    if (!VAR_9 && !VAR_10)
     continue;
    FUNC_3(VAR_6, VAR_1, VAR_8,
         VAR_9, VAR_10);
   }
  }
 }


 for (VAR_8 = 1; VAR_8 <= sizeof(long); VAR_8 <<= 1) {
  for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
   for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
    if (!VAR_9 && !VAR_10)
     continue;
    FUNC_3(VAR_6, VAR_0, VAR_8,
         VAR_9, VAR_10);
   }
  }
 }


 FUNC_4(VAR_4, VAR_5, ((void*)0), 0);
 FUNC_0("Test icebp\n");


 FUNC_4(VAR_4, VAR_5, ((void*)0), 0);
 FUNC_0("Test int 3 trap\n");

 FUNC_4(VAR_4, VAR_5, ((void*)0), 0);
}
