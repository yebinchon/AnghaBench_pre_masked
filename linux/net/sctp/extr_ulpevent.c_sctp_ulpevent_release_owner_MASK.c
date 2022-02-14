
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_ulpevent {int rmem_len; struct sctp_association* asoc; } ;
struct sctp_association {int rmem_alloc; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct sctp_association*) ;

__attribute__((used)) static inline void FUNC_2(struct sctp_ulpevent *VAR_0)
{
 struct sctp_association *VAR_1 = VAR_0->asoc;

 FUNC_0(VAR_0->rmem_len, &VAR_1->rmem_alloc);
 FUNC_1(VAR_1);
}
