
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
struct async_iorequest {scalar_t__ fd; scalar_t__ major; struct async_iorequest* next; int id; int device; } ;
struct TYPE_5__ {struct async_iorequest* iorequest; } ;
typedef TYPE_1__ RDPCLIENT ;
typedef int NTSTATUS ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 struct async_iorequest* FUNC_0 (TYPE_1__*,struct async_iorequest*,struct async_iorequest*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,scalar_t__,int *,int) ;

BOOL
FUNC_2(RDPCLIENT * VAR_2, uint32 VAR_3, uint32 VAR_4, NTSTATUS VAR_5)
{
 uint32 VAR_6;
 struct async_iorequest *VAR_7;
 struct async_iorequest *VAR_8;

 VAR_7 = VAR_2->iorequest;
 VAR_8 = ((void*)0);
 while (VAR_7 != ((void*)0))
 {


  if ((VAR_7->fd == VAR_3) && (VAR_4 == 0 || VAR_7->major == VAR_4))
  {
   VAR_6 = 0;
   FUNC_1(VAR_2, VAR_7->device, VAR_7->id, VAR_5, VAR_6, (uint8 *) "",
           1);

   VAR_7 = FUNC_0(VAR_2, VAR_8, VAR_7);
   return VAR_1;
  }

  VAR_8 = VAR_7;
  VAR_7 = VAR_7->next;
 }

 return VAR_0;
}
