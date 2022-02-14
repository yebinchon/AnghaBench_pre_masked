
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8 ;
typedef int PushFilter ;


 char* FUNC_0 (char const*,char,int) ;
 int FUNC_1 (int *,char const*,int) ;

__attribute__((used)) static int
FUNC_2(PushFilter *VAR_0, void *VAR_1, const uint8 *VAR_2, int VAR_3)
{
 const uint8 *VAR_4 = VAR_2 + VAR_3;
 const uint8 *VAR_5,
      *VAR_6 = VAR_2;
 int VAR_7;
 static const uint8 VAR_8[] = {'\r', '\n'};
 int VAR_9 = 0;

 while (VAR_6 < VAR_4)
 {
  VAR_5 = FUNC_0(VAR_6, '\n', VAR_4 - VAR_6);
  if (VAR_5 == ((void*)0))
   VAR_5 = VAR_4;

  VAR_7 = VAR_5 - VAR_6;


  VAR_9 = 0;
  if (VAR_7 > 0)
  {
   VAR_9 = FUNC_1(VAR_0, VAR_6, VAR_7);
   if (VAR_9 < 0)
    break;
   VAR_6 += VAR_7;
  }


  while (VAR_6 < VAR_4 && *VAR_6 == '\n')
  {
   VAR_9 = FUNC_1(VAR_0, VAR_8, 2);
   if (VAR_9 < 0)
    break;
   VAR_6++;
  }
 }
 return VAR_9;
}
