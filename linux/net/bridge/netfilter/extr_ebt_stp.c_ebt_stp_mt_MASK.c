
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xt_action_param {struct ebt_stp_info* matchinfo; } ;
struct stp_header {scalar_t__ type; } ;
struct stp_config_pdu {scalar_t__ type; } ;
struct sk_buff {int dummy; } ;
struct ebt_stp_info {int bitmask; scalar_t__ type; } ;
typedef int header ;
typedef int _stph ;
typedef int _stpc ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ebt_stp_info const*,int,int) ;
 int FUNC_1 (struct ebt_stp_info const*,struct stp_header const*) ;
 scalar_t__ FUNC_2 (struct stp_header const*,int const*,int) ;
 struct stp_header* FUNC_3 (struct sk_buff const*,int,int,struct stp_header*) ;

__attribute__((used)) static bool
FUNC_4(const struct sk_buff *VAR_3, struct xt_action_param *VAR_4)
{
 const struct ebt_stp_info *VAR_5 = VAR_4->matchinfo;
 const struct stp_header *VAR_6;
 struct stp_header VAR_7;
 const u8 VAR_8[6] = {0x42, 0x42, 0x03, 0x00, 0x00, 0x00};

 VAR_6 = FUNC_3(VAR_3, 0, sizeof(VAR_7), &VAR_7);
 if (VAR_6 == ((void*)0))
  return 0;


 if (FUNC_2(VAR_6, VAR_8, sizeof(VAR_8)))
  return 0;

 if ((VAR_5->bitmask & VAR_2) &&
     FUNC_0(VAR_5, VAR_2, VAR_5->type != VAR_6->type))
  return 0;

 if (VAR_6->type == VAR_0 &&
     VAR_5->bitmask & VAR_1) {
  const struct stp_config_pdu *VAR_9;
  struct stp_config_pdu VAR_10;

  VAR_9 = FUNC_3(VAR_3, sizeof(VAR_7),
     sizeof(VAR_10), &VAR_10);
  if (VAR_9 == ((void*)0))
   return 0;
  return FUNC_1(VAR_5, VAR_9);
 }
 return 1;
}
