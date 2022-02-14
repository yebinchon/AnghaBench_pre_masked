
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int tx_type; int rx_filter; scalar_t__ flags; } ;
typedef enum hwtstamp_tx_types { ____Placeholder_hwtstamp_tx_types } hwtstamp_tx_types ;
typedef enum hwtstamp_rx_filters { ____Placeholder_hwtstamp_rx_filters } hwtstamp_rx_filters ;
typedef int cfg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct hwtstamp_config*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ifreq *VAR_3)
{
 struct hwtstamp_config VAR_4;
 enum hwtstamp_tx_types VAR_5;
 enum hwtstamp_rx_filters VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;

 if (FUNC_0(&VAR_4, VAR_3->ifr_data, sizeof(VAR_4)))
  return -VAR_0;

 if (VAR_4.flags)
  return -VAR_1;

 VAR_5 = VAR_4.tx_type;
 VAR_6 = VAR_4.rx_filter;

 switch (VAR_5) {
 case 130:
 case 129:
 case 128:
  VAR_7 = 1;
  break;
 }

 switch (VAR_6) {
 case 145:
 case 146:
 case 131:
 case 142:
 case 141:
 case 143:
 case 134:
 case 133:
 case 135:
 case 137:
 case 136:
 case 138:
 case 139:
 case 132:
 case 140:
 case 144:
  VAR_8 = 1;
  break;
 }

 if (!VAR_7 || !VAR_8)
  return -VAR_2;

 return 0;
}
