
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int datapagemap_t ;
typedef int datapagemap_iterator_t ;
typedef int BlockNumber ;


 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;

void
FUNC_4(datapagemap_t *VAR_0)
{
 datapagemap_iterator_t *VAR_1;
 BlockNumber VAR_2;

 VAR_1 = FUNC_0(VAR_0);
 while (FUNC_1(VAR_1, &VAR_2))
  FUNC_3("block %u", VAR_2);

 FUNC_2(VAR_1);
}
