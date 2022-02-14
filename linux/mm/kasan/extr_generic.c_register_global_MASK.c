
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kasan_global {scalar_t__ size_with_redzone; scalar_t__ beg; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 size_t FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct kasan_global *VAR_2)
{
 size_t VAR_3 = FUNC_2(VAR_2->size, VAR_1);

 FUNC_1(VAR_2->beg, VAR_2->size);

 FUNC_0(VAR_2->beg + VAR_3,
  VAR_2->size_with_redzone - VAR_3,
  VAR_0);
}
