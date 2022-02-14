
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int dummy; } ;
struct hda_gen_spec {scalar_t__ multi_ios; int * out_paths; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
struct auto_pin_cfg {int line_outs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,char const*,int,struct nid_path*) ;
 int FUNC_1 (struct hda_codec*,char const*,int,struct nid_path*) ;
 int FUNC_2 (struct hda_codec*,char*,int ,int,struct nid_path*) ;
 int FUNC_3 (struct hda_codec*,char*,int ,int,struct nid_path*) ;
 char* FUNC_4 (struct hda_codec*,int,int*,int ) ;
 struct nid_path* FUNC_5 (struct hda_codec*,int ) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static int FUNC_7(struct hda_codec *VAR_2,
     const struct auto_pin_cfg *VAR_3)
{
 struct hda_gen_spec *VAR_4 = VAR_2->spec;
 int VAR_5, VAR_6, VAR_7;

 VAR_7 = VAR_3->line_outs;
 if (VAR_4->multi_ios > 0 && VAR_3->line_outs < 3)
  VAR_7 += VAR_4->multi_ios;

 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
  const char *VAR_8;
  int VAR_9;
  struct nid_path *VAR_10;

  VAR_10 = FUNC_5(VAR_2, VAR_4->out_paths[VAR_5]);
  if (!VAR_10)
   continue;

  VAR_8 = FUNC_4(VAR_2, VAR_5, &VAR_9, VAR_1);
  if (!VAR_8 || !FUNC_6(VAR_8, "CLFE")) {

   VAR_6 = FUNC_3(VAR_2, "Center", 0, 1, VAR_10);
   if (VAR_6 < 0)
    return VAR_6;
   VAR_6 = FUNC_3(VAR_2, "LFE", 0, 2, VAR_10);
   if (VAR_6 < 0)
    return VAR_6;
  } else {
   VAR_6 = FUNC_1(VAR_2, VAR_8, VAR_9, VAR_10);
   if (VAR_6 < 0)
    return VAR_6;
  }

  VAR_8 = FUNC_4(VAR_2, VAR_5, &VAR_9, VAR_0);
  if (!VAR_8 || !FUNC_6(VAR_8, "CLFE")) {
   VAR_6 = FUNC_2(VAR_2, "Center", 0, 1, VAR_10);
   if (VAR_6 < 0)
    return VAR_6;
   VAR_6 = FUNC_2(VAR_2, "LFE", 0, 2, VAR_10);
   if (VAR_6 < 0)
    return VAR_6;
  } else {
   VAR_6 = FUNC_0(VAR_2, VAR_8, VAR_9, VAR_10);
   if (VAR_6 < 0)
    return VAR_6;
  }
 }
 return 0;
}
