
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_int ;



__attribute__((used)) static strm_int
FUNC_0(char* VAR_0, strm_int VAR_1)
{
  char* VAR_2 = VAR_0;
  char* VAR_3 = VAR_2 + VAR_1;
  char* VAR_4 = VAR_0;

  while (VAR_2 < VAR_3) {
    switch (*VAR_2) {
    case '\\':
      VAR_2++;
      if (VAR_2 == VAR_3) break;
      switch (*VAR_2) {
      case 'n':
        *VAR_4++ = '\n'; break;
      case 'r':
        *VAR_4++ = '\r'; break;
      case 't':
        *VAR_4++ = '\t'; break;
      case 'e':
        *VAR_4++ = 033; break;
      case '0':
        *VAR_4++ = '\0'; break;
      case 'x':
        {
          unsigned char VAR_5 = 0;
          char* VAR_6 = VAR_2+3;

          VAR_2++;
          while (VAR_2 < VAR_3 && VAR_2 < VAR_6) {
            switch (*VAR_2) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
              VAR_5 *= 16;
              VAR_5 += *VAR_2 - '0';
              break;
            case 'a': case 'b': case 'c':
            case 'd': case 'e': case 'f':
              VAR_5 *= 16;
              VAR_5 += *VAR_2 - 'a' + 10;
              break;
            default:
              VAR_6 = VAR_2;
              break;
            }
            VAR_2++;
          }
          *VAR_4++ = (char)VAR_5;
          VAR_2--;
        }
        break;
      default:
        *VAR_4++ = *VAR_2; break;
      }
      VAR_2++;
      break;
    default:
      *VAR_4++ = *VAR_2++;
      break;
    }
  }
  return (strm_int)(VAR_4 - VAR_0);
}
