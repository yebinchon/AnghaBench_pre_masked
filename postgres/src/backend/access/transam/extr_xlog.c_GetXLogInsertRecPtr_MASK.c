
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64 ;
typedef int XLogRecPtr ;
struct TYPE_3__ {int insertpos_lck; int CurrBytePos; } ;
typedef TYPE_1__ XLogCtlInsert ;
struct TYPE_4__ {TYPE_1__ Insert; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_2__* VAR_0 ;

XLogRecPtr
FUNC_3(void)
{
 XLogCtlInsert *VAR_1 = &VAR_0->Insert;
 uint64 VAR_2;

 FUNC_0(&VAR_1->insertpos_lck);
 VAR_2 = VAR_1->CurrBytePos;
 FUNC_1(&VAR_1->insertpos_lck);

 return FUNC_2(VAR_2);
}
