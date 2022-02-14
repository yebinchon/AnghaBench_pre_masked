
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_errhdr {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct TYPE_2__ {int sk; } ;
struct sctp_association {TYPE_1__ base; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct net*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (struct net*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sctp_cmd_seq*,int ,int ) ;
 int FUNC_6 (struct sctp_association*,struct sctp_association*) ;
 int FUNC_7 (struct sctp_chunk*,int ,int ) ;
 struct sctp_chunk* FUNC_8 (struct sctp_association*,int *,int) ;
 struct net* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct sctp_cmd_seq *VAR_7,
      struct sctp_association *VAR_8,
      struct sctp_association *VAR_9)
{
 struct net *VAR_10 = FUNC_9(VAR_8->base.sk);
 struct sctp_chunk *VAR_11;

 if (!FUNC_6(VAR_8, VAR_9))
  return;

 VAR_11 = FUNC_8(VAR_8, ((void*)0), sizeof(struct sctp_errhdr));
 if (VAR_11) {
  FUNC_7(VAR_11, VAR_4, 0);
  FUNC_5(VAR_7, VAR_2, FUNC_0(VAR_11));
 }
 FUNC_5(VAR_7, VAR_3, FUNC_2(VAR_0));
 FUNC_5(VAR_7, VAR_1,
   FUNC_4(VAR_4));
 FUNC_3(VAR_10, VAR_5);
 FUNC_1(VAR_10, VAR_6);
}
