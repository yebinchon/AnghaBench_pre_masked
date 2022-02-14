
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dest_phys_out_ofs; int dest_phys_outs; int src_stream_out_ofs; int src_stream_outs; int src_phys_ins; int dest_stream_ins; } ;
struct lola {TYPE_1__ mixer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lola*,int ,char*) ;
 int FUNC_1 (struct lola*,int ,int ,int ,int ,char*) ;
 int FUNC_2 (struct lola*) ;
 int FUNC_3 (struct lola*,int ,int ,char*) ;
 int FUNC_4 (struct lola*) ;

int FUNC_5(struct lola *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1, "Analog Playback Volume");
 if (VAR_3 < 0)
  return VAR_3;
 VAR_3 = FUNC_0(VAR_2, VAR_0, "Analog Capture Volume");
 if (VAR_3 < 0)
  return VAR_3;
 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;
 VAR_3 = FUNC_3(VAR_2, VAR_2->mixer.src_phys_ins, 0,
        "Digital Capture Volume");
 if (VAR_3 < 0)
  return VAR_3;
 VAR_3 = FUNC_3(VAR_2, VAR_2->mixer.src_stream_outs,
        VAR_2->mixer.src_stream_out_ofs,
        "Digital Playback Volume");
 if (VAR_3 < 0)
  return VAR_3;
 return FUNC_4(VAR_2);
}
