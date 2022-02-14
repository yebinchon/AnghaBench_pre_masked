
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tosType ;
struct TYPE_3__ {int errNo; } ;
typedef TYPE_1__* FTPCIPtr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ,int ,char*,int) ;

int
FUNC_1(const FTPCIPtr VAR_4, int VAR_5, int VAR_6)
{



 if (FUNC_0(VAR_5, VAR_0, VAR_1, (char *) &VAR_6, (int) sizeof(VAR_6)) < 0) {

  VAR_4->errNo = VAR_2;
  return (VAR_2);
 }
 return (VAR_3);
}
