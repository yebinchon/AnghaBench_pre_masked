
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int overlapped ;
struct TYPE_6__ {scalar_t__ sock; } ;
struct TYPE_8__ {int disconnect_reason; TYPE_1__ tcp; } ;
struct TYPE_7__ {scalar_t__ data; scalar_t__ end; } ;
typedef TYPE_2__* STREAM ;
typedef TYPE_3__ RDPCLIENT ;
typedef int OVERLAPPED ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,scalar_t__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,scalar_t__,int,int *,int *) ;
 int FUNC_4 (int *,int ,int) ;

BOOL
FUNC_5(RDPCLIENT * VAR_4, STREAM VAR_5)
{
 int VAR_6 = (int)(VAR_5->end - VAR_5->data);
 int VAR_7 = 0;
 DWORD VAR_8;

 OVERLAPPED VAR_9;
 FUNC_4(&VAR_9, 0, sizeof(VAR_9));

 while (VAR_7 < VAR_6)
 {
  FUNC_3((HANDLE)VAR_4->tcp.sock, VAR_5->data + VAR_7, VAR_6 - VAR_7, ((void*)0), &VAR_9);

  switch(FUNC_2((HANDLE)VAR_4->tcp.sock, VAR_1, VAR_2))
  {

  case 129:
   break;


  case 128:
  default:
   VAR_4->disconnect_reason = 772;


  case 130:
   FUNC_0((HANDLE)VAR_4->tcp.sock);
   break;
  }


  if(!FUNC_1((HANDLE)VAR_4->tcp.sock, &VAR_9, &VAR_8, VAR_2))
   return VAR_0;

  VAR_7 += VAR_8;
 }

 return VAR_3;
}
