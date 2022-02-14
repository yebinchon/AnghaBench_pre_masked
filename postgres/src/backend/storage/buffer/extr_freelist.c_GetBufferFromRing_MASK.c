
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {scalar_t__ current; scalar_t__ ring_size; scalar_t__* buffers; int current_was_in_ring; } ;
typedef int BufferDesc ;
typedef TYPE_1__* BufferAccessStrategy ;
typedef scalar_t__ Buffer ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static BufferDesc *
FUNC_5(BufferAccessStrategy VAR_1, uint32 *VAR_2)
{
 BufferDesc *VAR_3;
 Buffer VAR_4;
 uint32 VAR_5;



 if (++VAR_1->current >= VAR_1->ring_size)
  VAR_1->current = 0;






 VAR_4 = VAR_1->buffers[VAR_1->current];
 if (VAR_4 == VAR_0)
 {
  VAR_1->current_was_in_ring = 0;
  return ((void*)0);
 }
 VAR_3 = FUNC_2(VAR_4 - 1);
 VAR_5 = FUNC_3(VAR_3);
 if (FUNC_0(VAR_5) == 0
  && FUNC_1(VAR_5) <= 1)
 {
  VAR_1->current_was_in_ring = 1;
  *VAR_2 = VAR_5;
  return VAR_3;
 }
 FUNC_4(VAR_3, VAR_5);





 VAR_1->current_was_in_ring = 0;
 return ((void*)0);
}
