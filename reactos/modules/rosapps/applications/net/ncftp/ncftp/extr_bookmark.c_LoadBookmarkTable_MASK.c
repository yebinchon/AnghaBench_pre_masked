
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef int Bookmark ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int * FUNC_2 (int*) ;
 int FUNC_3 () ;
 int * FUNC_4 (size_t,size_t) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *,int ,int) ;
 scalar_t__ FUNC_6 (int *,size_t) ;

int
FUNC_7(void)
{
 int VAR_2, VAR_3;
 FILE *VAR_4;

 VAR_4 = FUNC_2(&VAR_3);
 if (VAR_4 == ((void*)0)) {
  VAR_3 = 0;
 }
 if ((VAR_3 != VAR_1) && (VAR_0 != ((void*)0))) {

  VAR_0 = (Bookmark *) FUNC_6(VAR_0, (size_t) (VAR_3 + 1) * sizeof(Bookmark));
  FUNC_5(VAR_0, 0, (VAR_3 + 1) * sizeof(Bookmark));
 } else {
  VAR_0 = FUNC_4((size_t) (VAR_3 + 1), (size_t) sizeof(Bookmark));
 }

 if (VAR_0 == ((void*)0)) {
  FUNC_0(VAR_4);
  return (-1);
 }

 for (VAR_2=0; VAR_2<VAR_3; VAR_2++) {
  if (FUNC_1(VAR_4, VAR_0 + VAR_2) < 0) {
   break;
  }
 }
 VAR_1 = VAR_2;

 FUNC_0(VAR_4);
 FUNC_3();
 return (0);
}
