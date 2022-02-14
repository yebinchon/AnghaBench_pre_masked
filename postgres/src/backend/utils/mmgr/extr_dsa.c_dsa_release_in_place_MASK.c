
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ dsm_handle ;
struct TYPE_3__ {int magic; } ;
struct TYPE_4__ {int handle; scalar_t__ refcnt; int high_segment_index; scalar_t__* segment_handles; int lock; TYPE_1__ segment_header; } ;
typedef TYPE_2__ dsa_area_control ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;

void
FUNC_4(void *VAR_3)
{
 dsa_area_control *VAR_4 = (dsa_area_control *) VAR_3;
 int VAR_5;

 FUNC_1(&VAR_4->lock, VAR_2);
 FUNC_0(VAR_4->segment_header.magic ==
     (VAR_0 ^ VAR_4->handle ^ 0));
 FUNC_0(VAR_4->refcnt > 0);
 if (--VAR_4->refcnt == 0)
 {
  for (VAR_5 = 0; VAR_5 <= VAR_4->high_segment_index; ++VAR_5)
  {
   dsm_handle VAR_6;

   VAR_6 = VAR_4->segment_handles[VAR_5];
   if (VAR_6 != VAR_1)
    FUNC_3(VAR_6);
  }
 }
 FUNC_2(&VAR_4->lock);
}
