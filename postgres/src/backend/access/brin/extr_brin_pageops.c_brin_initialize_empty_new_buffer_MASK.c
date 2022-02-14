
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int Page ;
typedef int Buffer ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static void
FUNC_10(Relation VAR_2, Buffer VAR_3)
{
 Page VAR_4;

 FUNC_0((VAR_1,
      "brin_initialize_empty_new_buffer: initializing blank page %u",
      FUNC_1(VAR_3)));

 FUNC_6();
 VAR_4 = FUNC_2(VAR_3);
 FUNC_8(VAR_4, VAR_0);
 FUNC_4(VAR_3);
 FUNC_9(VAR_3, 1);
 FUNC_3();






 FUNC_5(VAR_2, FUNC_1(VAR_3),
       FUNC_7(VAR_4));
}
