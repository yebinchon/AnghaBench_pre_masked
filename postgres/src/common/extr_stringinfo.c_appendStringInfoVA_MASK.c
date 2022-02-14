
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_3__ {int maxlen; int len; char* data; } ;
typedef TYPE_1__* StringInfo ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (char*,size_t,char const*,int ) ;

int
FUNC_2(StringInfo VAR_0, const char *VAR_1, va_list VAR_2)
{
 int VAR_3;
 size_t VAR_4;

 FUNC_0(VAR_0 != ((void*)0));






 VAR_3 = VAR_0->maxlen - VAR_0->len;
 if (VAR_3 < 16)
  return 32;

 VAR_4 = FUNC_1(VAR_0->data + VAR_0->len, (size_t) VAR_3, VAR_1, VAR_2);

 if (VAR_4 < (size_t) VAR_3)
 {

  VAR_0->len += (int) VAR_4;
  return 0;
 }


 VAR_0->data[VAR_0->len] = '\0';






 return (int) VAR_4;
}
