
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sctp_sm_table_entry {int dummy; } ;
struct net {int dummy; } ;
typedef enum sctp_state { ____Placeholder_sctp_state } sctp_state ;
typedef enum sctp_cid { ____Placeholder_sctp_cid } sctp_cid ;





 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;


 int VAR_3 ;
 struct sctp_sm_table_entry const** VAR_4 ;
 struct sctp_sm_table_entry const** VAR_5 ;
 struct sctp_sm_table_entry const VAR_6 ;
 struct sctp_sm_table_entry const** VAR_7 ;
 struct sctp_sm_table_entry const* VAR_8 ;
 struct sctp_sm_table_entry const** VAR_9 ;
 struct sctp_sm_table_entry const** VAR_10 ;

__attribute__((used)) static const struct sctp_sm_table_entry *FUNC_0(
      struct net *VAR_11,
      enum sctp_cid VAR_12,
      enum sctp_state VAR_13)
{
 if (VAR_13 > VAR_3)
  return &VAR_6;

 if (VAR_12 == VAR_2)
  VAR_12 = VAR_1;

 if (VAR_12 <= VAR_0)
  return &VAR_7[VAR_12][VAR_13];

 switch ((u16)VAR_12) {
 case 130:
 case 129:
  return &VAR_9[0][VAR_13];

 case 133:
  return &VAR_4[0][VAR_13];

 case 132:
  return &VAR_4[1][VAR_13];

 case 128:
  return &VAR_10[0][VAR_13];

 case 131:
  return &VAR_5[0][VAR_13];
 }

 return &VAR_8[VAR_13];
}
