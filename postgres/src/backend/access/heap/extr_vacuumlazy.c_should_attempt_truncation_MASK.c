
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ truncate; } ;
typedef TYPE_1__ VacuumParams ;
struct TYPE_6__ {int rel_pages; int nonempty_pages; } ;
typedef TYPE_2__ LVRelStats ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool
FUNC_0(VacuumParams *VAR_4, LVRelStats *VAR_5)
{
 BlockNumber VAR_6;

 if (VAR_4->truncate == VAR_2)
  return 0;

 VAR_6 = VAR_5->rel_pages - VAR_5->nonempty_pages;
 if (VAR_6 > 0 &&
  (VAR_6 >= VAR_1 ||
   VAR_6 >= VAR_5->rel_pages / VAR_0) &&
  VAR_3 < 0)
  return 1;
 else
  return 0;
}
