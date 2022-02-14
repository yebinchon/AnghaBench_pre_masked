
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct async_iorequest {struct async_iorequest* next; struct async_iorequest* buffer; } ;
struct TYPE_3__ {struct async_iorequest* iorequest; } ;
typedef TYPE_1__ RDPCLIENT ;


 int FUNC_0 (struct async_iorequest*) ;

struct async_iorequest *
FUNC_1(RDPCLIENT * VAR_0, struct async_iorequest *VAR_1, struct async_iorequest *VAR_2)
{
 if (!VAR_2)
  return ((void*)0);

 if (VAR_2->buffer)
  FUNC_0(VAR_2->buffer);
 if (VAR_1)
 {
  VAR_1->next = VAR_2->next;
  FUNC_0(VAR_2);
  VAR_2 = VAR_1->next;
 }
 else
 {

  VAR_0->iorequest = VAR_2->next;
  FUNC_0(VAR_2);
  VAR_2 = ((void*)0);
 }
 return VAR_2;
}
