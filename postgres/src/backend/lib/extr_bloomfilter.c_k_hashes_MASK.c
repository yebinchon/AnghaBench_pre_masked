
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64 ;
typedef scalar_t__ uint32 ;
struct TYPE_3__ {int m; int k_hash_funcs; int seed; } ;
typedef TYPE_1__ bloom_filter ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,size_t,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_3(bloom_filter *VAR_0, uint32 *VAR_1, unsigned char *VAR_2, size_t VAR_3)
{
 uint64 VAR_4;
 uint32 VAR_5,
    VAR_6;
 uint64 VAR_7;
 int VAR_8;


 VAR_4 = FUNC_0(FUNC_1(VAR_2, VAR_3, VAR_0->seed));
 VAR_5 = (uint32) VAR_4;
 VAR_6 = (uint32) (VAR_4 >> 32);
 VAR_7 = VAR_0->m;

 VAR_5 = FUNC_2(VAR_5, VAR_7);
 VAR_6 = FUNC_2(VAR_6, VAR_7);


 VAR_1[0] = VAR_5;
 for (VAR_8 = 1; VAR_8 < VAR_0->k_hash_funcs; VAR_8++)
 {
  VAR_5 = FUNC_2(VAR_5 + VAR_6, VAR_7);
  VAR_6 = FUNC_2(VAR_6 + VAR_8, VAR_7);

  VAR_1[VAR_8] = VAR_5;
 }
}
