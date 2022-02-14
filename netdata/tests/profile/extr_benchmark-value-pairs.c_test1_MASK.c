
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; char* value; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*,int *,int) ;
 scalar_t__ FUNC_2 (int) ;
 int * VAR_1 ;

void FUNC_3() {
  int VAR_2;
  for(VAR_2 = 0; VAR_0[VAR_2].name ; VAR_2++) {
    const char *VAR_3 = VAR_0[VAR_2].name;
    const char *VAR_4 = VAR_0[VAR_2].value;

    if(FUNC_2(!FUNC_0(VAR_3, "cache")))
      VAR_1[VAR_2] = FUNC_1(VAR_4, ((void*)0), 10);

    else if(FUNC_2(!FUNC_0(VAR_3, "rss")))
      VAR_1[VAR_2] = FUNC_1(VAR_4, ((void*)0), 10);

    else if(FUNC_2(!FUNC_0(VAR_3, "rss_huge")))
      VAR_1[VAR_2] = FUNC_1(VAR_4, ((void*)0), 10);

    else if(FUNC_2(!FUNC_0(VAR_3, "mapped_file")))
      VAR_1[VAR_2] = FUNC_1(VAR_4, ((void*)0), 10);

    else if(FUNC_2(!FUNC_0(VAR_3, "writeback")))
      VAR_1[VAR_2] = FUNC_1(VAR_4, ((void*)0), 10);

    else if(FUNC_2(!FUNC_0(VAR_3, "dirty")))
      VAR_1[VAR_2] = FUNC_1(VAR_4, ((void*)0), 10);

    else if(FUNC_2(!FUNC_0(VAR_3, "swap")))
      VAR_1[VAR_2] = FUNC_1(VAR_4, ((void*)0), 10);

    else if(FUNC_2(!FUNC_0(VAR_3, "pgpgin")))
      VAR_1[VAR_2] = FUNC_1(VAR_4, ((void*)0), 10);

    else if(FUNC_2(!FUNC_0(VAR_3, "pgpgout")))
      VAR_1[VAR_2] = FUNC_1(VAR_4, ((void*)0), 10);

    else if(FUNC_2(!FUNC_0(VAR_3, "pgfault")))
      VAR_1[VAR_2] = FUNC_1(VAR_4, ((void*)0), 10);

    else if(FUNC_2(!FUNC_0(VAR_3, "pgmajfault")))
      VAR_1[VAR_2] = FUNC_1(VAR_4, ((void*)0), 10);
  }
}
