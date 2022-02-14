
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef scalar_t__ Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__*) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(Relation VAR_3, Buffer VAR_4, Buffer VAR_5,
      BlockNumber VAR_6, BlockNumber VAR_7,
      Buffer *VAR_8, Buffer *VAR_9)
{
 bool VAR_10;
 bool VAR_11;

 FUNC_0(FUNC_2(VAR_4));
 FUNC_0(VAR_5 == VAR_2 || VAR_6 <= VAR_7);

 while (1)
 {

  VAR_10 = FUNC_4(FUNC_1(VAR_4))
   && !FUNC_6(VAR_6, *VAR_8);
  VAR_11 = VAR_5 != VAR_2
   && FUNC_4(FUNC_1(VAR_5))
   && !FUNC_6(VAR_7, *VAR_9);
  if (!VAR_10 && !VAR_11)
   return;


  FUNC_3(VAR_4, VAR_1);
  if (VAR_5 != VAR_2 && VAR_5 != VAR_4)
   FUNC_3(VAR_5, VAR_1);


  if (VAR_10)
   FUNC_5(VAR_3, VAR_6, VAR_8);
  if (VAR_11)
   FUNC_5(VAR_3, VAR_7, VAR_9);


  FUNC_3(VAR_4, VAR_0);
  if (VAR_5 != VAR_2 && VAR_5 != VAR_4)
   FUNC_3(VAR_5, VAR_0);







  if (VAR_5 == VAR_2 || VAR_4 == VAR_5
   || (VAR_10 && VAR_11))
   break;
 }
}
