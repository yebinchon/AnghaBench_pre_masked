
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sk; int dead; } ;
struct sctp_association {scalar_t__ assoc_id; int rmem_alloc; TYPE_1__ base; int ep; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,struct sctp_association*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (struct sctp_association*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct sctp_association *VAR_4)
{
 if (FUNC_10(!VAR_4->base.dead)) {
  FUNC_1(1, "Attempt to destroy undead association %p!\n", VAR_4);
  return;
 }

 FUNC_6(VAR_4->ep);
 FUNC_7(VAR_4->base.sk);

 if (VAR_4->assoc_id != 0) {
  FUNC_8(&VAR_3);
  FUNC_4(&VAR_2, VAR_4->assoc_id);
  FUNC_9(&VAR_3);
 }

 FUNC_2(FUNC_3(&VAR_4->rmem_alloc));

 FUNC_5(VAR_4, VAR_1);
 FUNC_0(VAR_0);
}
