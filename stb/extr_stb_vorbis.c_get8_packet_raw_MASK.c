
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ bytes_in_seg; int packet_bytes; scalar_t__ last_seg; } ;
typedef TYPE_1__ vorb ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(vorb *VAR_1)
{
   if (!VAR_1->bytes_in_seg) {
      if (VAR_1->last_seg) return VAR_0;
      else if (!FUNC_2(VAR_1)) return VAR_0;
   }
   FUNC_0(VAR_1->bytes_in_seg > 0);
   --VAR_1->bytes_in_seg;
   ++VAR_1->packet_bytes;
   return FUNC_1(VAR_1);
}
