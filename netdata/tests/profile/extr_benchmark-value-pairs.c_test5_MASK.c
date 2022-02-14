
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {char* name; char* value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 (int) ;
 int * VAR_11 ;
 scalar_t__ VAR_12 ;

void FUNC_4() {
    int VAR_13;
    for(VAR_13 = 0; VAR_3[VAR_13].name ; VAR_13++) {
        const char *VAR_14 = VAR_3[VAR_13].name;
        const char *VAR_15 = VAR_3[VAR_13].value;

    uint32_t VAR_16 = FUNC_1(VAR_14);

    if(FUNC_3(VAR_16 == VAR_0 && !FUNC_2(VAR_14, "cache")))
      VAR_11[VAR_13] = FUNC_0(VAR_15);

    else if(FUNC_3(VAR_16 == VAR_8 && !FUNC_2(VAR_14, "rss")))
      VAR_11[VAR_13] = FUNC_0(VAR_15);

    else if(FUNC_3(VAR_16 == VAR_9 && !FUNC_2(VAR_14, "rss_huge")))
      VAR_11[VAR_13] = FUNC_0(VAR_15);

    else if(FUNC_3(VAR_16 == VAR_2 && !FUNC_2(VAR_14, "mapped_file")))
      VAR_11[VAR_13] = FUNC_0(VAR_15);

    else if(FUNC_3(VAR_16 == VAR_12 && !FUNC_2(VAR_14, "writeback")))
      VAR_11[VAR_13] = FUNC_0(VAR_15);

    else if(FUNC_3(VAR_16 == VAR_1 && !FUNC_2(VAR_14, "dirty")))
      VAR_11[VAR_13] = FUNC_0(VAR_15);

    else if(FUNC_3(VAR_16 == VAR_10 && !FUNC_2(VAR_14, "swap")))
      VAR_11[VAR_13] = FUNC_0(VAR_15);

    else if(FUNC_3(VAR_16 == VAR_6 && !FUNC_2(VAR_14, "pgpgin")))
      VAR_11[VAR_13] = FUNC_0(VAR_15);

    else if(FUNC_3(VAR_16 == VAR_7 && !FUNC_2(VAR_14, "pgpgout")))
      VAR_11[VAR_13] = FUNC_0(VAR_15);

    else if(FUNC_3(VAR_16 == VAR_4 && !FUNC_2(VAR_14, "pgfault")))
      VAR_11[VAR_13] = FUNC_0(VAR_15);

    else if(FUNC_3(VAR_16 == VAR_5 && !FUNC_2(VAR_14, "pgmajfault")))
      VAR_11[VAR_13] = FUNC_0(VAR_15);
  }
}
