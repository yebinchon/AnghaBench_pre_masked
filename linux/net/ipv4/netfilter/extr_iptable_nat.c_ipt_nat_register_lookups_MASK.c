
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (struct net*,int *) ;
 int FUNC_2 (struct net*,int *) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  VAR_3 = FUNC_1(VAR_1, &VAR_0[VAR_2]);
  if (VAR_3) {
   while (VAR_2)
    FUNC_2(VAR_1, &VAR_0[--VAR_2]);

   return VAR_3;
  }
 }

 return 0;
}
