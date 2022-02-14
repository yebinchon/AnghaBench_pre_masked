
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_1 (char*,int ,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 scalar_t__ FUNC_6 (unsigned char) ;
 int FUNC_7 (unsigned char) ;
 int VAR_8 ;

int
FUNC_8(const char *VAR_9, char *VAR_10, size_t VAR_11,
     char **VAR_12, int *VAR_13, int VAR_14, int *VAR_15)
{
 int VAR_16 = 0;
 const char *VAR_17 = VAR_9;
 char *VAR_18 = VAR_10;
 const char *VAR_19 = VAR_10 + VAR_11;
 while (*VAR_17 != '\0')
 {

  if (FUNC_6((unsigned char) *VAR_17))
  {
   VAR_17++;
   continue;
  }


  if (VAR_16 >= VAR_14)
   return VAR_0;
  VAR_12[VAR_16] = VAR_18;


  if (FUNC_4((unsigned char) *VAR_17))
  {
   do { if (((VAR_18) + 1) >= (VAR_19)) return VAR_0; *(VAR_18)++ = *VAR_17++; } while (0);
   while (FUNC_4((unsigned char) *VAR_17))
    do { if (((VAR_18) + 1) >= (VAR_19)) return VAR_0; *(VAR_18)++ = *VAR_17++; } while (0);


   if (*VAR_17 == ':')
   {
    VAR_13[VAR_16] = VAR_5;
    do { if (((VAR_18) + 1) >= (VAR_19)) return VAR_0; *(VAR_18)++ = *VAR_17++; } while (0);
    while (FUNC_4((unsigned char) *VAR_17) ||
        (*VAR_17 == ':') || (*VAR_17 == '.'))
     do { if (((VAR_18) + 1) >= (VAR_19)) return VAR_0; *(VAR_18)++ = *VAR_17++; } while (0);
   }

   else if (*VAR_17 == '-' || *VAR_17 == '/' || *VAR_17 == '.')
   {

    char VAR_20 = *VAR_17;

    do { if (((VAR_18) + 1) >= (VAR_19)) return VAR_0; *(VAR_18)++ = *VAR_17++; } while (0);

    if (FUNC_4((unsigned char) *VAR_17))
    {
     VAR_13[VAR_16] = ((VAR_20 == '.') ? VAR_2 : VAR_1);
     while (FUNC_4((unsigned char) *VAR_17))
      do { if (((VAR_18) + 1) >= (VAR_19)) return VAR_0; *(VAR_18)++ = *VAR_17++; } while (0);





     if (*VAR_17 == VAR_20)
     {
      VAR_13[VAR_16] = VAR_1;
      do { if (((VAR_18) + 1) >= (VAR_19)) return VAR_0; *(VAR_18)++ = *VAR_17++; } while (0);
      while (FUNC_4((unsigned char) *VAR_17) || *VAR_17 == VAR_20)
       do { if (((VAR_18) + 1) >= (VAR_19)) return VAR_0; *(VAR_18)++ = *VAR_17++; } while (0);
     }
    }
    else
    {
     VAR_13[VAR_16] = VAR_1;
     while (FUNC_2((unsigned char) *VAR_17) || *VAR_17 == VAR_20)
      do { if (((VAR_18) + 1) >= (VAR_19)) return VAR_0; *(VAR_18)++ = FUNC_7((unsigned char) *VAR_17++); } while (0);
    }
   }





   else
    VAR_13[VAR_16] = VAR_2;
  }

  else if (*VAR_17 == '.')
  {
   do { if (((VAR_18) + 1) >= (VAR_19)) return VAR_0; *(VAR_18)++ = *VAR_17++; } while (0);
   while (FUNC_4((unsigned char) *VAR_17))
    do { if (((VAR_18) + 1) >= (VAR_19)) return VAR_0; *(VAR_18)++ = *VAR_17++; } while (0);

   VAR_13[VAR_16] = VAR_2;
  }




  else if (FUNC_3((unsigned char) *VAR_17))
  {
   bool VAR_21;

   VAR_13[VAR_16] = VAR_4;
   do { if (((VAR_18) + 1) >= (VAR_19)) return VAR_0; *(VAR_18)++ = FUNC_7((unsigned char) *VAR_17++); } while (0);
   while (FUNC_3((unsigned char) *VAR_17))
    do { if (((VAR_18) + 1) >= (VAR_19)) return VAR_0; *(VAR_18)++ = FUNC_7((unsigned char) *VAR_17++); } while (0);
   VAR_21 = 0;
   if (*VAR_17 == '-' || *VAR_17 == '/' || *VAR_17 == '.')
    VAR_21 = 1;
   else if (*VAR_17 == '+' || FUNC_4((unsigned char) *VAR_17))
   {
    *VAR_18 = '\0';

    if (FUNC_1(VAR_12[VAR_16], VAR_7, VAR_8) == ((void*)0))
     VAR_21 = 1;
   }
   if (VAR_21)
   {
    VAR_13[VAR_16] = VAR_1;
    do
    {
     do { if (((VAR_18) + 1) >= (VAR_19)) return VAR_0; *(VAR_18)++ = FUNC_7((unsigned char) *VAR_17++); } while (0);
    } while (*VAR_17 == '+' || *VAR_17 == '-' ||
       *VAR_17 == '/' || *VAR_17 == '_' ||
       *VAR_17 == '.' || *VAR_17 == ':' ||
       FUNC_2((unsigned char) *VAR_17));
   }
  }

  else if (*VAR_17 == '+' || *VAR_17 == '-')
  {
   do { if (((VAR_18) + 1) >= (VAR_19)) return VAR_0; *(VAR_18)++ = *VAR_17++; } while (0);

   while (FUNC_6((unsigned char) *VAR_17))
    VAR_17++;


   if (FUNC_4((unsigned char) *VAR_17))
   {
    VAR_13[VAR_16] = VAR_6;
    do { if (((VAR_18) + 1) >= (VAR_19)) return VAR_0; *(VAR_18)++ = *VAR_17++; } while (0);
    while (FUNC_4((unsigned char) *VAR_17) ||
        *VAR_17 == ':' || *VAR_17 == '.' || *VAR_17 == '-')
     do { if (((VAR_18) + 1) >= (VAR_19)) return VAR_0; *(VAR_18)++ = *VAR_17++; } while (0);
   }

   else if (FUNC_3((unsigned char) *VAR_17))
   {
    VAR_13[VAR_16] = VAR_3;
    do { if (((VAR_18) + 1) >= (VAR_19)) return VAR_0; *(VAR_18)++ = FUNC_7((unsigned char) *VAR_17++); } while (0);
    while (FUNC_3((unsigned char) *VAR_17))
     do { if (((VAR_18) + 1) >= (VAR_19)) return VAR_0; *(VAR_18)++ = FUNC_7((unsigned char) *VAR_17++); } while (0);
   }

   else
    return VAR_0;
  }

  else if (FUNC_5((unsigned char) *VAR_17))
  {
   VAR_17++;
   continue;
  }

  else
   return VAR_0;


  *VAR_18++ = '\0';
  VAR_16++;
 }

 *VAR_15 = VAR_16;

 return 0;
}
