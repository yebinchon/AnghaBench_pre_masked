
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,void*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,void*,int) ;

__attribute__((used)) static int FUNC_3(int VAR_2, void *VAR_3, int VAR_4)
{
 int VAR_5 = VAR_4;

 while (VAR_4) {
  int VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);

  if (VAR_6 <= 0)
   return -1;

  if (VAR_1) {
   int VAR_7 = FUNC_2(VAR_0, VAR_3, VAR_6);

   if (VAR_7 <= 0 || VAR_7 != VAR_6) {
    FUNC_0("repiping input file");
    return -1;
   }
  }

  VAR_4 -= VAR_6;
  VAR_3 += VAR_6;
 }

 return VAR_5;
}
