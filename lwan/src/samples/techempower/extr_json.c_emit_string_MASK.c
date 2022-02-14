
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {char* cur; } ;
typedef TYPE_1__ SB ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int,int *,int *) ;
 int FUNC_3 (char const*,int*) ;
 int FUNC_4 (char const*) ;
 size_t FUNC_5 (char const*) ;
 int FUNC_6 (char*,int ) ;

void FUNC_7(SB *VAR_0, const char *VAR_1)
{
 const char *VAR_2 = VAR_1;
 char *VAR_3;

 FUNC_0(FUNC_4(VAR_1));





 FUNC_1(VAR_0, 14);
 VAR_3 = VAR_0->cur;

 *VAR_3++ = '"';
 while (*VAR_2 != 0) {
  char VAR_4 = *VAR_2++;


  switch (VAR_4) {
   case '"':
    *VAR_3++ = '\\';
    *VAR_3++ = '"';
    break;
   case '\\':
    *VAR_3++ = '\\';
    *VAR_3++ = '\\';
    break;
   case '\b':
    *VAR_3++ = '\\';
    *VAR_3++ = 'b';
    break;
   case '\f':
    *VAR_3++ = '\\';
    *VAR_3++ = 'f';
    break;
   case '\n':
    *VAR_3++ = '\\';
    *VAR_3++ = 'n';
    break;
   case '\r':
    *VAR_3++ = '\\';
    *VAR_3++ = 'r';
    break;
   case '\t':
    *VAR_3++ = '\\';
    *VAR_3++ = 't';
    break;
   default: {
    size_t VAR_5;

    VAR_2--;
    VAR_5 = FUNC_5(VAR_2);

    if (VAR_5 == 0) {
     FUNC_0(0);
     *VAR_3++ = (char)0xEF;
     *VAR_3++ = (char)0xBF;
     *VAR_3++ = (char)0xBD;
     VAR_2++;
    } else if (VAR_4 < 0x1F) {

     uint32_t VAR_6;

     VAR_2 += FUNC_3(VAR_2, &VAR_6);

     if (VAR_6 <= 0xFFFF) {
      *VAR_3++ = '\\';
      *VAR_3++ = 'u';
      VAR_3 += FUNC_6(VAR_3, (uint16_t)VAR_6);
     } else {

      uint16_t VAR_7, VAR_8;
      FUNC_0(VAR_6 <= 0x10FFFF);
      FUNC_2(VAR_6, &VAR_7, &VAR_8);
      *VAR_3++ = '\\';
      *VAR_3++ = 'u';
      VAR_3 += FUNC_6(VAR_3, VAR_7);
      *VAR_3++ = '\\';
      *VAR_3++ = 'u';
      VAR_3 += FUNC_6(VAR_3, VAR_8);
     }
    } else {

     while (VAR_5--)
      *VAR_3++ = *VAR_2++;
    }

    break;
   }
  }





  VAR_0->cur = VAR_3;
  FUNC_1(VAR_0, 14);
  VAR_3 = VAR_0->cur;
 }
 *VAR_3++ = '"';

 VAR_0->cur = VAR_3;
}
