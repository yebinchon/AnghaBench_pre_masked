
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_in {int sin_port; int sin_addr; } ;
struct TYPE_6__ {int errNo; } ;
typedef int * ResponsePtr ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (TYPE_1__* const,int *) ;
 int FUNC_1 (TYPE_1__* const,int ,char*) ;
 int * FUNC_2 () ;
 int FUNC_3 (TYPE_1__* const,int *,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_5(const FTPCIPtr VAR_4, struct sockaddr_in *VAR_5)
{
 char *VAR_6, *VAR_7;
 int VAR_8;
 ResponsePtr VAR_9;

 VAR_9 = FUNC_2();
 if (VAR_9 == ((void*)0)) {
  FUNC_1(VAR_4, VAR_0, "Malloc failed.\n");
  VAR_4->errNo = VAR_1;
  return (VAR_4->errNo);
 }


 VAR_6 = (char *) &VAR_5->sin_addr;
 VAR_7 = (char *) &VAR_5->sin_port;





 VAR_8 = FUNC_3(VAR_4, VAR_9, "PORT %d,%d,%d,%d,%d,%d",
  (int) (((int) VAR_6[0]) & 0xff), (int) (((int) VAR_6[1]) & 0xff), (int) (((int) VAR_6[2]) & 0xff), (int) (((int) VAR_6[3]) & 0xff), (int) (((int) VAR_7[0]) & 0xff), (int) (((int) VAR_7[1]) & 0xff));

 if (VAR_8 < 0) {
  return (VAR_8);
 } else if (VAR_8 != 2) {

  FUNC_0(VAR_4, VAR_9);
  VAR_4->errNo = VAR_2;
  return (VAR_4->errNo);
 }
 FUNC_0(VAR_4, VAR_9);
 return (VAR_3);
}
