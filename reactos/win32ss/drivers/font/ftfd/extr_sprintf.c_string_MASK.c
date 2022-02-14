
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static char*
FUNC_0(char* VAR_2, char* VAR_3, const char* VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9;
    char VAR_10;

    VAR_10 = (VAR_8 & VAR_1) ? '0' : ' ';

 if (VAR_4 == ((void*)0))
 {
  VAR_4 = "<NULL>";
  VAR_5 = 6;
 }
 else
 {
  if (VAR_5 == -1)
  {
   VAR_5 = 0;
   while ((unsigned int)VAR_5 < (unsigned int)VAR_7 && VAR_4[VAR_5])
    VAR_5++;
  }
  else
  {
   if ((unsigned int)VAR_5 > (unsigned int)VAR_7)
    VAR_5 = VAR_7;
  }
 }
 if (!(VAR_8 & VAR_0))
  while (VAR_5 < VAR_6--)
  {
   if (VAR_2 <= VAR_3)
    *VAR_2 = VAR_10;
   ++VAR_2;
  }
 for (VAR_9 = 0; VAR_9 < VAR_5; ++VAR_9)
 {
  if (VAR_2 <= VAR_3)
   *VAR_2 = *VAR_4++;
  ++VAR_2;
 }
 while (VAR_5 < VAR_6--)
 {
  if (VAR_2 <= VAR_3)
   *VAR_2 = ' ';
  ++VAR_2;
 }
 return VAR_2;
}
