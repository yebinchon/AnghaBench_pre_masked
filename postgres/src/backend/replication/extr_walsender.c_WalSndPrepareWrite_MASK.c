
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_3__ {int out; } ;
typedef TYPE_1__ LogicalDecodingContext ;


 int VAR_0 ;
 int FUNC_0 (int ,char) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(LogicalDecodingContext *VAR_1, XLogRecPtr VAR_2, TransactionId VAR_3, bool VAR_4)
{

 if (!VAR_4)
  VAR_2 = VAR_0;

 FUNC_2(VAR_1->out);

 FUNC_0(VAR_1->out, 'w');
 FUNC_1(VAR_1->out, VAR_2);
 FUNC_1(VAR_1->out, VAR_2);





 FUNC_1(VAR_1->out, 0);
}
