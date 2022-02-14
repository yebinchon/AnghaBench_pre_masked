
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct stp_config_pdu {scalar_t__ flags; int * forward_delay; int * hello_time; int * max_age; int * msg_age; int * port; int * sender; int root_cost; int * root; } ;
struct ebt_stp_config_info {scalar_t__ flags; scalar_t__ root_priol; scalar_t__ root_priou; scalar_t__ root_costl; scalar_t__ root_costu; scalar_t__ sender_priol; scalar_t__ sender_priou; scalar_t__ portl; scalar_t__ portu; scalar_t__ msg_agel; scalar_t__ msg_ageu; scalar_t__ max_agel; scalar_t__ max_ageu; scalar_t__ hello_timel; scalar_t__ hello_timeu; scalar_t__ forward_delayl; scalar_t__ forward_delayu; int sender_addrmsk; int sender_addr; int root_addrmsk; int root_addr; } ;
struct ebt_stp_info {int bitmask; struct ebt_stp_config_info config; } ;


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
 scalar_t__ FUNC_0 (struct ebt_stp_info const*,int,int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static bool FUNC_4(const struct ebt_stp_info *VAR_11,
         const struct stp_config_pdu *VAR_12)
{
 const struct ebt_stp_config_info *VAR_13;
 u16 VAR_14;
 u32 VAR_15;

 VAR_13 = &VAR_11->config;
 if ((VAR_11->bitmask & VAR_0) &&
     FUNC_0(VAR_11, VAR_0, VAR_13->flags != VAR_12->flags))
  return 0;
 if (VAR_11->bitmask & VAR_8) {
  VAR_14 = FUNC_1(VAR_12->root);
  if (FUNC_0(VAR_11, VAR_8,
       VAR_14 < VAR_13->root_priol || VAR_14 > VAR_13->root_priou))
   return 0;
 }
 if (VAR_11->bitmask & VAR_6) {
  if (FUNC_0(VAR_11, VAR_6,
       !FUNC_3(&VAR_12->root[2],
           VAR_13->root_addr,
           VAR_13->root_addrmsk)))
   return 0;
 }
 if (VAR_11->bitmask & VAR_7) {
  VAR_15 = FUNC_2(VAR_12->root_cost);
  if (FUNC_0(VAR_11, VAR_7,
       VAR_15 < VAR_13->root_costl || VAR_15 > VAR_13->root_costu))
   return 0;
 }
 if (VAR_11->bitmask & VAR_10) {
  VAR_14 = FUNC_1(VAR_12->sender);
  if (FUNC_0(VAR_11, VAR_10,
       VAR_14 < VAR_13->sender_priol || VAR_14 > VAR_13->sender_priou))
   return 0;
 }
 if (VAR_11->bitmask & VAR_9) {
  if (FUNC_0(VAR_11, VAR_9,
       !FUNC_3(&VAR_12->sender[2],
           VAR_13->sender_addr,
           VAR_13->sender_addrmsk)))
   return 0;
 }
 if (VAR_11->bitmask & VAR_5) {
  VAR_14 = FUNC_1(VAR_12->port);
  if (FUNC_0(VAR_11, VAR_5,
       VAR_14 < VAR_13->portl || VAR_14 > VAR_13->portu))
   return 0;
 }
 if (VAR_11->bitmask & VAR_4) {
  VAR_14 = FUNC_1(VAR_12->msg_age);
  if (FUNC_0(VAR_11, VAR_4,
       VAR_14 < VAR_13->msg_agel || VAR_14 > VAR_13->msg_ageu))
   return 0;
 }
 if (VAR_11->bitmask & VAR_3) {
  VAR_14 = FUNC_1(VAR_12->max_age);
  if (FUNC_0(VAR_11, VAR_3,
       VAR_14 < VAR_13->max_agel || VAR_14 > VAR_13->max_ageu))
   return 0;
 }
 if (VAR_11->bitmask & VAR_2) {
  VAR_14 = FUNC_1(VAR_12->hello_time);
  if (FUNC_0(VAR_11, VAR_2,
       VAR_14 < VAR_13->hello_timel || VAR_14 > VAR_13->hello_timeu))
   return 0;
 }
 if (VAR_11->bitmask & VAR_1) {
  VAR_14 = FUNC_1(VAR_12->forward_delay);
  if (FUNC_0(VAR_11, VAR_1,
       VAR_14 < VAR_13->forward_delayl || VAR_14 > VAR_13->forward_delayu))
   return 0;
 }
 return 1;
}
