
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 char* FUNC_0 (int *,size_t) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int* VAR_0 ;
 scalar_t__ FUNC_3 (int*,unsigned char const*,unsigned char const*) ;
 scalar_t__ FUNC_4 (int*,unsigned char const*,unsigned char const*) ;
 size_t FUNC_5 (unsigned char const*,size_t,size_t) ;
 size_t FUNC_6 (unsigned char const*,size_t,size_t) ;
 size_t FUNC_7 (unsigned char const*,size_t,size_t) ;

char *
FUNC_8(fz_context *VAR_1, const char *VAR_2, size_t VAR_3)
{
 const unsigned char *VAR_4 = (const unsigned char*)VAR_2;
 char *VAR_5, *VAR_6;
 size_t VAR_7 = 0;
 int VAR_8;
 size_t VAR_9, VAR_10;


 if (VAR_3 >= 2 && VAR_4[0] == 254 && VAR_4[1] == 255)
 {
  VAR_9 = 2;
  while (VAR_9 + 2 <= VAR_3)
  {
   VAR_10 = FUNC_5(VAR_4, VAR_3, VAR_9);
   if (VAR_10)
    VAR_9 += VAR_10;
   else
   {
    VAR_9 += FUNC_3(&VAR_8, VAR_4 + VAR_9, VAR_4 + VAR_3);
    VAR_7 += FUNC_1(VAR_8);
   }
  }

  VAR_5 = VAR_6 = FUNC_0(VAR_1, VAR_7 + 1);

  VAR_9 = 2;
  while (VAR_9 + 2 <= VAR_3)
  {
   VAR_10 = FUNC_5(VAR_4, VAR_3, VAR_9);
   if (VAR_10)
    VAR_9 += VAR_10;
   else
   {
    VAR_9 += FUNC_3(&VAR_8, VAR_4 + VAR_9, VAR_4 + VAR_3);
    VAR_5 += FUNC_2(VAR_5, VAR_8);
   }
  }
 }


 else if (VAR_3 >= 2 && VAR_4[0] == 255 && VAR_4[1] == 254)
 {
  VAR_9 = 2;
  while (VAR_9 + 2 <= VAR_3)
  {
   VAR_10 = FUNC_6(VAR_4, VAR_3, VAR_9);
   if (VAR_10)
    VAR_9 += VAR_10;
   else
   {
    VAR_9 += FUNC_4(&VAR_8, VAR_4 + VAR_9, VAR_4 + VAR_3);
    VAR_7 += FUNC_1(VAR_8);
   }
  }

  VAR_5 = VAR_6 = FUNC_0(VAR_1, VAR_7 + 1);

  VAR_9 = 2;
  while (VAR_9 + 2 <= VAR_3)
  {
   VAR_10 = FUNC_6(VAR_4, VAR_3, VAR_9);
   if (VAR_10)
    VAR_9 += VAR_10;
   else
   {
    VAR_9 += FUNC_4(&VAR_8, VAR_4 + VAR_9, VAR_4 + VAR_3);
    VAR_5 += FUNC_2(VAR_5, VAR_8);
   }
  }
 }


 else if (VAR_3 >= 3 && VAR_4[0] == 239 && VAR_4[1] == 187 && VAR_4[2] == 191)
 {
  VAR_9 = 3;
  while (VAR_9 < VAR_3)
  {
   VAR_10 = FUNC_7(VAR_4, VAR_3, VAR_9);
   if (VAR_10)
    VAR_9 += VAR_10;
   else
   {
    VAR_9 += 1;
    VAR_7 += 1;
   }
  }

  VAR_5 = VAR_6 = FUNC_0(VAR_1, VAR_7 + 1);

  VAR_9 = 3;
  while (VAR_9 < VAR_3)
  {
   VAR_10 = FUNC_7(VAR_4, VAR_3, VAR_9);
   if (VAR_10)
    VAR_9 += VAR_10;
   else
    *VAR_5++ = VAR_4[VAR_9++];
  }
 }


 else
 {
  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
   VAR_7 += FUNC_1(VAR_0[VAR_4[VAR_9]]);

  VAR_5 = VAR_6 = FUNC_0(VAR_1, VAR_7 + 1);

  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  {
   VAR_8 = VAR_0[VAR_4[VAR_9]];
   VAR_5 += FUNC_2(VAR_5, VAR_8);
  }
 }

 *VAR_5 = 0;
 return VAR_6;
}
