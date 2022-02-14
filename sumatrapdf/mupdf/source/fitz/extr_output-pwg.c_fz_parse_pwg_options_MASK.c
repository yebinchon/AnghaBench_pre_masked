
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* row_step; void* row_feed; void* row_count; void* compression; void* media_type_num; void* tumble; void* tray_switch; void* separations; void** PageSize; void* output_face_up; void* orientation; void* num_copies; void* negative_print; void* mirror_print; void* media_weight; void* media_position; void* manual_feed; void* leading_edge; void* jog; void* insert_sheet; void* duplex; void* cut_media; void* collate; void* advance_media; void* advance_distance; int page_size_name; int rendering_intent; int output_type; int media_type; int media_color; int media_class; } ;
typedef TYPE_1__ fz_pwg_options ;
typedef int fz_context ;


 void* FUNC_0 (char const*) ;
 int FUNC_1 (int *,char const*,int ,int) ;
 scalar_t__ FUNC_2 (int *,char const*,char*,char const**) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int *,char*,int ) ;

fz_pwg_options *
FUNC_5(fz_context *VAR_0, fz_pwg_options *VAR_1, const char *VAR_2)
{
 const char *VAR_3;

 FUNC_3(VAR_1, 0, sizeof *VAR_1);

 if (FUNC_2(VAR_0, VAR_2, "media_class", &VAR_3))
  FUNC_4(VAR_0, "media_class", FUNC_1(VAR_0, VAR_3, VAR_1->media_class, 64));
 if (FUNC_2(VAR_0, VAR_2, "media_color", &VAR_3))
  FUNC_4(VAR_0, "media_color", FUNC_1(VAR_0, VAR_3, VAR_1->media_color, 64));
 if (FUNC_2(VAR_0, VAR_2, "media_type", &VAR_3))
  FUNC_4(VAR_0, "media_type", FUNC_1(VAR_0, VAR_3, VAR_1->media_type, 64));
 if (FUNC_2(VAR_0, VAR_2, "output_type", &VAR_3))
  FUNC_4(VAR_0, "output_type", FUNC_1(VAR_0, VAR_3, VAR_1->output_type, 64));
 if (FUNC_2(VAR_0, VAR_2, "rendering_intent", &VAR_3))
  FUNC_4(VAR_0, "rendering_intent", FUNC_1(VAR_0, VAR_3, VAR_1->rendering_intent, 64));
 if (FUNC_2(VAR_0, VAR_2, "page_size_name", &VAR_3))
  FUNC_4(VAR_0, "page_size_name", FUNC_1(VAR_0, VAR_3, VAR_1->page_size_name, 64));
 if (FUNC_2(VAR_0, VAR_2, "advance_distance", &VAR_3))
  VAR_1->advance_distance = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "advance_media", &VAR_3))
  VAR_1->advance_media = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "collate", &VAR_3))
  VAR_1->collate = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "cut_media", &VAR_3))
  VAR_1->cut_media = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "duplex", &VAR_3))
  VAR_1->duplex = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "insert_sheet", &VAR_3))
  VAR_1->insert_sheet = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "jog", &VAR_3))
  VAR_1->jog = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "leading_edge", &VAR_3))
  VAR_1->leading_edge = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "manual_feed", &VAR_3))
  VAR_1->manual_feed = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "media_position", &VAR_3))
  VAR_1->media_position = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "media_weight", &VAR_3))
  VAR_1->media_weight = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "mirror_print", &VAR_3))
  VAR_1->mirror_print = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "negative_print", &VAR_3))
  VAR_1->negative_print = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "num_copies", &VAR_3))
  VAR_1->num_copies = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "orientation", &VAR_3))
  VAR_1->orientation = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "output_face_up", &VAR_3))
  VAR_1->output_face_up = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "page_size_x", &VAR_3))
  VAR_1->PageSize[0] = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "page_size_y", &VAR_3))
  VAR_1->PageSize[1] = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "separations", &VAR_3))
  VAR_1->separations = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "tray_switch", &VAR_3))
  VAR_1->tray_switch = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "tumble", &VAR_3))
  VAR_1->tumble = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "media_type_num", &VAR_3))
  VAR_1->media_type_num = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "compression", &VAR_3))
  VAR_1->compression = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "row_count", &VAR_3))
  VAR_1->row_count = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "row_feed", &VAR_3))
  VAR_1->row_feed = FUNC_0(VAR_3);
 if (FUNC_2(VAR_0, VAR_2, "row_step", &VAR_3))
  VAR_1->row_step = FUNC_0(VAR_3);

 return VAR_1;
}
