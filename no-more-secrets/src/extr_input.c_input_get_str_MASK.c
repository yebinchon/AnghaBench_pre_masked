
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char**,char*) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,int ,int) ;

int FUNC_6(char** VAR_0, char *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 unsigned char *VAR_5;

 VAR_2 = FUNC_2(&VAR_5, VAR_1);
 if (VAR_2 < 0)
 {
  FUNC_0("Could not get input.");
  return -1;
 }

 if (VAR_2 > 0)
 {
  if (VAR_5[VAR_2 - 1] == '\n')
  {
   --VAR_2;
   if (VAR_2 > 0 && VAR_5[VAR_2 - 1] == '\r')
   {
    --VAR_2;
   }
  }
 }

 if (VAR_2 == 0)
 {
  FUNC_0("No input provided.");
  return -1;
 }

 VAR_4 = VAR_2;

 *VAR_0 = FUNC_4(VAR_4 + 1);
 if (*VAR_0 == ((void*)0))
 {
  FUNC_0("Memory allocation error.");
  return -1;
 }

 FUNC_5(*VAR_0, 0, VAR_4 + 1);

 for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3)
 {
  if (FUNC_3(VAR_5[VAR_3]))
  {
   (*VAR_0)[VAR_3] = VAR_5[VAR_3];
  }
  else
  {
   FUNC_0("Input contains non-ascii characters.");
   return -1;
  }
 }

 FUNC_1(VAR_5);

 return VAR_4;
}
