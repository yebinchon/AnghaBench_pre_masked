
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {void* mic2_micbias; void* mic1b_micbias; void* mic1a_micbias; void* mic2_type; void* mic1_type; } ;
struct ab8500_codec_platform_data {void* ear_cmv; TYPE_1__ amics; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct device_node*,char*,int*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_9, struct device_node *VAR_10,
    struct ab8500_codec_platform_data *VAR_11)
{
 u32 VAR_12;

 if (FUNC_2(VAR_10, "stericsson,amic1-type-single-ended"))
  VAR_11->amics.mic1_type = VAR_3;
 else
  VAR_11->amics.mic1_type = VAR_2;

 if (FUNC_2(VAR_10, "stericsson,amic2-type-single-ended"))
  VAR_11->amics.mic2_type = VAR_3;
 else
  VAR_11->amics.mic2_type = VAR_2;


 if (FUNC_2(VAR_10, "stericsson,amic1a-bias-vamic2"))
  VAR_11->amics.mic1a_micbias = VAR_1;
 else
  VAR_11->amics.mic1a_micbias = VAR_0;

 if (FUNC_2(VAR_10, "stericsson,amic1b-bias-vamic2"))
  VAR_11->amics.mic1b_micbias = VAR_1;
 else
  VAR_11->amics.mic1b_micbias = VAR_0;

 if (FUNC_2(VAR_10, "stericsson,amic2-bias-vamic1"))
  VAR_11->amics.mic2_micbias = VAR_0;
 else
  VAR_11->amics.mic2_micbias = VAR_1;

 if (!FUNC_3(VAR_10, "stericsson,earpeice-cmv", &VAR_12)) {
  switch (VAR_12) {
  case 950 :
   VAR_11->ear_cmv = VAR_4;
   break;
  case 1100 :
   VAR_11->ear_cmv = VAR_5;
   break;
  case 1270 :
   VAR_11->ear_cmv = VAR_6;
   break;
  case 1580 :
   VAR_11->ear_cmv = VAR_7;
   break;
  default :
   VAR_11->ear_cmv = VAR_8;
   FUNC_0(VAR_9, "Unsuitable earpiece voltage found in DT\n");
  }
 } else {
  FUNC_1(VAR_9, "No earpiece voltage found in DT - using default\n");
  VAR_11->ear_cmv = VAR_4;
 }
}
