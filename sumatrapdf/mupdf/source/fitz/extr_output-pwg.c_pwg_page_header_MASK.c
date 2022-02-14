
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* media_class; char const* media_color; char const* media_type; char const* output_type; int advance_distance; int advance_media; int collate; int cut_media; int duplex; int insert_sheet; int jog; int leading_edge; int manual_feed; int media_position; int media_weight; int mirror_print; int negative_print; int num_copies; int orientation; int output_face_up; int separations; int tray_switch; int tumble; int media_type_num; int compression; int row_count; int row_feed; int row_step; char const* rendering_intent; char const* page_size_name; } ;
typedef TYPE_1__ fz_pwg_options ;
typedef int fz_output ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int *,char const*,int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_1, fz_output *VAR_2, const fz_pwg_options *VAR_3,
  int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 static const char VAR_9[64] = { 0 };
 int VAR_10;


 FUNC_1(VAR_1, VAR_2, VAR_3 ? VAR_3->media_class : VAR_9, 64);
 FUNC_1(VAR_1, VAR_2, VAR_3 ? VAR_3->media_color : VAR_9, 64);
 FUNC_1(VAR_1, VAR_2, VAR_3 ? VAR_3->media_type : VAR_9, 64);
 FUNC_1(VAR_1, VAR_2, VAR_3 ? VAR_3->output_type : VAR_9, 64);
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->advance_distance : 0);
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->advance_media : 0);
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->collate : 0);
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->cut_media : 0);
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->duplex : 0);
 FUNC_2(VAR_1, VAR_2, VAR_4);
 FUNC_2(VAR_1, VAR_2, VAR_5);


 for (VAR_10=284; VAR_10 < 300; VAR_10 += 4)
  FUNC_1(VAR_1, VAR_2, VAR_9, 4);
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->insert_sheet : 0);
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->jog : 0);
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->leading_edge : 0);


 for (VAR_10=312; VAR_10 < 320; VAR_10 += 4)
  FUNC_1(VAR_1, VAR_2, VAR_9, 4);
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->manual_feed : 0);
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->media_position : 0);
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->media_weight : 0);
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->mirror_print : 0);
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->negative_print : 0);
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->num_copies : 0);
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->orientation : 0);
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->output_face_up : 0);
 FUNC_2(VAR_1, VAR_2, VAR_6 * 72/ VAR_4);
 FUNC_2(VAR_1, VAR_2, VAR_7 * 72/ VAR_5);
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->separations : 0);
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->tray_switch : 0);
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->tumble : 0);
 FUNC_2(VAR_1, VAR_2, VAR_6);
 FUNC_2(VAR_1, VAR_2, VAR_7);
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->media_type_num : 0);
 FUNC_2(VAR_1, VAR_2, VAR_8 < 8 ? 1 : 8);
 FUNC_2(VAR_1, VAR_2, VAR_8);
 FUNC_2(VAR_1, VAR_2, (VAR_6 * VAR_8 + 7)/8);
 FUNC_2(VAR_1, VAR_2, 0);
 switch (VAR_8)
 {
 case 1: FUNC_2(VAR_1, VAR_2, 3); break;
 case 8: FUNC_2(VAR_1, VAR_2, 18); break;
 case 24: FUNC_2(VAR_1, VAR_2, 19); break;
 case 32: FUNC_2(VAR_1, VAR_2, 6); break;
 default: FUNC_0(VAR_1, VAR_0, "pixmap bpp must be 1, 8, 24 or 32 to write as pwg");
 }
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->compression : 0);
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->row_count : 0);
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->row_feed : 0);
 FUNC_2(VAR_1, VAR_2, VAR_3 ? VAR_3->row_step : 0);
 FUNC_2(VAR_1, VAR_2, VAR_8 <= 8 ? 1 : (VAR_8>>8));
 for (VAR_10=424; VAR_10 < 452; VAR_10 += 4)
  FUNC_1(VAR_1, VAR_2, VAR_9, 4);
 FUNC_2(VAR_1, VAR_2, 1);
 FUNC_2(VAR_1, VAR_2, 1);
 FUNC_2(VAR_1, VAR_2, 1);
 FUNC_2(VAR_1, VAR_2, 0);
 FUNC_2(VAR_1, VAR_2, 0);
 FUNC_2(VAR_1, VAR_2, VAR_6);
 FUNC_2(VAR_1, VAR_2, VAR_7);
 for (VAR_10=480; VAR_10 < 1668; VAR_10 += 4)
  FUNC_1(VAR_1, VAR_2, VAR_9, 4);
 FUNC_1(VAR_1, VAR_2, VAR_3 ? VAR_3->rendering_intent : VAR_9, 64);
 FUNC_1(VAR_1, VAR_2, VAR_3 ? VAR_3->page_size_name : VAR_9, 64);
}
