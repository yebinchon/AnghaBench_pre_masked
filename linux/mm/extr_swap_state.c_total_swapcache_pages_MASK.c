
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_info_struct {int dummy; } ;
struct address_space {scalar_t__ nrpages; } ;


 unsigned int VAR_0 ;
 struct swap_info_struct* FUNC_0 (int ) ;
 unsigned int* VAR_1 ;
 int FUNC_1 (struct swap_info_struct*) ;
 struct address_space** VAR_2 ;
 int FUNC_2 (unsigned int,int) ;
 int FUNC_3 (int ) ;

unsigned long FUNC_4(void)
{
 unsigned int VAR_3, VAR_4, VAR_5;
 unsigned long VAR_6 = 0;
 struct address_space *VAR_7;
 struct swap_info_struct *VAR_8;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  swp_entry_t VAR_9 = FUNC_2(VAR_3, 1);


  if (!FUNC_3(VAR_9))
   continue;

  VAR_8 = FUNC_0(VAR_9);
  if (!VAR_8)
   continue;
  VAR_5 = VAR_1[VAR_3];
  VAR_7 = VAR_2[VAR_3];
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
   VAR_6 += VAR_7[VAR_4].nrpages;
  FUNC_1(VAR_8);
 }
 return VAR_6;
}
