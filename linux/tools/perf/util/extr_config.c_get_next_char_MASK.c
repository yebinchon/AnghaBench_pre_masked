
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_4;
 FILE *VAR_5;

 VAR_4 = '\n';
 if ((VAR_5 = VAR_1) != ((void*)0)) {
  VAR_4 = FUNC_0(VAR_5);
  if (VAR_4 == '\r') {

   VAR_4 = FUNC_0(VAR_5);
   if (VAR_4 != '\n') {
    FUNC_1(VAR_4, VAR_5);
    VAR_4 = '\r';
   }
  }
  if (VAR_4 == '\n')
   VAR_3++;
  if (VAR_4 == VAR_0) {
   VAR_2 = 1;
   VAR_4 = '\n';
  }
 }
 return VAR_4;
}
