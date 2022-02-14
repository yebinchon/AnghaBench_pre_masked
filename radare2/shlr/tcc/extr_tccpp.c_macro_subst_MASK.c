
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_level {int* p; struct macro_level* prev; } ;
typedef int TokenString ;
typedef int Sym ;
typedef int CValue ;


 int VAR_0 ;
 int FUNC_0 (int*,int const**,int *) ;
 int VAR_1 ;
 int FUNC_1 (int,int*) ;
 int * FUNC_2 (int) ;
 int* VAR_2 ;
 int FUNC_3 (int *,int **,int *,struct macro_level**) ;
 int* FUNC_4 (int const*) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 () ;
 int VAR_4 ;
 int FUNC_7 (int *,char) ;
 int FUNC_8 (int *,int,int *) ;
 int FUNC_9 (int*) ;

__attribute__((used)) static void FUNC_10(TokenString *VAR_5, Sym **VAR_6,
   const int *VAR_7, struct macro_level **VAR_8)
{
 Sym *VAR_9;
 int *VAR_10;
 const int *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 CValue VAR_15;
 struct macro_level VAR_16;
 int VAR_17;


 VAR_11 = VAR_7;
 VAR_10 = FUNC_4 (VAR_11);

 if (VAR_10) {
  VAR_11 = VAR_10;
 }
 VAR_14 = 0;
 VAR_17 = 0;

 while (FUNC_6 () == 0) {


  if (VAR_11 == ((void*)0)) {
   break;
  }
  FUNC_0 (&VAR_12, &VAR_11, &VAR_15);
  if (VAR_12 == 0) {
   break;
  }
  if (VAR_12 == VAR_1) {

   FUNC_8 (VAR_5, VAR_1, ((void*)0));
   FUNC_0 (&VAR_12, &VAR_11, &VAR_15);
   goto no_subst;
  }
  VAR_9 = FUNC_2 (VAR_12);
  if (VAR_9 != ((void*)0)) {

   if (FUNC_5 (*VAR_6, VAR_12)) {

    FUNC_8 (VAR_5, VAR_1, ((void*)0));
    goto no_subst;
   }
   VAR_16.p = VAR_2;
   if (VAR_8) {
    VAR_16.prev = *VAR_8, *VAR_8 = &VAR_16;
   }
   VAR_2 = (int *) VAR_11;
   VAR_4 = VAR_12;
   VAR_13 = FUNC_3 (VAR_5, VAR_6, VAR_9, VAR_8);
   VAR_11 = (int *) VAR_2;
   VAR_2 = VAR_16.p;
   if (VAR_8 && *VAR_8 == &VAR_16) {
    *VAR_8 = VAR_16.prev;
   }
   if (VAR_13 != 0) {
    goto no_subst;
   }
   if (VAR_3 & VAR_0) {
    VAR_17 = 1;
   }
  } else {
no_subst:
   if (VAR_17) {
    FUNC_7 (VAR_5, ' ');
    VAR_14 = 1;
    VAR_17 = 0;
   }
   if (!FUNC_1 (VAR_12, &VAR_14)) {
    FUNC_8 (VAR_5, VAR_12, &VAR_15);
   }
  }
 }
 if (VAR_10) {
  FUNC_9 (VAR_10);
 }
}
