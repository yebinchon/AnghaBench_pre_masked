
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct snprintf_buffer {char* p; size_t s; size_t n; } ;


 int FUNC_0 (int *,struct snprintf_buffer*,int ,char const*,int ) ;
 int VAR_0 ;

size_t
FUNC_1(char *VAR_1, size_t VAR_2, const char *VAR_3, va_list VAR_4)
{
 struct snprintf_buffer VAR_5;
 VAR_5.p = VAR_1;
 VAR_5.s = VAR_2 > 0 ? VAR_2 - 1 : 0;
 VAR_5.n = 0;


 FUNC_0(((void*)0), &VAR_5, VAR_0, VAR_3, VAR_4);
 if (VAR_2 > 0)
  VAR_5.p[VAR_5.n < VAR_2 ? VAR_5.n : VAR_2 - 1] = '\0';

 return VAR_5.n;
}
