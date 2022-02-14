
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int depth; int* idx; void** ctls; int * path; } ;
struct hda_codec {scalar_t__ single_adc_amp; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 void* FUNC_0 (int ,int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_1 (struct hda_codec*,int ,int ) ;
 scalar_t__ FUNC_2 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_5, struct nid_path *VAR_6)
{
 hda_nid_t VAR_7;
 int VAR_8, VAR_9;

 VAR_6->ctls[VAR_4] = VAR_6->ctls[VAR_3] = 0;
 for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {
  if (VAR_9 >= VAR_6->depth)
   return -VAR_0;
  VAR_8 = VAR_6->depth - VAR_9 - 1;
  VAR_7 = VAR_6->path[VAR_8];
  if (!VAR_6->ctls[VAR_4]) {
   if (FUNC_2(VAR_5, VAR_7, VAR_2))
    VAR_6->ctls[VAR_4] =
     FUNC_0(VAR_7, 3, 0, VAR_2);
   else if (FUNC_2(VAR_5, VAR_7, VAR_1)) {
    int VAR_10 = VAR_6->idx[VAR_8];
    if (!VAR_9 && VAR_5->single_adc_amp)
     VAR_10 = 0;
    VAR_6->ctls[VAR_4] =
     FUNC_0(VAR_7, 3, VAR_10, VAR_1);
   }
  }
  if (!VAR_6->ctls[VAR_3]) {
   if (FUNC_1(VAR_5, VAR_7, VAR_2))
    VAR_6->ctls[VAR_3] =
     FUNC_0(VAR_7, 3, 0, VAR_2);
   else if (FUNC_1(VAR_5, VAR_7, VAR_1)) {
    int VAR_11 = VAR_6->idx[VAR_8];
    if (!VAR_9 && VAR_5->single_adc_amp)
     VAR_11 = 0;
    VAR_6->ctls[VAR_3] =
     FUNC_0(VAR_7, 3, VAR_11, VAR_1);
   }
  }
 }
 return 0;
}
