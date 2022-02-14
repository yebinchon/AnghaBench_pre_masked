
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct atmel_pdmic_pdata {char* card_name; scalar_t__ mic_min_freq; scalar_t__ mic_max_freq; scalar_t__ mic_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct atmel_pdmic_pdata* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,scalar_t__,scalar_t__) ;
 struct atmel_pdmic_pdata* FUNC_3 (struct device*,int,int ) ;
 scalar_t__ FUNC_4 (struct device_node*,char*,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct device_node*,char*,char**) ;
 scalar_t__ FUNC_6 (struct device_node*,char*,scalar_t__*) ;

__attribute__((used)) static struct atmel_pdmic_pdata *FUNC_7(struct device *VAR_5)
{
 struct device_node *VAR_6 = VAR_5->of_node;
 struct atmel_pdmic_pdata *VAR_7;

 if (!VAR_6) {
  FUNC_1(VAR_5, "device node not found\n");
  return FUNC_0(-VAR_0);
 }

 VAR_7 = FUNC_3(VAR_5, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 if (FUNC_5(VAR_6, "atmel,model", &VAR_7->card_name))
  VAR_7->card_name = "PDMIC";

 if (FUNC_6(VAR_6, "atmel,mic-min-freq",
     &VAR_7->mic_min_freq)) {
  FUNC_1(VAR_5, "failed to get mic-min-freq\n");
  return FUNC_0(-VAR_0);
 }

 if (FUNC_6(VAR_6, "atmel,mic-max-freq",
     &VAR_7->mic_max_freq)) {
  FUNC_1(VAR_5, "failed to get mic-max-freq\n");
  return FUNC_0(-VAR_0);
 }

 if (VAR_7->mic_max_freq < VAR_7->mic_min_freq) {
  FUNC_1(VAR_5,
   "mic-max-freq should not be less than mic-min-freq\n");
  return FUNC_0(-VAR_0);
 }

 if (FUNC_4(VAR_6, "atmel,mic-offset", &VAR_7->mic_offset))
  VAR_7->mic_offset = 0;

 if (VAR_7->mic_offset > VAR_3) {
  FUNC_2(VAR_5,
    "mic-offset value %d is larger than the max value %d, the max value is specified\n",
    VAR_7->mic_offset, VAR_3);
  VAR_7->mic_offset = VAR_3;
 } else if (VAR_7->mic_offset < VAR_4) {
  FUNC_2(VAR_5,
    "mic-offset value %d is less than the min value %d, the min value is specified\n",
    VAR_7->mic_offset, VAR_4);
  VAR_7->mic_offset = VAR_4;
 }

 return VAR_7;
}
