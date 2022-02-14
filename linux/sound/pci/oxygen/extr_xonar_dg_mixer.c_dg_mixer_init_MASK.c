
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxygen {int card; } ;


 unsigned int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (struct oxygen*) ;
 int FUNC_2 (struct oxygen*) ;
 int FUNC_3 (struct oxygen*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,struct oxygen*) ;

__attribute__((used)) static int FUNC_6(struct oxygen *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
 FUNC_3(VAR_1);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); ++VAR_2) {
  VAR_3 = FUNC_4(VAR_1->card,
      FUNC_5(&VAR_0[VAR_2], VAR_1));
  if (VAR_3 < 0)
   return VAR_3;
 }

 return 0;
}
