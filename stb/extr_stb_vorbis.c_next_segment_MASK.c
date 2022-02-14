
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int last_seg; int next_seg; int last_seg_which; int segment_count; int page_flag; int* segments; int bytes_in_seg; } ;
typedef TYPE_1__ vorb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(vorb *VAR_3)
{
   int VAR_4;
   if (VAR_3->last_seg) return 0;
   if (VAR_3->next_seg == -1) {
      VAR_3->last_seg_which = VAR_3->segment_count-1;
      if (!FUNC_2(VAR_3)) { VAR_3->last_seg = 1; return 0; }
      if (!(VAR_3->page_flag & VAR_0)) return FUNC_1(VAR_3, VAR_2);
   }
   VAR_4 = VAR_3->segments[VAR_3->next_seg++];
   if (VAR_4 < 255) {
      VAR_3->last_seg = VAR_1;
      VAR_3->last_seg_which = VAR_3->next_seg-1;
   }
   if (VAR_3->next_seg >= VAR_3->segment_count)
      VAR_3->next_seg = -1;
   FUNC_0(VAR_3->bytes_in_seg == 0);
   VAR_3->bytes_in_seg = VAR_4;
   return VAR_4;
}
