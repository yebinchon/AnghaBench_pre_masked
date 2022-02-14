
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int num_params; scalar_t__ resultDesc; scalar_t__* param_types; int fixed_result; } ;
struct TYPE_6__ {TYPE_2__* plansource; } ;
typedef TYPE_1__ PreparedStatement ;
typedef scalar_t__ Oid ;
typedef int List ;
typedef TYPE_2__ CachedPlanSource ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_2__*,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (char const*,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int *,scalar_t__,int *,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,char) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 int VAR_5 ;
 int FUNC_15 () ;
 TYPE_2__* VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_16(const char *VAR_8)
{
 CachedPlanSource *VAR_9;





 FUNC_15();


 FUNC_4(VAR_4);


 if (VAR_8[0] != '\0')
 {
  PreparedStatement *VAR_10;

  VAR_10 = FUNC_2(VAR_8, 1);
  VAR_9 = VAR_10->plansource;
 }
 else
 {

  VAR_9 = VAR_6;
  if (!VAR_9)
   FUNC_6(VAR_3,
     (FUNC_7(VAR_2),
      FUNC_9("unnamed prepared statement does not exist")));
 }


 FUNC_0(VAR_9->fixed_result);
 if (FUNC_3() &&
  VAR_9->resultDesc)
  FUNC_6(VAR_3,
    (FUNC_7(VAR_1),
     FUNC_9("current transaction is aborted, "
      "commands ignored until end of transaction block"),
     FUNC_8()));

 if (VAR_7 != VAR_0)
  return;




 FUNC_10(&VAR_5, 't');

 FUNC_13(&VAR_5, VAR_9->num_params);

 for (int VAR_11 = 0; VAR_11 < VAR_9->num_params; VAR_11++)
 {
  Oid VAR_12 = VAR_9->param_types[VAR_11];

  FUNC_14(&VAR_5, (int) VAR_12);
 }
 FUNC_11(&VAR_5);




 if (VAR_9->resultDesc)
 {
  List *VAR_13;


  VAR_13 = FUNC_1(VAR_9, ((void*)0));

  FUNC_5(&VAR_5,
          VAR_9->resultDesc,
          VAR_13,
          ((void*)0));
 }
 else
  FUNC_12('n');

}
