
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct servent {int s_port; } ;
struct TYPE_4__ {unsigned int defaultPort; int init; int socksInit; int magic; } ;
typedef int FTPLibraryInfo ;
typedef TYPE_1__* FTPLIPtr ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 struct servent* FUNC_2 (char*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__* const,int ,int) ;
 scalar_t__ FUNC_4 (int ) ;

int
FUNC_5(const FTPLIPtr VAR_4)
{
 struct servent *VAR_5;

 if (VAR_4 == ((void*)0))
  return (VAR_1);

 (void) FUNC_3(VAR_4, 0, sizeof(FTPLibraryInfo));
 if ((VAR_5 = FUNC_2("ftp", "tcp")) == ((void*)0))
  VAR_4->defaultPort = (unsigned int) VAR_0;
 else
  VAR_4->defaultPort = (unsigned int) FUNC_4(VAR_5->s_port);

 VAR_4->init = 1;
 (void) FUNC_1(VAR_4->magic, VAR_2);
 return (VAR_3);
}
