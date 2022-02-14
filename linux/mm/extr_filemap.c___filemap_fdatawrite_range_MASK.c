
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int sync_mode; int range_end; int range_start; int nr_to_write; } ;
struct address_space {int host; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct address_space*,struct writeback_control*) ;
 int FUNC_1 (struct address_space*) ;
 int FUNC_2 (struct address_space*,int ) ;
 int FUNC_3 (struct writeback_control*,int ) ;
 int FUNC_4 (struct writeback_control*) ;

int FUNC_5(struct address_space *VAR_2, loff_t VAR_3,
    loff_t VAR_4, int VAR_5)
{
 int VAR_6;
 struct writeback_control VAR_7 = {
  .sync_mode = VAR_5,
  .nr_to_write = VAR_0,
  .range_start = VAR_3,
  .range_end = VAR_4,
 };

 if (!FUNC_1(VAR_2) ||
     !FUNC_2(VAR_2, VAR_1))
  return 0;

 FUNC_3(&VAR_7, VAR_2->host);
 VAR_6 = FUNC_0(VAR_2, &VAR_7);
 FUNC_4(&VAR_7);
 return VAR_6;
}
