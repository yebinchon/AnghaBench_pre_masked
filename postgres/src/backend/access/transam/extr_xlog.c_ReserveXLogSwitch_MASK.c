
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef scalar_t__ uint32 ;
typedef int XLogRecPtr ;
struct TYPE_3__ {scalar_t__ CurrBytePos; scalar_t__ PrevBytePos; int insertpos_lck; } ;
typedef TYPE_1__ XLogCtlInsert ;
struct TYPE_4__ {TYPE_1__ Insert; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool
FUNC_8(XLogRecPtr *VAR_3, XLogRecPtr *VAR_4, XLogRecPtr *VAR_5)
{
 XLogCtlInsert *VAR_6 = &VAR_1->Insert;
 uint64 VAR_7;
 uint64 VAR_8;
 uint64 VAR_9;
 uint32 VAR_10 = FUNC_1(VAR_0);
 XLogRecPtr VAR_11;
 uint32 VAR_12;







 FUNC_2(&VAR_6->insertpos_lck);

 VAR_7 = VAR_6->CurrBytePos;

 VAR_11 = FUNC_4(VAR_7);
 if (FUNC_7(VAR_11, VAR_2) == 0)
 {
  FUNC_3(&VAR_6->insertpos_lck);
  *VAR_4 = *VAR_3 = VAR_11;
  return 0;
 }

 VAR_8 = VAR_7 + VAR_10;
 VAR_9 = VAR_6->PrevBytePos;

 *VAR_3 = FUNC_5(VAR_7);
 *VAR_4 = FUNC_4(VAR_8);

 VAR_12 = VAR_2 - FUNC_7(*VAR_4, VAR_2);
 if (VAR_12 != VAR_2)
 {

  *VAR_4 += VAR_12;
  VAR_8 = FUNC_6(*VAR_4);
 }
 VAR_6->CurrBytePos = VAR_8;
 VAR_6->PrevBytePos = VAR_7;

 FUNC_3(&VAR_6->insertpos_lck);

 *VAR_5 = FUNC_5(VAR_9);

 FUNC_0(FUNC_7(*VAR_4, VAR_2) == 0);
 FUNC_0(FUNC_6(*VAR_4) == VAR_8);
 FUNC_0(FUNC_6(*VAR_3) == VAR_7);
 FUNC_0(FUNC_6(*VAR_5) == VAR_9);

 return 1;
}
