
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 char** VAR_20 ;
 int FUNC_2 (int ,int *,int) ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_3 (int) ;
 int * VAR_22 ;
 scalar_t__ VAR_23 ;

void FUNC_4() {
  int VAR_24;
  for(VAR_24 = 0; VAR_20[VAR_24] ; VAR_24++) {
    char *VAR_25 = VAR_20[VAR_24];
    uint32_t VAR_26 = FUNC_0(VAR_25);

    if(FUNC_3(VAR_26 == VAR_11 && !FUNC_1(VAR_25, "cache")))
      VAR_22[VAR_24] = FUNC_2(VAR_0, ((void*)0), 10);

    else if(FUNC_3(VAR_26 == VAR_18 && !FUNC_1(VAR_25, "rss")))
      VAR_22[VAR_24] = FUNC_2(VAR_3, ((void*)0), 10);

    else if(FUNC_3(VAR_26 == VAR_19 && !FUNC_1(VAR_25, "rss_huge")))
      VAR_22[VAR_24] = FUNC_2(VAR_4, ((void*)0), 10);

    else if(FUNC_3(VAR_26 == VAR_13 && !FUNC_1(VAR_25, "mapped_file")))
      VAR_22[VAR_24] = FUNC_2(VAR_5, ((void*)0), 10);

    else if(FUNC_3(VAR_26 == VAR_23 && !FUNC_1(VAR_25, "writeback")))
      VAR_22[VAR_24] = FUNC_2(VAR_6, ((void*)0), 10);

    else if(FUNC_3(VAR_26 == VAR_12 && !FUNC_1(VAR_25, "dirty")))
      VAR_22[VAR_24] = FUNC_2(VAR_7, ((void*)0), 10);

    else if(FUNC_3(VAR_26 == VAR_21 && !FUNC_1(VAR_25, "swap")))
      VAR_22[VAR_24] = FUNC_2(VAR_8, ((void*)0), 10);

    else if(FUNC_3(VAR_26 == VAR_16 && !FUNC_1(VAR_25, "pgpgin")))
      VAR_22[VAR_24] = FUNC_2(VAR_9, ((void*)0), 10);

    else if(FUNC_3(VAR_26 == VAR_17 && !FUNC_1(VAR_25, "pgpgout")))
      VAR_22[VAR_24] = FUNC_2(VAR_10, ((void*)0), 10);

    else if(FUNC_3(VAR_26 == VAR_14 && !FUNC_1(VAR_25, "pgfault")))
      VAR_22[VAR_24] = FUNC_2(VAR_1, ((void*)0), 10);

    else if(FUNC_3(VAR_26 == VAR_15 && !FUNC_1(VAR_25, "pgmajfault")))
      VAR_22[VAR_24] = FUNC_2(VAR_2, ((void*)0), 10);
  }
}
