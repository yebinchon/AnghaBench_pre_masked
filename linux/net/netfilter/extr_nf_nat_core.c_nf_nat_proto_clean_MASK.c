
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conn {int status; } ;


 int VAR_0 ;
 int FUNC_0 (struct nf_conn*) ;
 scalar_t__ FUNC_1 (struct nf_conn*,void*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct nf_conn *VAR_1, void *VAR_2)
{
 if (FUNC_1(VAR_1, VAR_2))
  return 1;







 if (FUNC_2(VAR_0, &VAR_1->status))
  FUNC_0(VAR_1);




 return 0;
}
