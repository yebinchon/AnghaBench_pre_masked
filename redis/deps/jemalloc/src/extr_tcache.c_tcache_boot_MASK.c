
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_4__ {int ncached_max; } ;
typedef TYPE_1__ cache_bin_info_t ;
struct TYPE_5__ {int nregs; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int ,int,int ) ;
 TYPE_3__* VAR_7 ;
 scalar_t__ FUNC_3 (int *,char*,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int) ;
 TYPE_1__* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

bool
FUNC_5(tsdn_t *VAR_15) {

 if (VAR_10 < 0 || (FUNC_0(1) << VAR_10) <
     VAR_2) {
  VAR_13 = VAR_2;
 } else {
  VAR_13 = (FUNC_0(1) << VAR_10);
 }

 if (FUNC_3(&VAR_14, "tcaches", VAR_6,
     VAR_8)) {
  return 1;
 }

 VAR_9 = FUNC_4(VAR_13) + 1;


 VAR_12 = (cache_bin_info_t *)FUNC_2(VAR_15, FUNC_1(), VAR_9
     * sizeof(cache_bin_info_t), VAR_0);
 if (VAR_12 == ((void*)0)) {
  return 1;
 }
 VAR_11 = 0;
 unsigned VAR_16;
 for (VAR_16 = 0; VAR_16 < VAR_1; VAR_16++) {
  if ((VAR_7[VAR_16].nregs << 1) <= VAR_5) {
   VAR_12[VAR_16].ncached_max =
       VAR_5;
  } else if ((VAR_7[VAR_16].nregs << 1) <=
      VAR_4) {
   VAR_12[VAR_16].ncached_max =
       (VAR_7[VAR_16].nregs << 1);
  } else {
   VAR_12[VAR_16].ncached_max =
       VAR_4;
  }
  VAR_11 += VAR_12[VAR_16].ncached_max;
 }
 for (; VAR_16 < VAR_9; VAR_16++) {
  VAR_12[VAR_16].ncached_max = VAR_3;
  VAR_11 += VAR_12[VAR_16].ncached_max;
 }

 return 0;
}
