
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32 ;
typedef int TransactionId ;
struct TYPE_9__ {TYPE_1__* shared; } ;
struct TYPE_8__ {int status; int xid; } ;
struct TYPE_7__ {int* page_dirty; scalar_t__* page_buffer; } ;
typedef int MultiXactOffset ;
typedef TYPE_2__ MultiXactMember ;
typedef int MultiXactId ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (TYPE_3__*,int,int,int ) ;

__attribute__((used)) static void
FUNC_10(MultiXactId VAR_7, MultiXactOffset VAR_8,
       int VAR_9, MultiXactMember *VAR_10)
{
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 MultiXactOffset *VAR_15;
 int VAR_16;

 FUNC_1(VAR_4, VAR_0);

 VAR_11 = FUNC_8(VAR_7);
 VAR_13 = FUNC_7(VAR_7);
 VAR_14 = FUNC_9(VAR_5, VAR_11, 1, VAR_7);
 VAR_15 = (MultiXactOffset *) VAR_5->shared->page_buffer[VAR_14];
 VAR_15 += VAR_13;

 *VAR_15 = VAR_8;

 VAR_5->shared->page_dirty[VAR_14] = 1;


 FUNC_2(VAR_4);

 FUNC_1(VAR_2, VAR_0);

 VAR_12 = -1;

 for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++, VAR_8++)
 {
  TransactionId *VAR_17;
  uint32 *VAR_18;
  uint32 VAR_19;
  int VAR_20;
  int VAR_21;
  int VAR_22;

  FUNC_0(VAR_10[VAR_16].status <= VAR_6);

  VAR_11 = FUNC_6(VAR_8);
  VAR_22 = FUNC_5(VAR_8);
  VAR_21 = FUNC_4(VAR_8);
  VAR_20 = FUNC_3(VAR_8);

  if (VAR_11 != VAR_12)
  {
   VAR_14 = FUNC_9(VAR_3, VAR_11, 1, VAR_7);
   VAR_12 = VAR_11;
  }

  VAR_17 = (TransactionId *)
   (VAR_3->shared->page_buffer[VAR_14] + VAR_22);

  *VAR_17 = VAR_10[VAR_16].xid;

  VAR_18 = (uint32 *)
   (VAR_3->shared->page_buffer[VAR_14] + VAR_21);

  VAR_19 = *VAR_18;
  VAR_19 &= ~(((1 << VAR_1) - 1) << VAR_20);
  VAR_19 |= (VAR_10[VAR_16].status << VAR_20);
  *VAR_18 = VAR_19;

  VAR_3->shared->page_dirty[VAR_14] = 1;
 }

 FUNC_2(VAR_2);
}
