
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int errNo; int magic; } ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (TYPE_1__* const,char const* const,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ) ;

int
FUNC_2(const FTPCIPtr VAR_6, const char *const VAR_7)
{
 int VAR_8, VAR_9;

 if (VAR_6 == ((void*)0))
  return (VAR_1);
 if (FUNC_1(VAR_6->magic, VAR_4))
  return (VAR_0);

 if ((VAR_7 == ((void*)0)) || (VAR_7[0] == '\0')) {
  VAR_6->errNo = VAR_3;
  return (VAR_3);
 }

 VAR_8 = FUNC_0(VAR_6, VAR_7, &VAR_9);
 if ((VAR_8 == VAR_5) || (VAR_8 == VAR_2)) {
  VAR_8 = 0;
  if (VAR_9 == 'd')
   VAR_8 = 1;
 }
 return (VAR_8);
}
