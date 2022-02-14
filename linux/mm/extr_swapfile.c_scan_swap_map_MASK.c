
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_info_struct {int dummy; } ;


 int FUNC_0 (struct swap_info_struct*,unsigned char,int,int *) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct swap_info_struct *VAR_0,
       unsigned char VAR_1)
{
 swp_entry_t VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, 1, &VAR_2);

 if (VAR_3)
  return FUNC_1(VAR_2);
 else
  return 0;

}
