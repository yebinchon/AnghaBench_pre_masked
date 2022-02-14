
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int nulls ;
typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_7__ {int returned_rows; int tupdesc; int tupstore; int binary_output; } ;
struct TYPE_6__ {TYPE_1__* out; scalar_t__ output_writer_private; } ;
struct TYPE_5__ {scalar_t__ len; int data; } ;
typedef TYPE_2__ LogicalDecodingContext ;
typedef TYPE_3__ DecodingOutputState ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int*,int ,int) ;
 int FUNC_8 (int ,int ,scalar_t__,int) ;
 int FUNC_9 (int ,int ,int *,int*) ;

__attribute__((used)) static void
FUNC_10(LogicalDecodingContext *VAR_3, XLogRecPtr VAR_4, TransactionId VAR_5,
       bool VAR_6)
{
 Datum VAR_7[3];
 bool VAR_8[3];
 DecodingOutputState *VAR_9;


 if (VAR_3->out->len > VAR_1 - VAR_2)
  FUNC_6(VAR_0, "too much output for sql interface");

 VAR_9 = (DecodingOutputState *) VAR_3->output_writer_private;

 FUNC_7(VAR_8, 0, sizeof(VAR_8));
 VAR_7[0] = FUNC_2(VAR_4);
 VAR_7[1] = FUNC_4(VAR_5);





 if (!VAR_9->binary_output)
  FUNC_0(FUNC_8(FUNC_1(),
          VAR_3->out->data, VAR_3->out->len,
          0));


 VAR_7[2] = FUNC_3(
        FUNC_5(VAR_3->out->data, VAR_3->out->len));

 FUNC_9(VAR_9->tupstore, VAR_9->tupdesc, VAR_7, VAR_8);
 VAR_9->returned_rows++;
}
