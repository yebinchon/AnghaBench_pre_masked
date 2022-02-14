
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* buf; int errNo; int bufSize; } ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (TYPE_1__* const,int ,char*) ;
 scalar_t__ FUNC_1 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(const FTPCIPtr VAR_3)
{
 char *VAR_4;





 if (VAR_3->buf == ((void*)0)) {
  VAR_4 = (char *) FUNC_1((size_t) 1, VAR_3->bufSize);
  if (VAR_4 == ((void*)0)) {
   FUNC_0(VAR_3, VAR_0, "Malloc failed.\n");
   VAR_3->errNo = VAR_1;
   return (VAR_1);
  }
  VAR_3->buf = VAR_4;
 }
 return (VAR_2);
}
