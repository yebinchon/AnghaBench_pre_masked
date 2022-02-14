
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int truesize; } ;
struct sctp_ulpevent {int dummy; } ;
typedef int gfp_t ;
typedef int __u16 ;


 struct sk_buff* FUNC_0 (int,int ) ;
 struct sctp_ulpevent* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sctp_ulpevent*,int ,int ) ;

__attribute__((used)) static struct sctp_ulpevent *FUNC_3(int VAR_0, __u16 VAR_1,
            gfp_t VAR_2)
{
 struct sctp_ulpevent *VAR_3;
 struct sk_buff *VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_2);
 if (!VAR_4)
  goto fail;

 VAR_3 = FUNC_1(VAR_4);
 FUNC_2(VAR_3, VAR_1, VAR_4->truesize);

 return VAR_3;

fail:
 return ((void*)0);
}
