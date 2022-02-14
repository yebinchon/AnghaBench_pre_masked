
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (char*) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int VAR_0 ;

int FUNC_3(int VAR_1, char **VAR_2)
{
 unsigned int VAR_3 = 0, VAR_4 = FUNC_0(VAR_0);

 if (VAR_1 == 3) {
  unsigned int VAR_5 = FUNC_1(VAR_2[VAR_1 - 2]);
  unsigned int VAR_6 = FUNC_1(VAR_2[VAR_1 - 1]);

  if (VAR_5 < VAR_4 && VAR_6 < VAR_4) {
   VAR_3 = VAR_5;
   VAR_4 = VAR_6 + 1;
  }
 } else if (VAR_1 == 2) {
  unsigned int VAR_7 = FUNC_1(VAR_2[VAR_1 - 1]);

  if (VAR_7 < VAR_4) {
   VAR_3 = VAR_7;
   VAR_4 = VAR_7 + 1;
  }
 }
 return FUNC_2(VAR_3, VAR_4);
}
