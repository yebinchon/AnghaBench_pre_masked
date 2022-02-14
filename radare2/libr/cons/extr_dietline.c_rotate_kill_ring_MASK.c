
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t index; scalar_t__* data; } ;
struct TYPE_6__ {scalar_t__ kill_ring_ptr; TYPE_2__* kill_ring; int clipboard; TYPE_1__ buffer; } ;
struct TYPE_5__ {scalar_t__ length; } ;


 TYPE_3__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3() {
 if (VAR_1) {
  VAR_0.buffer.index -= FUNC_2 (FUNC_1 (VAR_0.kill_ring, VAR_0.kill_ring_ptr));
  VAR_0.buffer.data[VAR_0.buffer.index] = 0;
  VAR_0.kill_ring_ptr -= 1;
  if (VAR_0.kill_ring_ptr < 0) {
   VAR_0.kill_ring_ptr = VAR_0.kill_ring->length - 1;
  }
  VAR_0.clipboard = FUNC_1 (VAR_0.kill_ring, VAR_0.kill_ring_ptr);
  FUNC_0 ();
 }
}
