
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_4__ {int len; scalar_t__ data; struct TYPE_4__* next; } ;
struct TYPE_3__ {scalar_t__ bytes_free; int total_len; TYPE_2__* tail; int num_chunks; } ;
typedef int StateFileChunk ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (char*,void const*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 TYPE_2__* FUNC_4 (int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_5(const void *VAR_1, uint32 VAR_2)
{
 uint32 VAR_3 = FUNC_0(VAR_2);

 if (VAR_3 > VAR_0.bytes_free)
 {
  VAR_0.tail->next = FUNC_4(sizeof(StateFileChunk));
  VAR_0.tail = VAR_0.tail->next;
  VAR_0.tail->len = 0;
  VAR_0.tail->next = ((void*)0);
  VAR_0.num_chunks++;

  VAR_0.bytes_free = FUNC_1(VAR_3, 512);
  VAR_0.tail->data = FUNC_3(VAR_0.bytes_free);
 }

 FUNC_2(((char *) VAR_0.tail->data) + VAR_0.tail->len, VAR_1, VAR_2);
 VAR_0.tail->len += VAR_3;
 VAR_0.bytes_free -= VAR_3;
 VAR_0.total_len += VAR_3;
}
