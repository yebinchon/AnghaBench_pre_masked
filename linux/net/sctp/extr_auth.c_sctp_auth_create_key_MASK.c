
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_auth_bytes {int len; int refcnt; } ;
typedef int gfp_t ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct sctp_auth_bytes* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static struct sctp_auth_bytes *FUNC_3(__u32 VAR_2, gfp_t VAR_3)
{
 struct sctp_auth_bytes *VAR_4;


 if (VAR_2 > (VAR_0 - sizeof(struct sctp_auth_bytes)))
  return ((void*)0);


 VAR_4 = FUNC_1(sizeof(struct sctp_auth_bytes) + VAR_2, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->len = VAR_2;
 FUNC_2(&VAR_4->refcnt, 1);
 FUNC_0(VAR_1);

 return VAR_4;
}
