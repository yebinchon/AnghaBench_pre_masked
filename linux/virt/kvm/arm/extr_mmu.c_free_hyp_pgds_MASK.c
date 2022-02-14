
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pgd_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *,int ,scalar_t__) ;

void FUNC_8(void)
{
 pgd_t *VAR_10;

 FUNC_4(&VAR_8);

 VAR_10 = VAR_2 ? VAR_2 : VAR_5;

 if (VAR_10) {

  if (!VAR_7)
   VAR_7 = VAR_4;
  FUNC_6(VAR_10, VAR_7,
          VAR_4 + VAR_1 - VAR_7);
 }

 if (VAR_2) {
  FUNC_2((unsigned long)VAR_2, VAR_6);
  VAR_2 = ((void*)0);
 }

 if (VAR_5) {
  FUNC_7(VAR_5, FUNC_3(VAR_0),
    (uintptr_t)VAR_3 - VAR_0);

  FUNC_2((unsigned long)VAR_5, VAR_6);
  VAR_5 = ((void*)0);
 }
 if (VAR_9) {
  FUNC_0(VAR_9);
  FUNC_1((unsigned long)VAR_9);
  VAR_9 = ((void*)0);
 }

 FUNC_5(&VAR_8);
}
