
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_oxfw {int wrong_dbs; scalar_t__ midi_output_ports; scalar_t__ midi_input_ports; TYPE_1__* entry; int unit; } ;
struct fw_device {scalar_t__ config_rom; } ;
struct fw_csr_iterator {int dummy; } ;
struct TYPE_2__ {scalar_t__ vendor_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct fw_csr_iterator*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct fw_csr_iterator*,int*,int*) ;
 struct fw_device* FUNC_2 (int ) ;
 int FUNC_3 (struct snd_oxfw*,int) ;
 int FUNC_4 (struct snd_oxfw*) ;

__attribute__((used)) static int FUNC_5(struct snd_oxfw *VAR_8)
{
 struct fw_device *VAR_9 = FUNC_2(VAR_8->unit);
 struct fw_csr_iterator VAR_10;
 int VAR_11, VAR_12;
 int VAR_13, VAR_14;





 if (VAR_8->entry->vendor_id == VAR_4)
  return FUNC_3(VAR_8, 0);
 if (VAR_8->entry->vendor_id == VAR_5)
  return FUNC_3(VAR_8, 1);





 if (VAR_8->entry->vendor_id == VAR_3) {

  VAR_8->midi_input_ports = 0;
  VAR_8->midi_output_ports = 0;

  return FUNC_4(VAR_8);
 }





 if (VAR_8->entry->vendor_id == VAR_7) {
  VAR_8->midi_input_ports++;
  VAR_8->midi_output_ports++;
  return 0;
 }


 VAR_13 = VAR_14 = 0;
 FUNC_0(&VAR_10, VAR_9->config_rom + 5);
 while (FUNC_1(&VAR_10, &VAR_11, &VAR_12)) {
  if (VAR_11 == VAR_1)
   VAR_13 = VAR_12;
  else if (VAR_11 == VAR_0)
   VAR_14 = VAR_12;
 }





 if (VAR_13 == VAR_6 && VAR_14 == VAR_2)
  VAR_8->wrong_dbs = 1;

 return 0;
}
