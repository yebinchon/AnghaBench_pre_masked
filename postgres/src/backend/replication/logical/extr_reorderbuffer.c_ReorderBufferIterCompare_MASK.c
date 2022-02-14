
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
struct TYPE_4__ {TYPE_1__* entries; } ;
struct TYPE_3__ {scalar_t__ lsn; } ;
typedef TYPE_2__ ReorderBufferIterTXNState ;
typedef int Datum ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(Datum VAR_0, Datum VAR_1, void *VAR_2)
{
 ReorderBufferIterTXNState *VAR_3 = (ReorderBufferIterTXNState *) VAR_2;
 XLogRecPtr VAR_4 = VAR_3->entries[FUNC_0(VAR_0)].lsn;
 XLogRecPtr VAR_5 = VAR_3->entries[FUNC_0(VAR_1)].lsn;

 if (VAR_4 < VAR_5)
  return 1;
 else if (VAR_4 == VAR_5)
  return 0;
 return -1;
}
