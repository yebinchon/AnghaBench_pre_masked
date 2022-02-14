
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
typedef int buffer ;
struct TYPE_4__ {char* bufstart; char* bufptr; char* bufend; int nchars; int failed; int * stream; } ;
typedef TYPE_1__ PrintfTarget ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char const*,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(FILE *VAR_2, const char *VAR_3, va_list VAR_4)
{
 PrintfTarget VAR_5;
 char VAR_6[1024];

 if (VAR_2 == ((void*)0))
 {
  VAR_1 = VAR_0;
  return -1;
 }
 VAR_5.bufstart = VAR_5.bufptr = VAR_6;
 VAR_5.bufend = VAR_6 + sizeof(VAR_6);
 VAR_5.stream = VAR_2;
 VAR_5.nchars = 0;
 VAR_5.failed = 0;
 FUNC_0(&VAR_5, VAR_3, VAR_4);

 FUNC_1(&VAR_5);
 return VAR_5.failed ? -1 : VAR_5.nchars;
}
