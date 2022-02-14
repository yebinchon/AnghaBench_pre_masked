
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union sctp_subtype {int chunk; } ;
struct sctp_sm_table_entry {int dummy; } ;
struct net {int dummy; } ;
typedef enum sctp_state { ____Placeholder_sctp_state } sctp_state ;
typedef enum sctp_event_type { ____Placeholder_sctp_event_type } sctp_event_type ;


 struct sctp_sm_table_entry const* FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 struct sctp_sm_table_entry const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sctp_sm_table_entry const* FUNC_1 (struct net*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;

const struct sctp_sm_table_entry *FUNC_2(
     struct net *VAR_10,
     enum sctp_event_type VAR_11,
     enum sctp_state VAR_12,
     union sctp_subtype VAR_13)
{
 switch (VAR_11) {
 case 131:
  return FUNC_1(VAR_10, VAR_13.chunk, VAR_12);
 case 128:
  return FUNC_0(VAR_2, VAR_8,
     VAR_9);
 case 130:
  return FUNC_0(VAR_0, VAR_4,
     VAR_5);
 case 129:
  return FUNC_0(VAR_1, VAR_6,
     VAR_7);
 default:

  return &VAR_3;
 }
}
