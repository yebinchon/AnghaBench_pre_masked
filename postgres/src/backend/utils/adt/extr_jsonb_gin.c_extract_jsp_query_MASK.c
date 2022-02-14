
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_15__ {int count; int * buf; int member_0; } ;
struct TYPE_14__ {int header; } ;
struct TYPE_13__ {int lax; int extract_nodes; int add_path_item; } ;
struct TYPE_12__ {int member_0; } ;
typedef scalar_t__ StrategyNumber ;
typedef scalar_t__ Pointer ;
typedef int JsonPathItem ;
typedef TYPE_1__ JsonPathGinPath ;
typedef int JsonPathGinNode ;
typedef TYPE_2__ JsonPathGinContext ;
typedef TYPE_3__ JsonPath ;
typedef TYPE_4__ GinEntries ;
typedef int Datum ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_4__*) ;
 int * FUNC_1 (TYPE_2__*,TYPE_1__,int *,int) ;
 int * FUNC_2 (TYPE_2__*,TYPE_1__,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,TYPE_3__*) ;
 scalar_t__* FUNC_4 (int) ;

__attribute__((used)) static Datum *
FUNC_5(JsonPath *VAR_6, StrategyNumber VAR_7, bool VAR_8,
      int32 *VAR_9, Pointer **VAR_10)
{
 JsonPathGinContext VAR_11;
 JsonPathItem VAR_12;
 JsonPathGinNode *VAR_13;
 JsonPathGinPath VAR_14 = {0};
 GinEntries VAR_15 = {0};

 VAR_11.lax = (VAR_6->header & VAR_0) != 0;

 if (VAR_8)
 {
  VAR_11.add_path_item = VAR_4;
  VAR_11.extract_nodes = VAR_5;
 }
 else
 {
  VAR_11.add_path_item = VAR_2;
  VAR_11.extract_nodes = VAR_3;
 }

 FUNC_3(&VAR_12, VAR_6);

 VAR_13 = VAR_7 == VAR_1
  ? FUNC_2(&VAR_11, VAR_14, &VAR_12, ((void*)0))
  : FUNC_1(&VAR_11, VAR_14, &VAR_12, 0);

 if (!VAR_13)
 {
  *VAR_9 = 0;
  return ((void*)0);
 }

 FUNC_0(VAR_13, &VAR_15);

 *VAR_9 = VAR_15.count;
 if (!*VAR_9)
  return ((void*)0);

 *VAR_10 = FUNC_4(sizeof(**VAR_10) * VAR_15.count);
 **VAR_10 = (Pointer) VAR_13;

 return VAR_15.buf;
}
