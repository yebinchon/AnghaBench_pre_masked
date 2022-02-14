
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char XidStatus ;
typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_5__ {TYPE_1__* shared; } ;
struct TYPE_4__ {char** page_buffer; int * group_lsn; } ;


 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

XidStatus
FUNC_6(TransactionId VAR_4, XLogRecPtr *VAR_5)
{
 int VAR_6 = FUNC_5(VAR_4);
 int VAR_7 = FUNC_4(VAR_4);
 int VAR_8 = FUNC_3(VAR_4) * VAR_0;
 int VAR_9;
 int VAR_10;
 char *VAR_11;
 XidStatus VAR_12;



 VAR_9 = FUNC_2(VAR_3, VAR_6, VAR_4);
 VAR_11 = VAR_3->shared->page_buffer[VAR_9] + VAR_7;

 VAR_12 = (*VAR_11 >> VAR_8) & VAR_1;

 VAR_10 = FUNC_0(VAR_9, VAR_4);
 *VAR_5 = VAR_3->shared->group_lsn[VAR_10];

 FUNC_1(VAR_2);

 return VAR_12;
}
