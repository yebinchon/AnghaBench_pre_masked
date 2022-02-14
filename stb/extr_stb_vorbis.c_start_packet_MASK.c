
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int next_seg; int page_flag; int last_seg; scalar_t__ bytes_in_seg; scalar_t__ packet_bytes; scalar_t__ valid_bits; } ;
typedef TYPE_1__ vorb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(vorb *VAR_4)
{
   while (VAR_4->next_seg == -1) {
      if (!FUNC_1(VAR_4)) return VAR_0;
      if (VAR_4->page_flag & VAR_1)
         return FUNC_0(VAR_4, VAR_3);
   }
   VAR_4->last_seg = VAR_0;
   VAR_4->valid_bits = 0;
   VAR_4->packet_bytes = 0;
   VAR_4->bytes_in_seg = 0;

   return VAR_2;
}
