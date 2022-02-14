
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_log_buf {scalar_t__ count; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nf_log_buf* FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 struct nf_log_buf* FUNC_3 (int *,int *) ;

struct nf_log_buf *FUNC_4(void)
{
 struct nf_log_buf *VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);

 if (FUNC_2(!VAR_2)) {
  FUNC_1();
  do {
   VAR_2 = FUNC_3(&VAR_1, ((void*)0));
  } while (!VAR_2);
 }
 VAR_2->count = 0;
 return VAR_2;
}
