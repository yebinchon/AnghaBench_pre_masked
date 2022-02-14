
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int arg; int (* callback ) (int ) ;struct TYPE_7__* previous; } ;
struct TYPE_6__ {char* context; int assoc_context; } ;
typedef TYPE_1__ ErrorData ;
typedef TYPE_2__ ErrorContextCallback ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;

char *
FUNC_4(void)
{
 ErrorData *VAR_7;
 ErrorContextCallback *VAR_8;




 VAR_6++;

 if (++VAR_5 >= VAR_1)
 {





  VAR_5 = -1;
  FUNC_1(VAR_2, (FUNC_2("ERRORDATA_STACK_SIZE exceeded")));
 }




 VAR_7 = &VAR_4[VAR_5];
 FUNC_0(VAR_7, 0, sizeof(ErrorData));





 VAR_7->assoc_context = VAR_0;
 for (VAR_8 = VAR_3;
   VAR_8 != ((void*)0);
   VAR_8 = VAR_8->previous)
  VAR_8->callback(VAR_8->arg);







 VAR_5--;
 VAR_6--;





 return VAR_7->context;
}
