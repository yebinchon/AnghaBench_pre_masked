
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 int FUNC_0 (char*,char*) ;
 char** VAR_11 ;
 int FUNC_1 (int ,int *,int) ;
 scalar_t__ FUNC_2 (int) ;
 int * VAR_12 ;

void FUNC_3() {
  int VAR_13;
  for(VAR_13 = 0; VAR_11[VAR_13] ; VAR_13++) {
    char *VAR_14 = VAR_11[VAR_13];

    if(FUNC_2(!FUNC_0(VAR_14, "cache")))
      VAR_12[VAR_13] = FUNC_1(VAR_0, ((void*)0), 10);

    else if(FUNC_2(!FUNC_0(VAR_14, "rss")))
      VAR_12[VAR_13] = FUNC_1(VAR_3, ((void*)0), 10);

    else if(FUNC_2(!FUNC_0(VAR_14, "rss_huge")))
      VAR_12[VAR_13] = FUNC_1(VAR_4, ((void*)0), 10);

    else if(FUNC_2(!FUNC_0(VAR_14, "mapped_file")))
      VAR_12[VAR_13] = FUNC_1(VAR_5, ((void*)0), 10);

    else if(FUNC_2(!FUNC_0(VAR_14, "writeback")))
      VAR_12[VAR_13] = FUNC_1(VAR_6, ((void*)0), 10);

    else if(FUNC_2(!FUNC_0(VAR_14, "dirty")))
      VAR_12[VAR_13] = FUNC_1(VAR_7, ((void*)0), 10);

    else if(FUNC_2(!FUNC_0(VAR_14, "swap")))
      VAR_12[VAR_13] = FUNC_1(VAR_8, ((void*)0), 10);

    else if(FUNC_2(!FUNC_0(VAR_14, "pgpgin")))
      VAR_12[VAR_13] = FUNC_1(VAR_9, ((void*)0), 10);

    else if(FUNC_2(!FUNC_0(VAR_14, "pgpgout")))
      VAR_12[VAR_13] = FUNC_1(VAR_10, ((void*)0), 10);

    else if(FUNC_2(!FUNC_0(VAR_14, "pgfault")))
      VAR_12[VAR_13] = FUNC_1(VAR_1, ((void*)0), 10);

    else if(FUNC_2(!FUNC_0(VAR_14, "pgmajfault")))
      VAR_12[VAR_13] = FUNC_1(VAR_2, ((void*)0), 10);
  }
}
