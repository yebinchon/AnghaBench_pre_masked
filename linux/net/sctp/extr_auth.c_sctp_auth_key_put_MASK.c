
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_auth_bytes {int refcnt; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sctp_auth_bytes*) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(struct sctp_auth_bytes *VAR_1)
{
 if (!VAR_1)
  return;

 if (FUNC_2(&VAR_1->refcnt)) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_0);
 }
}
