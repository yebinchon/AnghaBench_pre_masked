
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SharedInvalidationMessage ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int const*,int) ;
 int VAR_3 ;
 int * FUNC_1 (int) ;
 int * FUNC_2 (int *,int) ;

__attribute__((used)) static void
FUNC_3(const SharedInvalidationMessage *VAR_4, int VAR_5)
{



 if (VAR_1 == ((void*)0))
 {
  VAR_2 = VAR_0;
  VAR_3 = 0;





  VAR_1 = FUNC_1(VAR_2
           * sizeof(SharedInvalidationMessage));
 }

 if ((VAR_3 + VAR_5) > VAR_2)
 {
  while ((VAR_3 + VAR_5) > VAR_2)
   VAR_2 *= 2;

  VAR_1 = FUNC_2(VAR_1,
             VAR_2
             * sizeof(SharedInvalidationMessage));
 }




 FUNC_0(VAR_1 + VAR_3,
     VAR_4, VAR_5 * sizeof(SharedInvalidationMessage));
 VAR_3 += VAR_5;
}
