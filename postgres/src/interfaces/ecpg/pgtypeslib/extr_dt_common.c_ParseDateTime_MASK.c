
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 void* FUNC_5 (unsigned char) ;

int
FUNC_6(char *VAR_7, char *VAR_8,
     char **VAR_9, int *VAR_10, int *VAR_11, char **VAR_12)
{
 int VAR_13 = 0;
 char *VAR_14 = VAR_8;

 *VAR_12 = VAR_7;

 while (*(*VAR_12) != '\0')
 {

  if (VAR_13 >= VAR_6)
   return -1;
  VAR_9[VAR_13] = VAR_14;


  if (FUNC_2((unsigned char) *(*VAR_12)))
  {
   *VAR_14++ = *(*VAR_12)++;
   while (FUNC_2((unsigned char) *(*VAR_12)))
    *VAR_14++ = *(*VAR_12)++;


   if (*(*VAR_12) == ':')
   {
    VAR_10[VAR_13] = VAR_4;
    *VAR_14++ = *(*VAR_12)++;
    while (FUNC_2((unsigned char) *(*VAR_12)) ||
        (*(*VAR_12) == ':') || (*(*VAR_12) == '.'))
     *VAR_14++ = *(*VAR_12)++;
   }

   else if (*(*VAR_12) == '-' || *(*VAR_12) == '/' || *(*VAR_12) == '.')
   {

    char *VAR_15 = (*VAR_12);

    *VAR_14++ = *(*VAR_12)++;

    if (FUNC_2((unsigned char) *(*VAR_12)))
    {
     VAR_10[VAR_13] = (*VAR_15 == '.') ? VAR_1 : VAR_0;
     while (FUNC_2((unsigned char) *(*VAR_12)))
      *VAR_14++ = *(*VAR_12)++;





     if (*(*VAR_12) == *VAR_15)
     {
      VAR_10[VAR_13] = VAR_0;
      *VAR_14++ = *(*VAR_12)++;
      while (FUNC_2((unsigned char) *(*VAR_12)) || (*(*VAR_12) == *VAR_15))
       *VAR_14++ = *(*VAR_12)++;
     }
    }
    else
    {
     VAR_10[VAR_13] = VAR_0;
     while (FUNC_0((unsigned char) *(*VAR_12)) || (*(*VAR_12) == *VAR_15))
      *VAR_14++ = FUNC_5((unsigned char) *(*VAR_12)++);
    }
   }





   else
    VAR_10[VAR_13] = VAR_1;
  }

  else if (*(*VAR_12) == '.')
  {
   *VAR_14++ = *(*VAR_12)++;
   while (FUNC_2((unsigned char) *(*VAR_12)))
    *VAR_14++ = *(*VAR_12)++;

   VAR_10[VAR_13] = VAR_1;
  }




  else if (FUNC_1((unsigned char) *(*VAR_12)))
  {
   VAR_10[VAR_13] = VAR_3;
   *VAR_14++ = FUNC_5((unsigned char) *(*VAR_12)++);
   while (FUNC_1((unsigned char) *(*VAR_12)))
    *VAR_14++ = FUNC_5((unsigned char) *(*VAR_12)++);





   if (*(*VAR_12) == '-' || *(*VAR_12) == '/' || *(*VAR_12) == '.')
   {
    char *VAR_16 = (*VAR_12);

    VAR_10[VAR_13] = VAR_0;
    *VAR_14++ = *(*VAR_12)++;
    while (FUNC_2((unsigned char) *(*VAR_12)) || *(*VAR_12) == *VAR_16)
     *VAR_14++ = *(*VAR_12)++;
   }
  }

  else if (FUNC_4((unsigned char) *(*VAR_12)))
  {
   (*VAR_12)++;
   continue;
  }

  else if (*(*VAR_12) == '+' || *(*VAR_12) == '-')
  {
   *VAR_14++ = *(*VAR_12)++;

   while (FUNC_4((unsigned char) *(*VAR_12)))
    (*VAR_12)++;

   if (FUNC_2((unsigned char) *(*VAR_12)))
   {
    VAR_10[VAR_13] = VAR_5;
    *VAR_14++ = *(*VAR_12)++;
    while (FUNC_2((unsigned char) *(*VAR_12)) ||
        (*(*VAR_12) == ':') || (*(*VAR_12) == '.'))
     *VAR_14++ = *(*VAR_12)++;
   }

   else if (FUNC_1((unsigned char) *(*VAR_12)))
   {
    VAR_10[VAR_13] = VAR_2;
    *VAR_14++ = FUNC_5((unsigned char) *(*VAR_12)++);
    while (FUNC_1((unsigned char) *(*VAR_12)))
     *VAR_14++ = FUNC_5((unsigned char) *(*VAR_12)++);
   }

   else
    return -1;
  }

  else if (FUNC_3((unsigned char) *(*VAR_12)))
  {
   (*VAR_12)++;
   continue;

  }

  else
   return -1;


  *VAR_14++ = '\0';
  VAR_13++;
 }

 *VAR_11 = VAR_13;

 return 0;
}
