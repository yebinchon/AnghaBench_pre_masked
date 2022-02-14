
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {void* errNo; } ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (TYPE_1__* const,int ,char*) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int*) ;
 int VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static int
FUNC_2(const FTPCIPtr VAR_2, int VAR_3, struct sockaddr_in *VAR_4)
{
 int VAR_5 = (int) sizeof (struct sockaddr_in);
 int VAR_6 = 0;

 if (FUNC_1(VAR_3, (struct sockaddr *)VAR_4, &VAR_5) < 0) {
  FUNC_0(VAR_2, VAR_0, "Could not get socket name.\n");
  VAR_2->errNo = VAR_1;
  VAR_6 = VAR_1;
 }
 return (VAR_6);
}
