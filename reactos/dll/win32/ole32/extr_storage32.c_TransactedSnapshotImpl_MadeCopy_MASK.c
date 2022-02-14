
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* entries; } ;
typedef TYPE_2__ TransactedSnapshotImpl ;
struct TYPE_4__ {scalar_t__ newTransactedParentEntry; scalar_t__ transactedParentEntry; } ;
typedef size_t DirRef ;
typedef int BOOL ;


 size_t VAR_0 ;

__attribute__((used)) static inline BOOL FUNC_0(
  TransactedSnapshotImpl* VAR_1, DirRef VAR_2)
{
  return VAR_2 != VAR_0 &&
    VAR_1->entries[VAR_2].newTransactedParentEntry != VAR_1->entries[VAR_2].transactedParentEntry;
}
