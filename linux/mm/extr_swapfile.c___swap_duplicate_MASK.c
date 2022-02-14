
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_info_struct {unsigned char* swap_map; } ;
struct swap_cluster_info {int dummy; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned char VAR_7 ;
 struct swap_info_struct* FUNC_0 (int ) ;
 struct swap_cluster_info* FUNC_1 (struct swap_info_struct*,unsigned long) ;
 int FUNC_2 (struct swap_info_struct*) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (struct swap_info_struct*,unsigned long,unsigned char) ;
 unsigned long FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct swap_info_struct*,struct swap_cluster_info*) ;

__attribute__((used)) static int FUNC_8(swp_entry_t VAR_8, unsigned char VAR_9)
{
 struct swap_info_struct *VAR_10;
 struct swap_cluster_info *VAR_11;
 unsigned long VAR_12;
 unsigned char VAR_13;
 unsigned char VAR_14;
 int VAR_15 = -VAR_2;

 VAR_10 = FUNC_0(VAR_8);
 if (!VAR_10)
  goto out;

 VAR_12 = FUNC_5(VAR_8);
 VAR_11 = FUNC_1(VAR_10, VAR_12);

 VAR_13 = VAR_10->swap_map[VAR_12];





 if (FUNC_6(FUNC_3(VAR_13) == VAR_6)) {
  VAR_15 = -VAR_3;
  goto unlock_out;
 }

 VAR_14 = VAR_13 & VAR_5;
 VAR_13 &= ~VAR_5;
 VAR_15 = 0;

 if (VAR_9 == VAR_5) {


  if (!VAR_14 && VAR_13)
   VAR_14 = VAR_5;
  else if (VAR_14)
   VAR_15 = -VAR_1;
  else
   VAR_15 = -VAR_3;

 } else if (VAR_13 || VAR_14) {

  if ((VAR_13 & ~VAR_0) < VAR_7)
   VAR_13 += VAR_9;
  else if ((VAR_13 & ~VAR_0) > VAR_7)
   VAR_15 = -VAR_2;
  else if (FUNC_4(VAR_10, VAR_12, VAR_13))
   VAR_13 = VAR_0;
  else
   VAR_15 = -VAR_4;
 } else
  VAR_15 = -VAR_3;

 VAR_10->swap_map[VAR_12] = VAR_13 | VAR_14;

unlock_out:
 FUNC_7(VAR_10, VAR_11);
out:
 if (VAR_10)
  FUNC_2(VAR_10);
 return VAR_15;
}
