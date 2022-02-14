
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int pg_atomic_uint32 ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;

__attribute__((used)) static void
FUNC_14(void)
{
 pg_atomic_uint32 VAR_5;
 uint32 VAR_6;
 int VAR_7;

 FUNC_10(&VAR_5, 0);
 FUNC_0(FUNC_11(&VAR_5), 0);
 FUNC_13(&VAR_5, 3);
 FUNC_0(FUNC_11(&VAR_5), 3);
 FUNC_0(FUNC_6(&VAR_5, FUNC_11(&VAR_5) - 2),
      3);
 FUNC_0(FUNC_9(&VAR_5, 1), 4);
 FUNC_0(FUNC_12(&VAR_5, 3), 0);
 FUNC_0(FUNC_3(&VAR_5, 10), 10);
 FUNC_0(FUNC_5(&VAR_5, 5), 10);
 FUNC_0(FUNC_5(&VAR_5, 0), 5);


 FUNC_0(FUNC_6(&VAR_5, VAR_1), 0);
 FUNC_0(FUNC_6(&VAR_5, VAR_1), VAR_1);
 FUNC_6(&VAR_5, 2);
 FUNC_0(FUNC_6(&VAR_5, VAR_2), 0);
 FUNC_0(FUNC_6(&VAR_5, VAR_2 + 1),
      VAR_2);
 FUNC_0(FUNC_6(&VAR_5, VAR_3),
      2 * VAR_2 + 1);
 FUNC_0(FUNC_6(&VAR_5, VAR_3 - 1),
      VAR_2);
 FUNC_6(&VAR_5, 1);
 FUNC_0(FUNC_11(&VAR_5), VAR_4);
 FUNC_0(FUNC_9(&VAR_5, VAR_1), VAR_4);
 FUNC_0(FUNC_11(&VAR_5), (uint32) VAR_1 + 1);
 FUNC_0(FUNC_12(&VAR_5, VAR_1), 1);
 FUNC_12(&VAR_5, 1);


 VAR_6 = 10;
 FUNC_1(!FUNC_4(&VAR_5, &VAR_6, 1));


 for (VAR_7 = 0; VAR_7 < 1000; VAR_7++)
 {
  VAR_6 = 0;
  if (!FUNC_4(&VAR_5, &VAR_6, 1))
   break;
 }
 if (VAR_7 == 1000)
  FUNC_2(VAR_0, "atomic_compare_exchange_u32() never succeeded");
 FUNC_0(FUNC_11(&VAR_5), 1);
 FUNC_13(&VAR_5, 0);


 FUNC_1(!(FUNC_8(&VAR_5, 1) & 1));
 FUNC_1(FUNC_8(&VAR_5, 2) & 1);
 FUNC_0(FUNC_11(&VAR_5), 3);

 FUNC_0(FUNC_7(&VAR_5, ~2) & 3, 3);
 FUNC_0(FUNC_7(&VAR_5, ~1), 1);

 FUNC_0(FUNC_7(&VAR_5, ~0), 0);
}
