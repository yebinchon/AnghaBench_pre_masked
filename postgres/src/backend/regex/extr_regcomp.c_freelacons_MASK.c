
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subre {int cnfa; } ;


 int FUNC_0 (struct subre*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct subre *VAR_0,
     int VAR_1)
{
 struct subre *VAR_2;
 int VAR_3;

 FUNC_2(VAR_1 > 0);
 for (VAR_2 = VAR_0 + 1, VAR_3 = VAR_1 - 1; VAR_3 > 0; VAR_2++, VAR_3--)
  if (!FUNC_1(VAR_2->cnfa))
   FUNC_3(&VAR_2->cnfa);
 FUNC_0(VAR_0);
}
