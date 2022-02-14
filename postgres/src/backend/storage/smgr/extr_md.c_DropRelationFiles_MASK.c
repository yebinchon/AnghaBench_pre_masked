
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SMgrRelation ;
typedef int RelFileNode ;
typedef scalar_t__ ForkNumber ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int ,int ) ;

void
FUNC_6(RelFileNode *VAR_2, int VAR_3, bool VAR_4)
{
 SMgrRelation *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(sizeof(SMgrRelation) * VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
 {
  SMgrRelation VAR_7 = FUNC_5(VAR_2[VAR_6], VAR_0);

  if (VAR_4)
  {
   ForkNumber VAR_8;

   for (VAR_8 = 0; VAR_8 <= VAR_1; VAR_8++)
    FUNC_0(VAR_2[VAR_6], VAR_8);
  }
  VAR_5[VAR_6] = VAR_7;
 }

 FUNC_4(VAR_5, VAR_3, VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  FUNC_3(VAR_5[VAR_6]);
 FUNC_2(VAR_5);
}
