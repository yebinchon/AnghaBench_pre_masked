
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int BufferAccessStrategy ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(Relation VAR_2, BufferAccessStrategy VAR_3)
{
 BlockNumber VAR_4;
 BlockNumber VAR_5;





 VAR_4 = FUNC_3(VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
 {
  Buffer VAR_6;

  FUNC_0();

  VAR_6 = FUNC_2(VAR_2, VAR_0, VAR_5,
         VAR_1, VAR_3);

  FUNC_5(VAR_2, VAR_6);

  FUNC_4(VAR_6);
 }






 FUNC_1(VAR_2);
}
