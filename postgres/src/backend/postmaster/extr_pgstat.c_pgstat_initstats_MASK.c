
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ t_id; } ;
struct TYPE_6__ {scalar_t__ rd_id; TYPE_1__* rd_rel; TYPE_4__* pgstat_info; } ;
struct TYPE_5__ {char relkind; int relisshared; } ;
typedef TYPE_2__* Relation ;
typedef scalar_t__ Oid ;


 scalar_t__ VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 TYPE_4__* FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

void
FUNC_1(Relation VAR_8)
{
 Oid VAR_9 = VAR_8->rd_id;
 char VAR_10 = VAR_8->rd_rel->relkind;


 if (!(VAR_10 == VAR_3 ||
    VAR_10 == VAR_2 ||
    VAR_10 == VAR_1 ||
    VAR_10 == VAR_5 ||
    VAR_10 == VAR_4))
 {
  VAR_8->pgstat_info = ((void*)0);
  return;
 }

 if (VAR_6 == VAR_0 || !VAR_7)
 {

  VAR_8->pgstat_info = ((void*)0);
  return;
 }





 if (VAR_8->pgstat_info != ((void*)0) &&
  VAR_8->pgstat_info->t_id == VAR_9)
  return;


 VAR_8->pgstat_info = FUNC_0(VAR_9, VAR_8->rd_rel->relisshared);
}
