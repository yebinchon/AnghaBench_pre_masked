
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int next_seg; int page_flag; int last_seg; scalar_t__ bytes_in_seg; scalar_t__ eof; } ;
typedef TYPE_1__ vorb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(vorb *VAR_4)
{
   if (VAR_4->next_seg == -1) {
      int VAR_5 = FUNC_1(VAR_4);
      if (VAR_4->eof) return VAR_0;
      if (0x4f != VAR_5 ) return FUNC_0(VAR_4, VAR_3);
      if (0x67 != FUNC_1(VAR_4)) return FUNC_0(VAR_4, VAR_3);
      if (0x67 != FUNC_1(VAR_4)) return FUNC_0(VAR_4, VAR_3);
      if (0x53 != FUNC_1(VAR_4)) return FUNC_0(VAR_4, VAR_3);
      if (!FUNC_3(VAR_4)) return VAR_0;
      if (VAR_4->page_flag & VAR_1) {


         VAR_4->last_seg = VAR_0;
         VAR_4->bytes_in_seg = 0;
         return FUNC_0(VAR_4, VAR_2);
      }
   }
   return FUNC_2(VAR_4);
}
