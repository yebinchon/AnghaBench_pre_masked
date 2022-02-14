
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type_mismatch_data_common {scalar_t__ alignment; } ;


 int FUNC_0 (unsigned long,scalar_t__) ;
 int FUNC_1 (struct type_mismatch_data_common*,unsigned long) ;
 int FUNC_2 (struct type_mismatch_data_common*) ;
 int FUNC_3 (struct type_mismatch_data_common*,unsigned long) ;
 int FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct type_mismatch_data_common *VAR_0,
    unsigned long VAR_1)
{
 unsigned long VAR_2 = FUNC_5();

 if (!VAR_1)
  FUNC_2(VAR_0);
 else if (VAR_0->alignment && !FUNC_0(VAR_1, VAR_0->alignment))
  FUNC_1(VAR_0, VAR_1);
 else
  FUNC_3(VAR_0, VAR_1);

 FUNC_4(VAR_2);
}
