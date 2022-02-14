
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef int TransactionId ;
struct TYPE_4__ {int xcnt; int xcnt_space; int * xip; } ;
struct TYPE_5__ {TYPE_1__ committed; } ;
typedef TYPE_2__ SnapBuild ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int * FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4(SnapBuild *VAR_1, TransactionId VAR_2)
{
 FUNC_0(FUNC_1(VAR_2));

 if (VAR_1->committed.xcnt == VAR_1->committed.xcnt_space)
 {
  VAR_1->committed.xcnt_space = VAR_1->committed.xcnt_space * 2 + 1;

  FUNC_2(VAR_0, "increasing space for committed transactions to %u",
    (uint32) VAR_1->committed.xcnt_space);

  VAR_1->committed.xip = FUNC_3(VAR_1->committed.xip,
            VAR_1->committed.xcnt_space * sizeof(TransactionId));
 }






 VAR_1->committed.xip[VAR_1->committed.xcnt++] = VAR_2;
}
