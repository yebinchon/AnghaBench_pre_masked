
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {int nft_compat; struct ebt_entry* entryinfo; struct ebt_stp_info* matchinfo; } ;
struct ebt_stp_info {int bitmask; int invflags; } ;
struct ebt_entry {int bitmask; int destmsk; int destmac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const struct xt_mtchk_param *VAR_4)
{
 const struct ebt_stp_info *VAR_5 = VAR_4->matchinfo;
 const struct ebt_entry *VAR_6 = VAR_4->entryinfo;

 if (VAR_5->bitmask & ~VAR_1 || VAR_5->invflags & ~VAR_1 ||
     !(VAR_5->bitmask & VAR_1))
  return -VAR_2;

 if (!VAR_4->nft_compat &&
     (!FUNC_0(VAR_6->destmac, VAR_3) ||
      !(VAR_6->bitmask & VAR_0) ||
      !FUNC_1(VAR_6->destmsk)))
  return -VAR_2;

 return 0;
}
