
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_chunk {int dummy; } ;
struct TYPE_2__ {int sk; } ;
struct sctp_association {TYPE_1__ base; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct sctp_chunk*) ;
 int FUNC_1 (struct net*,struct sctp_association*,struct sctp_chunk*) ;
 struct net* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct sctp_association *VAR_0,
       struct sctp_chunk *VAR_1)
{
 struct net *VAR_2 = FUNC_2(VAR_0->base.sk);
 int VAR_3 = 0;

 VAR_3 = FUNC_1(VAR_2, VAR_0, VAR_1);
 if (VAR_3)
  FUNC_0(VAR_1);

 return VAR_3;
}
