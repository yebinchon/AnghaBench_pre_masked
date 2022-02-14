
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_6__ {scalar_t__ atttypid; } ;
struct TYPE_5__ {scalar_t__ natts; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void
FUNC_6(TupleDesc VAR_6, bool VAR_7, bool VAR_8)
{
 int VAR_9 = 0;

 if (VAR_8)
  VAR_9 = 1;


 if (VAR_7)
 {
  if (VAR_6->natts != (VAR_0 + VAR_9))
   FUNC_1(VAR_3,
     (FUNC_2(VAR_2),
      FUNC_4("invalid return type"),
      FUNC_3("Query-specified return tuple has " "wrong number of columns.")));

 }
 else
 {
  if (VAR_6->natts != VAR_1 + VAR_9)
   FUNC_1(VAR_3,
     (FUNC_2(VAR_2),
      FUNC_4("invalid return type"),
      FUNC_3("Query-specified return tuple has " "wrong number of columns.")));

 }


 if (FUNC_0(VAR_6, 0)->atttypid != FUNC_0(VAR_6, 1)->atttypid)
  FUNC_1(VAR_3,
    (FUNC_2(VAR_2),
     FUNC_4("invalid return type"),
     FUNC_3("First two columns must be the same type.")));


 if (FUNC_0(VAR_6, 2)->atttypid != VAR_4)
  FUNC_1(VAR_3,
    (FUNC_2(VAR_2),
     FUNC_4("invalid return type"),
     FUNC_3("Third column must be type %s.",
         FUNC_5(VAR_4))));


 if (VAR_7 && FUNC_0(VAR_6, 3)->atttypid != VAR_5)
  FUNC_1(VAR_3,
    (FUNC_2(VAR_2),
     FUNC_4("invalid return type"),
     FUNC_3("Fourth column must be type %s.",
         FUNC_5(VAR_5))));


 if (VAR_7 && VAR_8 &&
  FUNC_0(VAR_6, 4)->atttypid != VAR_4)
  FUNC_1(VAR_3,
    (FUNC_2(VAR_2),
     FUNC_4("query-specified return tuple not valid for Connectby: "
      "fifth column must be type %s",
      FUNC_5(VAR_4))));


 if (!VAR_7 && VAR_8 &&
  FUNC_0(VAR_6, 3)->atttypid != VAR_4)
  FUNC_1(VAR_3,
    (FUNC_2(VAR_2),
     FUNC_4("query-specified return tuple not valid for Connectby: "
      "fourth column must be type %s",
      FUNC_5(VAR_4))));


}
