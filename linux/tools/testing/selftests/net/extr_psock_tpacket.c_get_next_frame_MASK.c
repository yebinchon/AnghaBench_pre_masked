
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void uint8_t ;
struct TYPE_4__ {int tp_frame_size; } ;
struct ring {int version; TYPE_2__ req3; TYPE_1__* rd; } ;
struct TYPE_3__ {void* iov_base; } ;





 int FUNC_0 (int) ;

__attribute__((used)) static inline void *FUNC_1(struct ring *VAR_0, int VAR_1)
{
 uint8_t *VAR_2 = VAR_0->rd[0].iov_base;

 switch (VAR_0->version) {
 case 130:
 case 129:
  return VAR_0->rd[VAR_1].iov_base;
 case 128:
  return VAR_2 + (VAR_1 * VAR_0->req3.tp_frame_size);
 default:
  FUNC_0(1);
 }
}
