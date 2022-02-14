
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_fdb_entry {scalar_t__ is_static; scalar_t__ is_local; } ;
struct net_bridge {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct net_bridge const*,struct net_bridge_fdb_entry const*) ;

__attribute__((used)) static int FUNC_1(const struct net_bridge *VAR_4,
        const struct net_bridge_fdb_entry *VAR_5)
{
 if (VAR_5->is_local)
  return VAR_1;
 else if (VAR_5->is_static)
  return VAR_0;
 else if (FUNC_0(VAR_4, VAR_5))
  return VAR_3;
 else
  return VAR_2;
}
