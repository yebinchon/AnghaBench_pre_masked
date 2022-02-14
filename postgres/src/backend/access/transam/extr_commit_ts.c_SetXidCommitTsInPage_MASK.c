
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TransactionId ;
typedef int TimestampTz ;
struct TYPE_5__ {TYPE_1__* shared; } ;
struct TYPE_4__ {int* page_dirty; } ;
typedef int RepOriginId ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int,int,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(TransactionId VAR_3, int VAR_4,
      TransactionId *VAR_5, TimestampTz VAR_6,
      RepOriginId VAR_7, int VAR_8)
{
 int VAR_9;
 int VAR_10;

 FUNC_0(VAR_0, VAR_2);

 VAR_9 = FUNC_2(VAR_1, VAR_8, 1, VAR_3);

 FUNC_3(VAR_3, VAR_6, VAR_7, VAR_9);
 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
  FUNC_3(VAR_5[VAR_10], VAR_6, VAR_7, VAR_9);

 VAR_1->shared->page_dirty[VAR_9] = 1;

 FUNC_1(VAR_0);
}
