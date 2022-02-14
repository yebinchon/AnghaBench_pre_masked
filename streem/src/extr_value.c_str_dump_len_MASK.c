
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strm_string ;
typedef int strm_int ;


 int FUNC_0 (unsigned char const) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static strm_int
FUNC_3(strm_string VAR_0)
{
  strm_int VAR_1 = 2;
  const unsigned char *VAR_2 = (unsigned char*)FUNC_2(VAR_0);
  const unsigned char *VAR_3 = VAR_2 + FUNC_1(VAR_0);

  while (VAR_2 < VAR_3) {
    switch (*VAR_2) {
    case '\n': case '\r': case '\t': case '"':
      VAR_1 += 2;
      break;
    default:
      if (FUNC_0(*VAR_2) || (*VAR_2&0xff) > 0x7f) {
        VAR_1++;
      }
      else {
        VAR_1 += 3;
      }
    }
    VAR_2++;
  }
  return VAR_1;
}
