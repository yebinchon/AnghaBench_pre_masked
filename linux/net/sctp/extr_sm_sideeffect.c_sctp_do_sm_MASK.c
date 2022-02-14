
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_sm_table_entry {int (* fn ) (struct net*,struct sctp_endpoint*,struct sctp_association*,union sctp_subtype,void*,struct sctp_cmd_seq*) ;} ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_association {int dummy; } ;
struct net {int dummy; } ;
typedef int printfn_t ;
typedef int gfp_t ;
typedef enum sctp_state { ____Placeholder_sctp_state } sctp_state ;
typedef enum sctp_event_type { ____Placeholder_sctp_event_type } sctp_event_type ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;

 int FUNC_3 (struct sctp_cmd_seq*) ;


 int FUNC_4 (int,union sctp_subtype,int,struct sctp_endpoint*,struct sctp_association**,void*,int,struct sctp_cmd_seq*,int ) ;
 struct sctp_sm_table_entry* FUNC_5 (struct net*,int,int,union sctp_subtype) ;

 int FUNC_6 (struct net*,struct sctp_endpoint*,struct sctp_association*,union sctp_subtype,void*,struct sctp_cmd_seq*) ;

int FUNC_7(struct net *VAR_0, enum sctp_event_type VAR_1,
        union sctp_subtype VAR_2, enum sctp_state VAR_3,
        struct sctp_endpoint *VAR_4, struct sctp_association *VAR_5,
        void *VAR_6, gfp_t VAR_7)
{
 typedef const char *(printfn_t)(union sctp_subtype);
 static printfn_t *VAR_8[] = {
  ((void*)0), 131, 128, 130, 129,
 };
 printfn_t *VAR_9 __attribute__ ((unused)) = VAR_8[VAR_1];
 const struct sctp_sm_table_entry *VAR_10;
 struct sctp_cmd_seq VAR_11;
 enum sctp_disposition VAR_12;
 int VAR_13 = 0;




 VAR_10 = FUNC_5(VAR_0, VAR_1, VAR_3, VAR_2);

 FUNC_3(&VAR_11);

 FUNC_2();
 VAR_12 = VAR_10->fn(VAR_0, VAR_4, VAR_5, VAR_2, VAR_6, &VAR_11);
 FUNC_0();

 VAR_13 = FUNC_4(VAR_1, VAR_2, VAR_3,
      VAR_4, &VAR_5, VAR_6, VAR_12,
      &VAR_11, VAR_7);
 FUNC_1();

 return VAR_13;
}
