
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ (* Realize ) (TYPE_5__**,int const) ;scalar_t__ (* GetInterface ) (TYPE_5__**,int ,TYPE_3__***) ;} ;
struct TYPE_15__ {scalar_t__ (* CreateOutputMix ) (TYPE_3__**,TYPE_2__***,int,int const*,int const*) ;} ;
struct TYPE_14__ {scalar_t__ (* Realize ) (TYPE_2__**,int const) ;} ;
struct TYPE_13__ {int member_1; int member_0; } ;
typedef scalar_t__ SLresult ;
typedef int SLboolean ;
typedef int SLInterfaceID ;
typedef TYPE_1__ SLEngineOption ;


 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_5__** VAR_6 ;
 TYPE_3__** VAR_7 ;
 TYPE_2__** VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_5__***,int,TYPE_1__*,int ,int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_5__**,int const) ;
 scalar_t__ FUNC_2 (TYPE_5__**,int ,TYPE_3__***) ;
 scalar_t__ FUNC_3 (TYPE_3__**,TYPE_2__***,int,int const*,int const*) ;
 scalar_t__ FUNC_4 (TYPE_2__**,int const) ;

void FUNC_5(char **VAR_9) {
  SLresult VAR_10;
  SLEngineOption VAR_11[] = {{VAR_2, VAR_1}};
  VAR_10 = FUNC_0(&VAR_6, 1, VAR_11, 0, ((void*)0), ((void*)0));
  if (VAR_10 != VAR_5) {
    *VAR_9 = "Failed to create OpenSL engine";
  }

  VAR_10 = (*VAR_6)->Realize(VAR_6, VAR_0);
  if (VAR_10 != VAR_5) {
    *VAR_9 = "Failed to realize OpenSL engine";
  }

  VAR_10 = (*VAR_6)->GetInterface(VAR_6, VAR_3, &VAR_7);
  if (VAR_10 != VAR_5) {
    *VAR_9 = "Failed to realize OpenSL engine";
  }

  const SLInterfaceID VAR_12[1] = {VAR_4};
  const SLboolean VAR_13[1] = {VAR_0};
  VAR_10 = (*VAR_7)->CreateOutputMix(VAR_7, &VAR_8, 1, VAR_12, VAR_13);
  if (VAR_10 != VAR_5) {
    *VAR_9 = "Failed to create output mix";
  }

  VAR_10 = (*VAR_8)->Realize(VAR_8, VAR_0);
  if (VAR_10 != VAR_5) {
    *VAR_9 = "Failed to realize output mix";
  }
}
