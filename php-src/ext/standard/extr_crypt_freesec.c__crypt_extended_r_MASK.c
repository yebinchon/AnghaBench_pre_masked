
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_char ;
struct php_crypt_extended_data {char* output; int initialized; } ;
typedef int keybuf ;


 char const VAR_0 ;
 char const* VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char*,char*,int ,int,struct php_crypt_extended_data*) ;
 int FUNC_3 (struct php_crypt_extended_data*) ;
 scalar_t__ FUNC_4 (char*,struct php_crypt_extended_data*) ;
 scalar_t__ FUNC_5 (int ,int ,int*,int*,int,struct php_crypt_extended_data*) ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (int,struct php_crypt_extended_data*) ;

char *
FUNC_8(const unsigned char *VAR_2, const char *VAR_3,
 struct php_crypt_extended_data *VAR_4)
{
 int VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11[2];
 u_char *VAR_12, *VAR_13;

 if (!VAR_4->initialized)
  FUNC_3(VAR_4);





 VAR_13 = (u_char *) VAR_11;
 while ((size_t)(VAR_13 - (u_char *) VAR_11) < sizeof(VAR_11)) {
  *VAR_13++ = *VAR_2 << 1;
  if (*VAR_2)
   VAR_2++;
 }
 if (FUNC_4((char *) VAR_11, VAR_4))
  return(((void*)0));

 if (*VAR_3 == VAR_0) {





  for (VAR_5 = 1, VAR_6 = 0; VAR_5 < 5; VAR_5++) {
   int VAR_14 = FUNC_1(VAR_3[VAR_5]);
   if (VAR_1[VAR_14] != VAR_3[VAR_5])
    return(((void*)0));
   VAR_6 |= VAR_14 << (VAR_5 - 1) * 6;
  }
  if (!VAR_6)
   return(((void*)0));

  for (VAR_5 = 5, VAR_7 = 0; VAR_5 < 9; VAR_5++) {
   int VAR_15 = FUNC_1(VAR_3[VAR_5]);
   if (VAR_1[VAR_15] != VAR_3[VAR_5])
    return(((void*)0));
   VAR_7 |= VAR_15 << (VAR_5 - 5) * 6;
  }

  while (*VAR_2) {



   if (FUNC_2((char *) VAR_11, (char *) VAR_11,
       0, 1, VAR_4))
    return(((void*)0));



   VAR_13 = (u_char *) VAR_11;
   while ((size_t)(VAR_13 - (u_char *) VAR_11) < sizeof(VAR_11) && *VAR_2)
    *VAR_13++ ^= *VAR_2++ << 1;

   if (FUNC_4((char *) VAR_11, VAR_4))
    return(((void*)0));
  }
  FUNC_6(VAR_4->output, VAR_3, 9);
  VAR_4->output[9] = '\0';
  VAR_12 = (u_char *) VAR_4->output + 9;
 } else {





  VAR_6 = 25;

  if (FUNC_0(VAR_3[0]) || FUNC_0(VAR_3[1]))
   return(((void*)0));

  VAR_7 = (FUNC_1(VAR_3[1]) << 6)
       | FUNC_1(VAR_3[0]);

  VAR_4->output[0] = VAR_3[0];
  VAR_4->output[1] = VAR_3[1];
  VAR_12 = (u_char *) VAR_4->output + 2;
 }
 FUNC_7(VAR_7, VAR_4);



 if (FUNC_5(0, 0, &VAR_9, &VAR_10, VAR_6, VAR_4))
  return(((void*)0));



 VAR_8 = (VAR_9 >> 8);
 *VAR_12++ = VAR_1[(VAR_8 >> 18) & 0x3f];
 *VAR_12++ = VAR_1[(VAR_8 >> 12) & 0x3f];
 *VAR_12++ = VAR_1[(VAR_8 >> 6) & 0x3f];
 *VAR_12++ = VAR_1[VAR_8 & 0x3f];

 VAR_8 = (VAR_9 << 16) | ((VAR_10 >> 16) & 0xffff);
 *VAR_12++ = VAR_1[(VAR_8 >> 18) & 0x3f];
 *VAR_12++ = VAR_1[(VAR_8 >> 12) & 0x3f];
 *VAR_12++ = VAR_1[(VAR_8 >> 6) & 0x3f];
 *VAR_12++ = VAR_1[VAR_8 & 0x3f];

 VAR_8 = VAR_10 << 2;
 *VAR_12++ = VAR_1[(VAR_8 >> 12) & 0x3f];
 *VAR_12++ = VAR_1[(VAR_8 >> 6) & 0x3f];
 *VAR_12++ = VAR_1[VAR_8 & 0x3f];
 *VAR_12 = 0;

 return(VAR_4->output);
}
