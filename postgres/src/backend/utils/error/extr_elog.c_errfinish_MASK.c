
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int arg; int (* callback ) (int ) ;struct TYPE_7__* previous; } ;
struct TYPE_6__ {int elevel; scalar_t__ internalquery; scalar_t__ constraint_name; scalar_t__ datatype_name; scalar_t__ column_name; scalar_t__ table_name; scalar_t__ schema_name; scalar_t__ backtrace; scalar_t__ context; scalar_t__ hint; scalar_t__ detail_log; scalar_t__ detail; scalar_t__ message; scalar_t__ funcname; } ;
typedef int MemoryContext ;
typedef TYPE_1__ ErrorData ;
typedef TYPE_2__ ErrorContextCallback ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 () ;
 int * VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 () ;
 scalar_t__ VAR_10 ;
 TYPE_2__* VAR_11 ;
 TYPE_1__* VAR_12 ;
 size_t VAR_13 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int VAR_14 ;
 int FUNC_11 (TYPE_1__*,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_12 (int ) ;
 scalar_t__ VAR_17 ;

void
FUNC_13(int VAR_18,...)
{
 ErrorData *VAR_19 = &VAR_12[VAR_13];
 int VAR_20;
 MemoryContext VAR_21;
 ErrorContextCallback *VAR_22;

 VAR_14++;
 FUNC_1();
 VAR_20 = VAR_19->elevel;





 VAR_21 = FUNC_3(VAR_4);

 if (!VAR_19->backtrace &&
  VAR_19->funcname &&
  VAR_10 &&
  FUNC_7(VAR_19->funcname))
  FUNC_11(VAR_19, 2);






 for (VAR_22 = VAR_11;
   VAR_22 != ((void*)0);
   VAR_22 = VAR_22->previous)
  VAR_22->callback(VAR_22->arg);





 if (VAR_20 == VAR_3)
 {
  VAR_6 = 0;
  VAR_9 = 0;

  VAR_0 = 0;






  VAR_14--;
  FUNC_4();
 }
 if (VAR_20 >= VAR_5 && VAR_17 == VAR_2)
  FUNC_9(1);


 FUNC_2();


 if (VAR_19->message)
  FUNC_8(VAR_19->message);
 if (VAR_19->detail)
  FUNC_8(VAR_19->detail);
 if (VAR_19->detail_log)
  FUNC_8(VAR_19->detail_log);
 if (VAR_19->hint)
  FUNC_8(VAR_19->hint);
 if (VAR_19->context)
  FUNC_8(VAR_19->context);
 if (VAR_19->backtrace)
  FUNC_8(VAR_19->backtrace);
 if (VAR_19->schema_name)
  FUNC_8(VAR_19->schema_name);
 if (VAR_19->table_name)
  FUNC_8(VAR_19->table_name);
 if (VAR_19->column_name)
  FUNC_8(VAR_19->column_name);
 if (VAR_19->datatype_name)
  FUNC_8(VAR_19->datatype_name);
 if (VAR_19->constraint_name)
  FUNC_8(VAR_19->constraint_name);
 if (VAR_19->internalquery)
  FUNC_8(VAR_19->internalquery);

 VAR_13--;


 FUNC_3(VAR_21);
 VAR_14--;




 if (VAR_20 == VAR_5)
 {






  if (VAR_8 == ((void*)0) && VAR_17 == VAR_2)
   VAR_17 = VAR_1;







  FUNC_6(VAR_16);
  FUNC_6(VAR_15);






  FUNC_10(1);
 }

 if (VAR_20 >= VAR_7)
 {







  FUNC_6(VAR_16);
  FUNC_6(VAR_15);
  FUNC_5();
 }






 FUNC_0();
}
