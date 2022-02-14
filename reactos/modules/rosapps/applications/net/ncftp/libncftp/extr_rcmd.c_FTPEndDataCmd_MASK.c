
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int errNo; int magic; } ;
struct TYPE_11__ {int codeType; } ;
typedef TYPE_1__* ResponsePtr ;
typedef TYPE_2__* FTPCIPtr ;


 int FUNC_0 (TYPE_2__* const) ;
 int FUNC_1 (TYPE_2__* const,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__* const,int ,char*) ;
 int FUNC_3 (TYPE_2__* const,TYPE_1__*) ;
 TYPE_1__* FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ,int ) ;

int
FUNC_6(const FTPCIPtr VAR_7, int VAR_8)
{
 int VAR_9;
 int VAR_10;
 ResponsePtr VAR_11;

 if (VAR_7 == ((void*)0))
  return (VAR_2);
 if (FUNC_5(VAR_7->magic, VAR_5))
  return (VAR_1);

 FUNC_0(VAR_7);
 VAR_9 = VAR_6;
 if (VAR_8) {





  VAR_11 = FUNC_4();
  if (VAR_11 == ((void*)0)) {
   FUNC_2(VAR_7, VAR_0, "Malloc failed.\n");
   VAR_7->errNo = VAR_4;
   VAR_9 = VAR_7->errNo;
   return (VAR_9);
  }
  VAR_9 = FUNC_3(VAR_7, VAR_11);
  if (VAR_9 < 0)
   return (VAR_9);
  VAR_10 = VAR_11->codeType;
  FUNC_1(VAR_7, VAR_11);
  if (VAR_10 != 2) {
   VAR_7->errNo = VAR_3;
   VAR_9 = VAR_7->errNo;
  } else {
   VAR_9 = VAR_6;
  }
 }
 return (VAR_9);
}
