
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_endpoint {int * auth_hmacs; int * auth_chunk_list; int * auth_hmacs_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct sctp_endpoint *VAR_0)
{
 FUNC_0(VAR_0->auth_hmacs_list);
 FUNC_0(VAR_0->auth_chunk_list);
 VAR_0->auth_hmacs_list = ((void*)0);
 VAR_0->auth_chunk_list = ((void*)0);
 FUNC_1(VAR_0->auth_hmacs);
 VAR_0->auth_hmacs = ((void*)0);
}
