
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef int DES_cblock ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(void *VAR_2, off_t VAR_3)
{
 DES_cblock *VAR_4;
 int VAR_5;

 VAR_5 = VAR_3 / 8;
 VAR_4 = (DES_cblock *) VAR_2;
 while (VAR_5--) {
  FUNC_0(VAR_4, VAR_4, &VAR_1, VAR_0);
  VAR_4++;
 }

 VAR_5 = (VAR_3 - 3) / 8;
 VAR_4 = (DES_cblock *) (VAR_2 + 3);
 while (VAR_5--) {
  FUNC_0(VAR_4, VAR_4, &VAR_1, VAR_0);
  VAR_4++;
 }
}
