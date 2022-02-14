
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_value ;
typedef int strm_int ;
typedef enum csv_type { ____Placeholder_csv_type } csv_type ;





 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (char const*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (double) ;
 int FUNC_3 (long) ;

__attribute__((used)) static strm_value
FUNC_4(const char* VAR_2, strm_int VAR_3, enum csv_type VAR_4)
{
  const char *VAR_5 = VAR_2;
  const char *VAR_6 = VAR_5+VAR_3;
  long VAR_7=0;
  double VAR_8, VAR_9 = 1;
  enum csv_type VAR_10 = VAR_0;

  switch (VAR_4) {
  case 128:
  case 129:

    while (FUNC_1((int)*VAR_5)) VAR_5++;


    while (VAR_5<VAR_6) {
      switch (*VAR_5) {
      case '0': case '1': case '2': case '3': case '4':
      case '5': case '6': case '7': case '8': case '9':
        if (VAR_10 == VAR_0) VAR_10 = 130;
        VAR_7 = VAR_7*10 + (*VAR_5 - '0');
        VAR_9 *= 10;
        break;
      case '.':
        if (VAR_10 == 131) {
          VAR_10 = VAR_1;
          break;
        }
        VAR_10 = 131;
        VAR_8 = VAR_7;
        VAR_7 = 0;
        VAR_9 = 1;
        break;
      default:
        VAR_10 = 128;
        break;
      }
      VAR_5++;
    }
  default:
    break;
  }

  switch (VAR_10) {
  case 130:
    return FUNC_3(VAR_7);
  case 131:
    VAR_8 += VAR_7 / VAR_9;
    return FUNC_2(VAR_8);
  default:
    return FUNC_0(VAR_2, VAR_3, VAR_4);
  }

}
