
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {char* a; char* b; } ;


 int FUNC_0 (int*,char*) ;
 float FUNC_1 (int) ;

int FUNC_2(char *VAR_0, struct line *VAR_1, int VAR_2, int VAR_3, int *VAR_4)
{
 char *VAR_5, *VAR_6 = ((void*)0), *VAR_7 = VAR_0;
 int VAR_8, VAR_9 = 0;
 float VAR_10, VAR_11 = 0, VAR_12 = 0;

 if (VAR_4)
  *VAR_4 = 0;

 while (*VAR_7)
 {
  VAR_5 = VAR_7 + FUNC_0(&VAR_8, VAR_7);
  if (VAR_8 == '\r' || VAR_8 == '\n')
  {
   if (VAR_1 && VAR_9 < VAR_2)
   {
    VAR_1[VAR_9].a = VAR_0;
    VAR_1[VAR_9].b = VAR_7;
   }
   ++VAR_9;
   if (VAR_4 && *VAR_4 < VAR_11)
    *VAR_4 = VAR_11;
   VAR_0 = VAR_5;
   VAR_11 = 0;
   VAR_6 = ((void*)0);
  }
  else
  {
   if (VAR_8 == ' ')
   {
    VAR_6 = VAR_7;
    VAR_10 = VAR_11;
   }

   VAR_12 = FUNC_1(VAR_8);
   if (VAR_11 + VAR_12 > VAR_3)
   {
    if (VAR_6)
    {
     if (VAR_1 && VAR_9 < VAR_2)
     {
      VAR_1[VAR_9].a = VAR_0;
      VAR_1[VAR_9].b = VAR_6;
     }
     ++VAR_9;
     if (VAR_4 && *VAR_4 < VAR_10)
      *VAR_4 = VAR_10;
     VAR_0 = VAR_5 = VAR_6 + 1;
     VAR_11 = 0;
     VAR_6 = ((void*)0);
    }
    else
    {
     if (VAR_1 && VAR_9 < VAR_2)
     {
      VAR_1[VAR_9].a = VAR_0;
      VAR_1[VAR_9].b = VAR_7;
     }
     ++VAR_9;
     if (VAR_4 && *VAR_4 < VAR_11)
      *VAR_4 = VAR_11;
     VAR_0 = VAR_7;
     VAR_11 = VAR_12;
     VAR_6 = ((void*)0);
    }
   }
   else
   {
    VAR_11 += VAR_12;
   }
  }
  VAR_7 = VAR_5;
 }

 if (VAR_1 && VAR_9 < VAR_2)
 {
  VAR_1[VAR_9].a = VAR_0;
  VAR_1[VAR_9].b = VAR_7;
 }
 ++VAR_9;
 if (VAR_4 && *VAR_4 < VAR_11)
  *VAR_4 = VAR_11;
 return VAR_9 < VAR_2 ? VAR_9 : VAR_2;
}
