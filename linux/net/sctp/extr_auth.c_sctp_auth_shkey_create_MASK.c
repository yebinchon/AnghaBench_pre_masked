
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_shared_key {int key_id; int refcnt; int key_list; } ;
typedef int gfp_t ;
typedef int __u16 ;


 int FUNC_0 (int *) ;
 struct sctp_shared_key* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int) ;

struct sctp_shared_key *FUNC_3(__u16 VAR_0, gfp_t VAR_1)
{
 struct sctp_shared_key *VAR_2;


 VAR_2 = FUNC_1(sizeof(struct sctp_shared_key), VAR_1);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(&VAR_2->key_list);
 FUNC_2(&VAR_2->refcnt, 1);
 VAR_2->key_id = VAR_0;

 return VAR_2;
}
