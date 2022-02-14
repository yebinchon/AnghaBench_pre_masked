
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Size ;
typedef int Oid ;
typedef int HASH_SEQ_STATUS ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;

void
FUNC_4(void *VAR_2, Size VAR_3)
{
 Oid *VAR_4 = (Oid *) VAR_2;





 FUNC_0(VAR_3 == FUNC_1());


 if (VAR_1)
 {
  HASH_SEQ_STATUS VAR_5;
  Oid *VAR_6;

  FUNC_2(&VAR_5, VAR_1);
  while ((VAR_6 = (Oid *) FUNC_3(&VAR_5)))
   *VAR_4++ = *VAR_6;
 }


 *VAR_4 = VAR_0;





 FUNC_0((char *) (VAR_4 + 1) == ((char *) VAR_2) + VAR_3);
}
