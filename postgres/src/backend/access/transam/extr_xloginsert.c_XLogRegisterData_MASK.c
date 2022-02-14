
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; int len; struct TYPE_4__* next; } ;
typedef TYPE_1__ XLogRecData ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;

void
FUNC_2(char *VAR_7, int VAR_8)
{
 XLogRecData *VAR_9;

 FUNC_0(VAR_1);

 if (VAR_5 >= VAR_4)
  FUNC_1(VAR_0, "too much WAL data");
 VAR_9 = &VAR_6[VAR_5++];

 VAR_9->data = VAR_7;
 VAR_9->len = VAR_8;






 VAR_2->next = VAR_9;
 VAR_2 = VAR_9;

 VAR_3 += VAR_8;
}
