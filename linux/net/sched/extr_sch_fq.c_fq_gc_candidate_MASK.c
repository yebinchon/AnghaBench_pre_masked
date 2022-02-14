
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fq_flow {scalar_t__ age; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct fq_flow const*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(const struct fq_flow *VAR_2)
{
 return FUNC_0(VAR_2) &&
        FUNC_1(VAR_1, VAR_2->age + VAR_0);
}
