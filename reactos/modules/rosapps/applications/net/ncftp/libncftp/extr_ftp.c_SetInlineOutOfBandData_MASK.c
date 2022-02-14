
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int on ;
struct TYPE_4__ {int errNo; } ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (TYPE_1__* const,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int,int ,int ,char*,int) ;

int
FUNC_2(const FTPCIPtr VAR_5, int VAR_6)
{
 int VAR_7 = 1;

 if (FUNC_1(VAR_6, VAR_0, VAR_1, (char *) &VAR_7, (int) sizeof(VAR_7)) < 0) {
  FUNC_0(VAR_5, VAR_2, "Could not set out of band inline mode.\n");
  VAR_5->errNo = VAR_3;
  return (VAR_3);
 }
 return (VAR_4);
}
