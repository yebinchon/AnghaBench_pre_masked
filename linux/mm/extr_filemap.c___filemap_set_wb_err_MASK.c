
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_space {int wb_err; } ;
typedef int errseq_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct address_space*,int ) ;

void FUNC_2(struct address_space *VAR_0, int VAR_1)
{
 errseq_t VAR_2 = FUNC_0(&VAR_0->wb_err, VAR_1);

 FUNC_1(VAR_0, VAR_2);
}
