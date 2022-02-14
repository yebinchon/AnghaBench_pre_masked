
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef void* uint32 ;
struct async_iorequest {scalar_t__ fd; void* offset; int * buffer; void* itv_timeout; void* timeout; int * fns; scalar_t__ partial_len; void* length; void* major; void* id; void* device; struct async_iorequest* next; } ;
struct TYPE_3__ {struct async_iorequest* iorequest; } ;
typedef TYPE_1__ RDPCLIENT ;
typedef int DEVICE_FNS ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static BOOL
FUNC_1(RDPCLIENT * VAR_2, uint32 VAR_3, uint32 VAR_4, uint32 VAR_5, uint32 VAR_6, uint32 VAR_7,
      DEVICE_FNS * VAR_8, uint32 VAR_9, uint32 VAR_10, uint8 * VAR_11,
      uint32 VAR_12)
{
 struct async_iorequest *VAR_13;

 if (VAR_2->iorequest == ((void*)0))
 {
  VAR_2->iorequest = (struct async_iorequest *) FUNC_0(sizeof(struct async_iorequest));
  if (!VAR_2->iorequest)
   return VAR_0;
  VAR_2->iorequest->fd = 0;
  VAR_2->iorequest->next = ((void*)0);
 }

 VAR_13 = VAR_2->iorequest;

 while (VAR_13->fd != 0)
 {

  if (VAR_13->next == ((void*)0))
  {
   VAR_13->next =
    (struct async_iorequest *) FUNC_0(sizeof(struct async_iorequest));
   if (!VAR_13->next)
    return VAR_0;
   VAR_13->next->fd = 0;
   VAR_13->next->next = ((void*)0);
  }
  VAR_13 = VAR_13->next;
 }
 VAR_13->device = VAR_3;
 VAR_13->fd = VAR_4;
 VAR_13->id = VAR_5;
 VAR_13->major = VAR_6;
 VAR_13->length = VAR_7;
 VAR_13->partial_len = 0;
 VAR_13->fns = VAR_8;
 VAR_13->timeout = VAR_9;
 VAR_13->itv_timeout = VAR_10;
 VAR_13->buffer = VAR_11;
 VAR_13->offset = VAR_12;
 return VAR_1;
}
