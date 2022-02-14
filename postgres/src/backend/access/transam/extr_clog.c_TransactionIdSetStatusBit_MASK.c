
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char XidStatus ;
typedef scalar_t__ XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_4__ {TYPE_1__* shared; } ;
struct TYPE_3__ {char** page_buffer; scalar_t__* group_lsn; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 char VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int,int ) ;
 scalar_t__ VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(TransactionId VAR_7, XidStatus VAR_8, XLogRecPtr VAR_9, int VAR_10)
{
 int VAR_11 = FUNC_3(VAR_7);
 int VAR_12 = FUNC_2(VAR_7) * VAR_0;
 char *VAR_13;
 char VAR_14;
 char VAR_15;

 VAR_13 = VAR_2->shared->page_buffer[VAR_10] + VAR_11;
 VAR_15 = (*VAR_13 >> VAR_12) & VAR_1;







 if (VAR_3 && VAR_8 == VAR_6 &&
  VAR_15 == VAR_4)
  return;





 FUNC_0(VAR_15 == 0 ||
     (VAR_15 == VAR_6 &&
   VAR_8 != VAR_5) ||
     VAR_15 == VAR_8);


 VAR_14 = *VAR_13;
 VAR_14 &= ~(((1 << VAR_0) - 1) << VAR_12);
 VAR_14 |= (VAR_8 << VAR_12);
 *VAR_13 = VAR_14;
 if (!FUNC_4(VAR_9))
 {
  int VAR_16 = FUNC_1(VAR_10, VAR_7);

  if (VAR_2->shared->group_lsn[VAR_16] < VAR_9)
   VAR_2->shared->group_lsn[VAR_16] = VAR_9;
 }
}
