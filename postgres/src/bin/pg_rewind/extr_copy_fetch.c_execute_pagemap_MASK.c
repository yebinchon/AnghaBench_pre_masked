
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef int datapagemap_t ;
typedef int datapagemap_iterator_t ;
typedef int BlockNumber ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,int,int,int) ;

__attribute__((used)) static void
FUNC_4(datapagemap_t *VAR_1, const char *VAR_2)
{
 datapagemap_iterator_t *VAR_3;
 BlockNumber VAR_4;
 off_t VAR_5;

 VAR_3 = FUNC_0(VAR_1);
 while (FUNC_1(VAR_3, &VAR_4))
 {
  VAR_5 = VAR_4 * VAR_0;
  FUNC_3(VAR_2, VAR_5, VAR_5 + VAR_0, 0);

 }
 FUNC_2(VAR_3);
}
