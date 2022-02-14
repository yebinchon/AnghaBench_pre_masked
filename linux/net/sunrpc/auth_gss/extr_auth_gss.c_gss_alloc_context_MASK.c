
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gss_cl_ctx {int gc_seq; int count; int gc_seq_lock; int gc_proc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gss_cl_ctx* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct gss_cl_ctx *
FUNC_3(void)
{
 struct gss_cl_ctx *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (VAR_2 != ((void*)0)) {
  VAR_2->gc_proc = VAR_1;
  VAR_2->gc_seq = 1;
  FUNC_2(&VAR_2->gc_seq_lock);
  FUNC_1(&VAR_2->count,1);
 }
 return VAR_2;
}
