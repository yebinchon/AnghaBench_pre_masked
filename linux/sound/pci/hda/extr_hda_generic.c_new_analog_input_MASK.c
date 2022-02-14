
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int* idx; int depth; unsigned int* ctls; int active; int stream_enabled; int pin_fixed; } ;
struct hda_gen_spec {scalar_t__ mixer_nid; scalar_t__ mixer_merge_nid; void* loopback_merge_path; void** loopback_paths; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct hda_gen_spec*,int ,char const*,int,unsigned int) ;
 int FUNC_1 (struct hda_gen_spec*,int ,char const*,int,unsigned int) ;
 int FUNC_2 (struct hda_gen_spec*,scalar_t__,int) ;
 int FUNC_3 (struct hda_codec*,scalar_t__,scalar_t__,unsigned int*,unsigned int*) ;
 int FUNC_4 (struct hda_codec*,char*,struct nid_path*) ;
 struct nid_path* FUNC_5 (struct hda_codec*,scalar_t__,scalar_t__,int ) ;
 void* FUNC_6 (struct hda_codec*,struct nid_path*) ;

__attribute__((used)) static int FUNC_7(struct hda_codec *VAR_5, int VAR_6,
       hda_nid_t VAR_7, const char *VAR_8, int VAR_9,
       hda_nid_t VAR_10)
{
 struct hda_gen_spec *VAR_11 = VAR_5->spec;
 struct nid_path *VAR_12;
 unsigned int VAR_13, VAR_14;
 int VAR_15, VAR_16;

 if (!FUNC_3(VAR_5, VAR_10, VAR_7, &VAR_13, &VAR_14))
  return 0;

 VAR_12 = FUNC_5(VAR_5, VAR_7, VAR_10, 0);
 if (!VAR_12)
  return -VAR_0;
 FUNC_4(VAR_5, "loopback", VAR_12);
 VAR_11->loopback_paths[VAR_6] = FUNC_6(VAR_5, VAR_12);

 VAR_16 = VAR_12->idx[VAR_12->depth - 1];
 if (VAR_13) {
  VAR_15 = FUNC_1(VAR_11, VAR_2, VAR_8, VAR_9, VAR_13);
  if (VAR_15 < 0)
   return VAR_15;
  VAR_12->ctls[VAR_4] = VAR_13;
 }

 if (VAR_14) {
  VAR_15 = FUNC_0(VAR_11, VAR_1, VAR_8, VAR_9, VAR_14);
  if (VAR_15 < 0)
   return VAR_15;
  VAR_12->ctls[VAR_3] = VAR_14;
 }

 VAR_12->active = 1;
 VAR_12->stream_enabled = 1;
 VAR_15 = FUNC_2(VAR_11, VAR_10, VAR_16);
 if (VAR_15 < 0)
  return VAR_15;

 if (VAR_11->mixer_nid != VAR_11->mixer_merge_nid &&
     !VAR_11->loopback_merge_path) {
  VAR_12 = FUNC_5(VAR_5, VAR_11->mixer_nid,
         VAR_11->mixer_merge_nid, 0);
  if (VAR_12) {
   FUNC_4(VAR_5, "loopback-merge", VAR_12);
   VAR_12->active = 1;
   VAR_12->pin_fixed = 1;
   VAR_12->stream_enabled = 1;
   VAR_11->loopback_merge_path =
    FUNC_6(VAR_5, VAR_12);
  }
 }

 return 0;
}
