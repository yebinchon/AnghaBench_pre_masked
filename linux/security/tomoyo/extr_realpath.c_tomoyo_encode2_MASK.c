
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int,int ) ;

char *FUNC_1(const char *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;
 const char *VAR_5 = VAR_1;
 char *VAR_6;
 char *VAR_7;

 if (!VAR_5)
  return ((void*)0);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  const unsigned char VAR_8 = VAR_5[VAR_3];

  if (VAR_8 == '\\')
   VAR_4 += 2;
  else if (VAR_8 > ' ' && VAR_8 < 127)
   VAR_4++;
  else
   VAR_4 += 4;
 }
 VAR_4++;

 VAR_6 = FUNC_0(VAR_4 + 10, VAR_0);
 if (!VAR_6)
  return ((void*)0);
 VAR_7 = VAR_6;
 VAR_5 = VAR_1;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  const unsigned char VAR_9 = VAR_5[VAR_3];

  if (VAR_9 == '\\') {
   *VAR_6++ = '\\';
   *VAR_6++ = '\\';
  } else if (VAR_9 > ' ' && VAR_9 < 127) {
   *VAR_6++ = VAR_9;
  } else {
   *VAR_6++ = '\\';
   *VAR_6++ = (VAR_9 >> 6) + '0';
   *VAR_6++ = ((VAR_9 >> 3) & 7) + '0';
   *VAR_6++ = (VAR_9 & 7) + '0';
  }
 }
 return VAR_7;
}
