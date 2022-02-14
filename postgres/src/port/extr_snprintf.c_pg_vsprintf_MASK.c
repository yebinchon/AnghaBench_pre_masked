
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_3__ {char* bufstart; char* bufptr; int nchars; int failed; int * stream; int * bufend; } ;
typedef TYPE_1__ PrintfTarget ;


 int FUNC_0 (TYPE_1__*,char const*,int ) ;

int
FUNC_1(char *VAR_0, const char *VAR_1, va_list VAR_2)
{
 PrintfTarget VAR_3;

 VAR_3.bufstart = VAR_3.bufptr = VAR_0;
 VAR_3.bufend = ((void*)0);
 VAR_3.stream = ((void*)0);
 VAR_3.nchars = 0;
 VAR_3.failed = 0;
 FUNC_0(&VAR_3, VAR_1, VAR_2);
 *(VAR_3.bufptr) = '\0';
 return VAR_3.failed ? -1 : (VAR_3.bufptr - VAR_3.bufstart
         + VAR_3.nchars);
}
