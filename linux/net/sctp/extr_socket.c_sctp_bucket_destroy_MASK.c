
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_bind_bucket {int node; int owner; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,struct sctp_bind_bucket*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct sctp_bind_bucket *VAR_2)
{
 if (VAR_2 && FUNC_2(&VAR_2->owner)) {
  FUNC_1(&VAR_2->node);
  FUNC_3(VAR_1, VAR_2);
  FUNC_0(VAR_0);
 }
}
