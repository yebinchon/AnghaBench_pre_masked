
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nid_path {int dummy; } ;
struct hda_codec {struct conexant_spec* spec; } ;
struct TYPE_4__ {int** input_paths; size_t* cur_mux; } ;
struct conexant_spec {size_t dc_input_bias; struct nid_path* dc_mode_path; scalar_t__ recording; int dc_enable; TYPE_1__ gen; } ;
struct TYPE_6__ {TYPE_2__* items; } ;
struct TYPE_5__ {int index; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (struct hda_codec*,struct nid_path*,int,int) ;
 int FUNC_1 (struct hda_codec*,int) ;
 struct nid_path* FUNC_2 (struct hda_codec*,int) ;
 int FUNC_3 (struct hda_codec*,int,int) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_2)
{
 struct conexant_spec *VAR_3 = VAR_2->spec;
 int VAR_4, VAR_5;
 struct nid_path *VAR_6;

 VAR_4 = VAR_3->gen.input_paths[0][VAR_3->gen.cur_mux[0]];




 if (!VAR_3->dc_enable) {

  FUNC_3(VAR_2, 0x1e, 0);
  FUNC_0(VAR_2, VAR_3->dc_mode_path, 0, 0);
  FUNC_3(VAR_2, 0x1a, VAR_3->recording ?
          FUNC_1(VAR_2, 0x1a) : 0);
  FUNC_3(VAR_2, 0x1b, VAR_3->recording ?
          FUNC_1(VAR_2, 0x1b) : 0);

  VAR_6 = FUNC_2(VAR_2, VAR_4);
  if (VAR_6)
   FUNC_0(VAR_2, VAR_6, 1, 0);
 } else {

  VAR_6 = FUNC_2(VAR_2, VAR_4);
  if (VAR_6)
   FUNC_0(VAR_2, VAR_6, 0, 0);






  if (VAR_3->recording)
   VAR_5 = VAR_1.items[VAR_3->dc_input_bias].index;
  else
   VAR_5 = 0;
  FUNC_3(VAR_2, 0x1a, VAR_5);
  FUNC_3(VAR_2, 0x1b, 0);

  FUNC_3(VAR_2, 0x1e, VAR_3->recording ? VAR_0 : 0);
  FUNC_0(VAR_2, VAR_3->dc_mode_path, 1, 0);
 }
}
