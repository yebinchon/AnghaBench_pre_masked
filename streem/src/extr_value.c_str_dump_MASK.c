
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_string ;
typedef int strm_int ;


 int FUNC_0 (int) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static strm_string
FUNC_6(strm_string VAR_0, strm_int VAR_1)
{
  char *VAR_2 = FUNC_1(VAR_1);
  char *VAR_3 = VAR_2;
  char *VAR_4 = (char*)FUNC_5(VAR_0);
  char *VAR_5 = VAR_4 + FUNC_3(VAR_0);

  *VAR_3++ = '"';
  while (VAR_4<VAR_5) {
    switch (*VAR_4) {
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
    case 033:
      *VAR_3++ = '\\';
      *VAR_3++ = 'e';
      break;
    case '\0':
      *VAR_3++ = '\\';
      *VAR_3++ = '0';
      break;
    case '"':
      *VAR_3++ = '\\';
      *VAR_3++ = '"';
      break;
    default:
      if (FUNC_0((int)*VAR_4) || (*VAR_4&0xff) > 0x7f) {
        *VAR_3++ = (*VAR_4&0xff);
      }
      else {
        FUNC_2(VAR_3, "\\x%02x", (int)*VAR_4&0xff);
        VAR_3+=4;
      }
    }
    VAR_4++;
  }
  *VAR_3++ = '"';

  return FUNC_4(VAR_2, VAR_1);
}
