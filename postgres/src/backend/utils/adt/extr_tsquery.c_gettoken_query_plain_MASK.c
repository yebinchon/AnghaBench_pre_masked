
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ts_tokentype ;
typedef int int8 ;
typedef scalar_t__ int16 ;
struct TYPE_3__ {char* buf; int count; } ;
typedef TYPE_1__* TSQueryParserState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static ts_tokentype
FUNC_1(TSQueryParserState VAR_2, int8 *VAR_3,
      int *VAR_4, char **VAR_5,
      int16 *VAR_6, bool *VAR_7)
{
 *VAR_6 = 0;
 *VAR_7 = 0;

 if (*VAR_2->buf == '\0')
  return VAR_0;

 *VAR_5 = VAR_2->buf;
 *VAR_4 = FUNC_0(VAR_2->buf);
 VAR_2->buf += *VAR_4;
 VAR_2->count++;
 return VAR_1;
}
