
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_8__ {int xmin; } ;
struct TYPE_7__ {size_t pgprocno; scalar_t__ databaseId; } ;
struct TYPE_6__ {int xmin; } ;
typedef TYPE_1__ PGXACT ;
typedef TYPE_2__ PGPROC ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_5__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 TYPE_1__* VAR_5 ;

bool
FUNC_6(TransactionId VAR_6, PGPROC *VAR_7)
{
 bool VAR_8 = 0;
 TransactionId VAR_9;
 PGXACT *VAR_10;

 FUNC_0(FUNC_3(VAR_6));
 FUNC_0(VAR_7 != ((void*)0));


 FUNC_1(VAR_3, VAR_0);

 VAR_10 = &VAR_5[VAR_7->pgprocno];







 VAR_9 = FUNC_5(VAR_10->xmin);
 if (VAR_7->databaseId == VAR_1 &&
  FUNC_3(VAR_9) &&
  FUNC_4(VAR_9, VAR_6))
 {
  VAR_2->xmin = VAR_4 = VAR_6;
  VAR_8 = 1;
 }

 FUNC_2(VAR_3);

 return VAR_8;
}
