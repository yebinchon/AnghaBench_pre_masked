
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;


 int FUNC_0 (int) ;
 int* VAR_0 ;
 int FUNC_1 (char*,int ,int) ;

int
FUNC_2(const char *VAR_1, int VAR_2, char *VAR_3, int VAR_4)
{
 const char *VAR_5 = VAR_1 + VAR_2,
      *VAR_6 = VAR_1;
 char *VAR_7 = VAR_3;
 char VAR_8;
 int VAR_9 = 0;
 uint32 VAR_10 = 0;
 int VAR_11 = 0,
    VAR_12 = 0;

 while (VAR_6 < VAR_5)
 {
  VAR_8 = *VAR_6++;


  if (VAR_8 == ' ' || VAR_8 == '\t' || VAR_8 == '\n' || VAR_8 == '\r')
   goto error;

  if (VAR_8 == '=')
  {

   if (!VAR_12)
   {
    if (VAR_11 == 2)
     VAR_12 = 1;
    else if (VAR_11 == 3)
     VAR_12 = 2;
    else
    {




     goto error;
    }
   }
   VAR_9 = 0;
  }
  else
  {
   VAR_9 = -1;
   if (VAR_8 > 0 && VAR_8 < 127)
    VAR_9 = VAR_0[(unsigned char) VAR_8];
   if (VAR_9 < 0)
   {

    goto error;
   }
  }

  VAR_10 = (VAR_10 << 6) + VAR_9;
  VAR_11++;
  if (VAR_11 == 4)
  {




   if ((VAR_7 - VAR_3 + 1) > VAR_4)
    goto error;
   *VAR_7++ = (VAR_10 >> 16) & 255;

   if (VAR_12 == 0 || VAR_12 > 1)
   {

    if ((VAR_7 - VAR_3 + 1) > VAR_4)
     goto error;
    *VAR_7++ = (VAR_10 >> 8) & 255;
   }
   if (VAR_12 == 0 || VAR_12 > 2)
   {

    if ((VAR_7 - VAR_3 + 1) > VAR_4)
     goto error;
    *VAR_7++ = VAR_10 & 255;
   }
   VAR_10 = 0;
   VAR_11 = 0;
  }
 }

 if (VAR_11 != 0)
 {




  goto error;
 }

 FUNC_0((VAR_7 - VAR_3) <= VAR_4);
 return VAR_7 - VAR_3;

error:
 FUNC_1(VAR_3, 0, VAR_4);
 return -1;
}
