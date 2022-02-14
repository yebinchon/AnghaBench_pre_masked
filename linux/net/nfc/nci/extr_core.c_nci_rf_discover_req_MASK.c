
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nci_rf_discover_param {int im_protocols; int tm_protocols; } ;
struct nci_rf_disc_cmd {int num_disc_configs; TYPE_1__* disc_configs; } ;
struct nci_dev {int dummy; } ;
struct disc_config {int dummy; } ;
struct TYPE_2__ {int frequency; int rf_tech_and_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct nci_dev*,int ,int,struct nci_rf_disc_cmd*) ;

__attribute__((used)) static void FUNC_1(struct nci_dev *VAR_15, unsigned long VAR_16)
{
 struct nci_rf_discover_param *VAR_17 =
  (struct nci_rf_discover_param *)VAR_16;
 struct nci_rf_disc_cmd VAR_18;

 VAR_18.num_disc_configs = 0;

 if ((VAR_18.num_disc_configs < VAR_0) &&
     (VAR_17->im_protocols & VAR_12 ||
      VAR_17->im_protocols & VAR_13 ||
      VAR_17->im_protocols & VAR_10 ||
      VAR_17->im_protocols & VAR_14)) {
  VAR_18.disc_configs[VAR_18.num_disc_configs].rf_tech_and_mode =
   VAR_2;
  VAR_18.disc_configs[VAR_18.num_disc_configs].frequency = 1;
  VAR_18.num_disc_configs++;
 }

 if ((VAR_18.num_disc_configs < VAR_0) &&
     (VAR_17->im_protocols & VAR_9)) {
  VAR_18.disc_configs[VAR_18.num_disc_configs].rf_tech_and_mode =
   VAR_3;
  VAR_18.disc_configs[VAR_18.num_disc_configs].frequency = 1;
  VAR_18.num_disc_configs++;
 }

 if ((VAR_18.num_disc_configs < VAR_0) &&
     (VAR_17->im_protocols & VAR_8 ||
      VAR_17->im_protocols & VAR_14)) {
  VAR_18.disc_configs[VAR_18.num_disc_configs].rf_tech_and_mode =
   VAR_5;
  VAR_18.disc_configs[VAR_18.num_disc_configs].frequency = 1;
  VAR_18.num_disc_configs++;
 }

 if ((VAR_18.num_disc_configs < VAR_0) &&
     (VAR_17->im_protocols & VAR_11)) {
  VAR_18.disc_configs[VAR_18.num_disc_configs].rf_tech_and_mode =
   VAR_6;
  VAR_18.disc_configs[VAR_18.num_disc_configs].frequency = 1;
  VAR_18.num_disc_configs++;
 }

 if ((VAR_18.num_disc_configs < VAR_0 - 1) &&
     (VAR_17->tm_protocols & VAR_14)) {
  VAR_18.disc_configs[VAR_18.num_disc_configs].rf_tech_and_mode =
   VAR_1;
  VAR_18.disc_configs[VAR_18.num_disc_configs].frequency = 1;
  VAR_18.num_disc_configs++;
  VAR_18.disc_configs[VAR_18.num_disc_configs].rf_tech_and_mode =
   VAR_4;
  VAR_18.disc_configs[VAR_18.num_disc_configs].frequency = 1;
  VAR_18.num_disc_configs++;
 }

 FUNC_0(VAR_15, VAR_7,
       (1 + (VAR_18.num_disc_configs * sizeof(struct disc_config))),
       &VAR_18);
}
