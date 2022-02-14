
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int magic; } ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (TYPE_1__* const,char*,char const* const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ) ;

int
FUNC_2(const FTPCIPtr VAR_5, const char *const VAR_6)
{
 if (VAR_5 == ((void*)0))
  return (VAR_1);
 if (FUNC_1(VAR_5->magic, VAR_3))
  return (VAR_0);
 if ((VAR_6 == ((void*)0)) || (VAR_6[0] == '\0'))
  return (VAR_1);
 if (FUNC_0(VAR_5, "SITE UMASK %s", VAR_6) == 2)
  return (VAR_4);
 return (VAR_2);
}
