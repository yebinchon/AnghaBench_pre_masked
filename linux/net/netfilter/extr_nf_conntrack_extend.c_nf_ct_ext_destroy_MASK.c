
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_ct_ext_type {int (* destroy ) (struct nf_conn*) ;} ;
struct nf_conn {int dummy; } ;


 unsigned int VAR_0 ;
 int * VAR_1 ;
 struct nf_ct_ext_type* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct nf_conn*) ;

void FUNC_4(struct nf_conn *VAR_2)
{
 unsigned int VAR_3;
 struct nf_ct_ext_type *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_1();
  VAR_4 = FUNC_0(VAR_1[VAR_3]);





  if (VAR_4 && VAR_4->destroy)
   VAR_4->destroy(VAR_2);
  FUNC_2();
 }
}
