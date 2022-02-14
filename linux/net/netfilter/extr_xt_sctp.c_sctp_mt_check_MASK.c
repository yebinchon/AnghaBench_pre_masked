
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_sctp_info {int flags; int invflags; int chunk_match_type; } ;
struct xt_mtchk_param {struct xt_sctp_info* matchinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(const struct xt_mtchk_param *VAR_6)
{
 const struct xt_sctp_info *VAR_7 = VAR_6->matchinfo;

 if (VAR_7->flags & ~VAR_5)
  return -VAR_0;
 if (VAR_7->invflags & ~VAR_5)
  return -VAR_0;
 if (VAR_7->invflags & ~VAR_7->flags)
  return -VAR_0;
 if (!(VAR_7->flags & VAR_4))
  return 0;
 if (VAR_7->chunk_match_type & (VAR_1 |
     VAR_2 | VAR_3))
  return 0;
 return -VAR_0;
}
