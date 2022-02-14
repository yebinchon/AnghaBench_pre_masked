
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static unsigned
FUNC_4(const char *VAR_3, unsigned VAR_4, char *VAR_5)
{
 const char *VAR_6 = VAR_3 + VAR_4,
      *VAR_7 = VAR_3;
 char *VAR_8 = VAR_5;
 char VAR_9;
 int VAR_10 = 0;
 uint32 VAR_11 = 0;
 int VAR_12 = 0,
    VAR_13 = 0;

 while (VAR_7 < VAR_6)
 {
  VAR_9 = *VAR_7++;

  if (VAR_9 == ' ' || VAR_9 == '\t' || VAR_9 == '\n' || VAR_9 == '\r')
   continue;

  if (VAR_9 == '=')
  {

   if (!VAR_13)
   {
    if (VAR_12 == 2)
     VAR_13 = 1;
    else if (VAR_12 == 3)
     VAR_13 = 2;
    else
     FUNC_0(VAR_1,
       (FUNC_1(VAR_0),
        FUNC_3("unexpected \"=\" while decoding base64 sequence")));
   }
   VAR_10 = 0;
  }
  else
  {
   VAR_10 = -1;
   if (VAR_9 > 0 && VAR_9 < 127)
    VAR_10 = VAR_2[(unsigned char) VAR_9];
   if (VAR_10 < 0)
    FUNC_0(VAR_1,
      (FUNC_1(VAR_0),
       FUNC_3("invalid symbol \"%c\" while decoding base64 sequence", (int) VAR_9)));
  }

  VAR_11 = (VAR_11 << 6) + VAR_10;
  VAR_12++;
  if (VAR_12 == 4)
  {
   *VAR_8++ = (VAR_11 >> 16) & 255;
   if (VAR_13 == 0 || VAR_13 > 1)
    *VAR_8++ = (VAR_11 >> 8) & 255;
   if (VAR_13 == 0 || VAR_13 > 2)
    *VAR_8++ = VAR_11 & 255;
   VAR_11 = 0;
   VAR_12 = 0;
  }
 }

 if (VAR_12 != 0)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("invalid base64 end sequence"),
     FUNC_2("Input data is missing padding, is truncated, or is otherwise corrupted.")));

 return VAR_8 - VAR_5;
}
