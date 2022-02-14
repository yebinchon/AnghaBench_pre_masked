
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_stream {int * rr_next; int rr_list; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct sctp_stream *VAR_0)
{
 FUNC_0(&VAR_0->rr_list);
 VAR_0->rr_next = ((void*)0);

 return 0;
}
