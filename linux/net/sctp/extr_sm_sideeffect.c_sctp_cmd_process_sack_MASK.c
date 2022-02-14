
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct TYPE_2__ {int sk; } ;
struct sctp_association {int ep; int state; TYPE_1__ base; int outqueue; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net*,int ,int ,int ,int ,struct sctp_association*,int *,int ) ;
 scalar_t__ FUNC_2 (int *,struct sctp_chunk*) ;
 struct net* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct sctp_cmd_seq *VAR_3,
     struct sctp_association *VAR_4,
     struct sctp_chunk *VAR_5)
{
 int VAR_6 = 0;

 if (FUNC_2(&VAR_4->outqueue, VAR_5)) {
  struct net *VAR_7 = FUNC_3(VAR_4->base.sk);


  VAR_6 = FUNC_1(VAR_7, VAR_2,
     FUNC_0(VAR_1),
     VAR_4->state, VAR_4->ep, VAR_4, ((void*)0),
     VAR_0);
 }

 return VAR_6;
}
