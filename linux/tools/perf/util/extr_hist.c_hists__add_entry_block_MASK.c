
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hists {int dummy; } ;
struct hist_entry {struct hists* hists; struct block_info* block_info; } ;
struct block_info {int dummy; } ;
struct addr_location {int dummy; } ;


 struct hist_entry* FUNC_0 (struct hists*,struct hist_entry*,struct addr_location*,int) ;

struct hist_entry *FUNC_1(struct hists *VAR_0,
       struct addr_location *VAR_1,
       struct block_info *VAR_2)
{
 struct hist_entry VAR_3 = {
  .block_info = VAR_2,
  .hists = VAR_0,
 }, *VAR_4 = FUNC_0(VAR_0, &VAR_3, VAR_1, 0);

 return VAR_4;
}
