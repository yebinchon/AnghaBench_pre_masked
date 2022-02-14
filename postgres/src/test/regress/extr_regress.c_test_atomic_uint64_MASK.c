
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int pg_atomic_uint64 ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
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
 pg_atomic_uint64 VAR_1;
 uint64 VAR_2;
 int VAR_3;

 FUNC_10(&VAR_1, 0);
 FUNC_0(FUNC_11(&VAR_1), 0);
 FUNC_13(&VAR_1, 3);
 FUNC_0(FUNC_11(&VAR_1), 3);
 FUNC_0(FUNC_6(&VAR_1, FUNC_11(&VAR_1) - 2),
      3);
 FUNC_0(FUNC_9(&VAR_1, 1), 4);
 FUNC_0(FUNC_12(&VAR_1, 3), 0);
 FUNC_0(FUNC_3(&VAR_1, 10), 10);
 FUNC_0(FUNC_5(&VAR_1, 5), 10);
 FUNC_0(FUNC_5(&VAR_1, 0), 5);


 VAR_2 = 10;
 FUNC_1(!FUNC_4(&VAR_1, &VAR_2, 1));


 for (VAR_3 = 0; VAR_3 < 100; VAR_3++)
 {
  VAR_2 = 0;
  if (!FUNC_4(&VAR_1, &VAR_2, 1))
   break;
 }
 if (VAR_3 == 100)
  FUNC_2(VAR_0, "atomic_compare_exchange_u64() never succeeded");
 FUNC_0(FUNC_11(&VAR_1), 1);

 FUNC_13(&VAR_1, 0);


 FUNC_1(!(FUNC_8(&VAR_1, 1) & 1));
 FUNC_1(FUNC_8(&VAR_1, 2) & 1);
 FUNC_0(FUNC_11(&VAR_1), 3);

 FUNC_0((FUNC_7(&VAR_1, ~2) & 3), 3);
 FUNC_0(FUNC_7(&VAR_1, ~1), 1);

 FUNC_0(FUNC_7(&VAR_1, ~0), 0);
}
