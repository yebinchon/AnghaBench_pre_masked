
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_2__ {int (* memcpy ) (void*,void*,size_t) ;} ;
struct function {TYPE_1__ fn; } ;
typedef int (* memcpy_t ) (void*,void*,size_t) ;


 unsigned long long FUNC_0 () ;
 int FUNC_1 (void*,int ,size_t) ;
 int VAR_0 ;

__attribute__((used)) static u64 FUNC_2(const struct function *VAR_1, size_t VAR_2, void *VAR_3, void *VAR_4)
{
 u64 VAR_5 = 0ULL, VAR_6 = 0ULL;
 memcpy_t VAR_7 = VAR_1->fn.memcpy;
 int VAR_8;


 FUNC_1(VAR_3, 0, VAR_2);





 VAR_7(VAR_4, VAR_3, VAR_2);

 VAR_5 = FUNC_0();
 for (VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8)
  VAR_7(VAR_4, VAR_3, VAR_2);
 VAR_6 = FUNC_0();

 return VAR_6 - VAR_5;
}
