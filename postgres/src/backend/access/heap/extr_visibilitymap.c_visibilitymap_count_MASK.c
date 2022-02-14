
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int Relation ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,scalar_t__,int) ;

void
FUNC_8(Relation VAR_3, BlockNumber *VAR_4, BlockNumber *VAR_5)
{
 BlockNumber VAR_6;
 BlockNumber VAR_7 = 0;
 BlockNumber VAR_8 = 0;


 FUNC_0(VAR_4);

 for (VAR_6 = 0;; VAR_6++)
 {
  Buffer VAR_9;
  uint64 *VAR_10;
  int VAR_11;






  VAR_9 = FUNC_7(VAR_3, VAR_6, 0);
  if (!FUNC_2(VAR_9))
   break;






  VAR_10 = (uint64 *) FUNC_3(FUNC_1(VAR_9));

  FUNC_5(VAR_1 % sizeof(uint64) == 0,
       "unsupported MAPSIZE");
  if (VAR_5 == ((void*)0))
  {
   for (VAR_11 = 0; VAR_11 < VAR_1 / sizeof(uint64); VAR_11++)
    VAR_7 += FUNC_6(VAR_10[VAR_11] & VAR_2);
  }
  else
  {
   for (VAR_11 = 0; VAR_11 < VAR_1 / sizeof(uint64); VAR_11++)
   {
    VAR_7 += FUNC_6(VAR_10[VAR_11] & VAR_2);
    VAR_8 += FUNC_6(VAR_10[VAR_11] & VAR_0);
   }
  }

  FUNC_4(VAR_9);
 }

 *VAR_4 = VAR_7;
 if (VAR_5)
  *VAR_5 = VAR_8;
}
