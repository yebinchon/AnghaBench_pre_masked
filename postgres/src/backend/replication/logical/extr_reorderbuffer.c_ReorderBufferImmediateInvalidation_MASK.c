
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int SharedInvalidationMessage ;
typedef int ReorderBuffer ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;

void
FUNC_5(ReorderBuffer *VAR_0, uint32 VAR_1,
           SharedInvalidationMessage *VAR_2)
{
 bool VAR_3 = FUNC_2();
 int VAR_4;

 if (VAR_3)
  FUNC_1("replay");







 if (VAR_3)
  FUNC_0();

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_3(&VAR_2[VAR_4]);

 if (VAR_3)
  FUNC_4();
}
