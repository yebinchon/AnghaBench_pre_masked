
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* const magic; void* errNo; } ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (TYPE_1__* const,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (char const* const,char*) ;

int
FUNC_2(const FTPCIPtr VAR_6, const char *const VAR_7)
{
 int VAR_8;

 if (VAR_6 == ((void*)0))
  return (VAR_1);
 if (FUNC_1(VAR_6->magic, VAR_4))
  return (VAR_0);

 if (VAR_7 == ((void*)0)) {
  VAR_8 = VAR_3;
  VAR_6->errNo = VAR_3;
 } else {
  if (VAR_7[0] == '\0')
   VAR_8 = 2;
  else if (FUNC_1(VAR_7, "..") == 0)
   VAR_8 = FUNC_0(VAR_6, "CDUP");
  else
   VAR_8 = FUNC_0(VAR_6, "CWD %s", VAR_7);
  if (VAR_8 >= 0) {
   if (VAR_8 == 2) {
    VAR_8 = VAR_5;
   } else {
    VAR_8 = VAR_2;
    VAR_6->errNo = VAR_2;
   }
  }
 }
 return (VAR_8);
}
