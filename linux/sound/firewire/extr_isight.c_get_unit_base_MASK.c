
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct fw_unit {int directory; } ;
struct fw_csr_iterator {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fw_csr_iterator*,int ) ;
 scalar_t__ FUNC_1 (struct fw_csr_iterator*,int*,int*) ;

__attribute__((used)) static u64 FUNC_2(struct fw_unit *VAR_2)
{
 struct fw_csr_iterator VAR_3;
 int VAR_4, VAR_5;

 FUNC_0(&VAR_3, VAR_2->directory);
 while (FUNC_1(&VAR_3, &VAR_4, &VAR_5))
  if (VAR_4 == VAR_0)
   return VAR_1 + VAR_5 * 4;
 return 0;
}
