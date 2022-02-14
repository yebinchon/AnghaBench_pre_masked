
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int TransactionId ;
typedef int TimestampTz ;
struct TYPE_7__ {TYPE_1__* shared; } ;
struct TYPE_6__ {int nodeid; int time; } ;
struct TYPE_5__ {scalar_t__* page_buffer; } ;
typedef int RepOriginId ;
typedef TYPE_2__ CommitTimestampEntry ;


 int FUNC_0 (int ) ;
 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_4(TransactionId VAR_2, TimestampTz VAR_3,
       RepOriginId VAR_4, int VAR_5)
{
 int VAR_6 = FUNC_2(VAR_2);
 CommitTimestampEntry VAR_7;

 FUNC_0(FUNC_1(VAR_2));

 VAR_7.time = VAR_3;
 VAR_7.nodeid = VAR_4;

 FUNC_3(VAR_0->shared->page_buffer[VAR_5] +
     VAR_1 * VAR_6,
     &VAR_7, VAR_1);
}
