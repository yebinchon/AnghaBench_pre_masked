
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int trancheId; char* trancheName; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 char const** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char** VAR_15 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_16 ;
 TYPE_1__* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static void
FUNC_3(void)
{
 int VAR_20;

 if (VAR_0 == ((void*)0))
 {
  VAR_1 = 128;
  VAR_0 = (const char **)
   FUNC_2(VAR_19,
           VAR_1 * sizeof(char *));
  FUNC_0(VAR_1 >= VAR_3);
 }

 for (VAR_20 = 0; VAR_20 < VAR_16; ++VAR_20)
  FUNC_1(VAR_20, VAR_15[VAR_20]);

 FUNC_1(VAR_2, "buffer_mapping");
 FUNC_1(VAR_4, "lock_manager");
 FUNC_1(VAR_8,
        "predicate_lock_manager");
 FUNC_1(VAR_7,
        "parallel_query_dsa");
 FUNC_1(VAR_9,
        "session_dsa");
 FUNC_1(VAR_10,
        "session_record_table");
 FUNC_1(VAR_11,
        "session_typmod_table");
 FUNC_1(VAR_12,
        "shared_tuplestore");
 FUNC_1(VAR_14, "tbm");
 FUNC_1(VAR_5, "parallel_append");
 FUNC_1(VAR_6, "parallel_hash_join");
 FUNC_1(VAR_13, "serializable_xact");


 for (VAR_20 = 0; VAR_20 < VAR_18; VAR_20++)
  FUNC_1(VAR_17[VAR_20].trancheId,
         VAR_17[VAR_20].trancheName);
}
