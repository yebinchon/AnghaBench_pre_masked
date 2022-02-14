
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XLogRecPtr ;
typedef int Relation ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_6(Relation VAR_4, Buffer VAR_5)
{
 if (FUNC_2(VAR_4))
 {
  XLogRecPtr VAR_6;

  FUNC_3();

  FUNC_5(0, VAR_5, VAR_0 | VAR_1);

  VAR_6 = FUNC_4(VAR_2, VAR_3);

  FUNC_1(FUNC_0(VAR_5), VAR_6);
 }
}
