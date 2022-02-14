
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_ulpevent {unsigned int rmem_len; int msg_flags; } ;
typedef int __u16 ;


 int FUNC_0 (struct sctp_ulpevent*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct sctp_ulpevent *VAR_0,
          __u16 VAR_1,
          unsigned int VAR_2)
{
 FUNC_0(VAR_0, 0, sizeof(struct sctp_ulpevent));
 VAR_0->msg_flags = VAR_1;
 VAR_0->rmem_len = VAR_2;
}
