
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_3__ {char* bufstart; char* bufptr; char* bufend; int nchars; int failed; int * stream; } ;
typedef TYPE_1__ PrintfTarget ;


 int FUNC_0 (TYPE_1__*,char const*,int ) ;

int
FUNC_1(char *VAR_0, size_t VAR_1, const char *VAR_2, va_list VAR_3)
{
 PrintfTarget VAR_4;
 char VAR_5[1];







 if (VAR_1 == 0)
 {
  VAR_0 = VAR_5;
  VAR_1 = 1;
 }
 VAR_4.bufstart = VAR_4.bufptr = VAR_0;
 VAR_4.bufend = VAR_0 + VAR_1 - 1;
 VAR_4.stream = ((void*)0);
 VAR_4.nchars = 0;
 VAR_4.failed = 0;
 FUNC_0(&VAR_4, VAR_2, VAR_3);
 *(VAR_4.bufptr) = '\0';
 return VAR_4.failed ? -1 : (VAR_4.bufptr - VAR_4.bufstart
         + VAR_4.nchars);
}
