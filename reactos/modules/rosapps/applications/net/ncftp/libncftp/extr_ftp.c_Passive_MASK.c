
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct sockaddr_in {int sin_port; int sin_addr; } ;
struct TYPE_15__ {int errNo; } ;
struct TYPE_13__ {TYPE_1__* first; } ;
struct TYPE_14__ {int codeType; TYPE_2__ msg; } ;
struct TYPE_12__ {char* line; } ;
typedef TYPE_3__* ResponsePtr ;
typedef TYPE_4__* FTPCIPtr ;


 int FUNC_0 (TYPE_4__* const,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__* const,int ,char*,...) ;
 TYPE_3__* FUNC_2 () ;
 int FUNC_3 (TYPE_4__* const,TYPE_3__*,char*) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,unsigned char*,size_t) ;
 int FUNC_6 (char*,char*,int*,int*,int*,int*,int*,int*) ;

__attribute__((used)) static int
FUNC_7(const FTPCIPtr VAR_4, struct sockaddr_in *VAR_5, int *VAR_6)
{
 ResponsePtr VAR_7;
 int VAR_8[6], VAR_9;
 unsigned char VAR_10[6];
 char *VAR_11;
 int VAR_12;

 VAR_7 = FUNC_2();
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_4, VAR_0, "Malloc failed.\n");
  VAR_4->errNo = VAR_1;
  return (VAR_4->errNo);
 }

 VAR_12 = FUNC_3(VAR_4, VAR_7, "PASV");
 if (VAR_12 < 0)
  goto done;

 if (VAR_7->codeType != 2) {

  VAR_4->errNo = VAR_12 = VAR_2;
  goto done;
 }
 for (VAR_11 = VAR_7->msg.first->line; ; VAR_11++) {
  if (*VAR_11 == '\0') {
   FUNC_1(VAR_4, VAR_0, "Cannot parse PASV response: %s\n", VAR_7->msg.first->line);
   goto done;
  }
  if (FUNC_4((int) *VAR_11))
   break;
 }

 if (FUNC_6(VAR_11, "%d,%d,%d,%d,%d,%d",
   &VAR_8[0], &VAR_8[1], &VAR_8[2], &VAR_8[3], &VAR_8[4], &VAR_8[5]) != 6) {
  FUNC_1(VAR_4, VAR_0, "Cannot parse PASV response: %s\n", VAR_7->msg.first->line);
  goto done;
 }

 for (VAR_9=0, *VAR_6 = 0; VAR_9<6; VAR_9++) {




  if ((VAR_8[VAR_9] < 0) || (VAR_8[VAR_9] > 255))
   *VAR_6 = *VAR_6 + 1;
  VAR_10[VAR_9] = (unsigned char) (VAR_8[VAR_9] & 0xff);
 }

 (void) FUNC_5(&VAR_5->sin_addr, &VAR_10[0], (size_t) 4);
 (void) FUNC_5(&VAR_5->sin_port, &VAR_10[4], (size_t) 2);

 VAR_12 = VAR_3;
done:
 FUNC_0(VAR_4, VAR_7);
 return (VAR_12);
}
