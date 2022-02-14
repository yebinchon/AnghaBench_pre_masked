
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhashtable_params {int nelem_hint; scalar_t__ min_size; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int) ;

__attribute__((used)) static size_t FUNC_2(const struct rhashtable_params *VAR_1)
{
 size_t VAR_2;

 if (VAR_1->nelem_hint)
  VAR_2 = FUNC_0(FUNC_1(VAR_1->nelem_hint * 4 / 3),
         (unsigned long)VAR_1->min_size);
 else
  VAR_2 = FUNC_0(VAR_0,
         (unsigned long)VAR_1->min_size);

 return VAR_2;
}
