
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpu_set_t ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int,int,int *) ;
 unsigned int* FUNC_2 (int,int) ;
 int FUNC_3 (unsigned int*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int,char*,unsigned int) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static void FUNC_7(int VAR_0, char *VAR_1, int VAR_2,
    cpu_set_t *VAR_3)
{
 int VAR_4, VAR_5 = FUNC_4();
 unsigned int *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = VAR_5 / (sizeof(unsigned int) * 8);
 if (VAR_5 % (sizeof(unsigned int) * 8))
  VAR_7++;

 VAR_6 = FUNC_2(VAR_7, sizeof(unsigned int));
 if (!VAR_6)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4) {
  int VAR_10, VAR_11;

  if (!FUNC_1(VAR_4, VAR_2, VAR_3))
   continue;

  VAR_10 = VAR_4 / (sizeof(unsigned int) * 8);
  VAR_11 = VAR_4 % (sizeof(unsigned int) * 8);
  VAR_6[VAR_10] |= FUNC_0(VAR_11);
 }

 VAR_9 = 0;
 for (VAR_4 = VAR_7 - 1; VAR_4 >= 0; --VAR_4) {
  VAR_8 = FUNC_5(&VAR_1[VAR_9], VAR_0 - VAR_9, "%08x",
     VAR_6[VAR_4]);
  VAR_9 += VAR_8;
  if (VAR_4) {
   FUNC_6(&VAR_1[VAR_9], ",", VAR_0 - VAR_9);
   VAR_9++;
  }
 }

 FUNC_3(VAR_6);
}
