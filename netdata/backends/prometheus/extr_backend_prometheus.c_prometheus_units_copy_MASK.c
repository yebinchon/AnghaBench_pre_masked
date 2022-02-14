
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 (char) ;
 void* FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline char *FUNC_4(char *VAR_0, const char *VAR_1, size_t VAR_2, int VAR_3) {
    const char *VAR_4 = VAR_1;
    char *VAR_5 = VAR_0;
    size_t VAR_6;


    if (FUNC_3(VAR_3)) {
  static struct {
   const char *newunit;
   uint32_t hash;
   const char *oldunit;
  } VAR_7[] = {
      {"KiB/s", 0, "kilobytes/s"}
    , {"MiB/s", 0, "MB/s"}
    , {"GiB/s", 0, "GB/s"}
    , {"KiB" , 0, "KB"}
    , {"MiB" , 0, "MB"}
    , {"GiB" , 0, "GB"}
    , {"inodes" , 0, "Inodes"}
    , {"percentage" , 0, "percent"}
    , {"faults/s" , 0, "page faults/s"}
    , {"KiB/operation", 0, "kilobytes per operation"}
    , {"milliseconds/operation", 0, "ms per operation"}
    , {((void*)0), 0, ((void*)0)}
  };
  static int VAR_8 = 0;
  int VAR_9;

  if(FUNC_3(!VAR_8)) {
   for (VAR_9 = 0; VAR_7[VAR_9].newunit; VAR_9++)
    VAR_7[VAR_9].hash = FUNC_1(VAR_7[VAR_9].newunit);
   VAR_8 = 1;
  }

  uint32_t VAR_10 = FUNC_1(VAR_1);
  for(VAR_9 = 0; VAR_7[VAR_9].newunit ; VAR_9++) {
   if(FUNC_3(VAR_10 == VAR_7[VAR_9].hash && !FUNC_2(VAR_1, VAR_7[VAR_9].newunit))) {

    VAR_1=VAR_7[VAR_9].oldunit;
    VAR_4 = VAR_1;
    break;
   }
  }
    }
    *VAR_0++ = '_';
    for(VAR_6 = 1; *VAR_1 && VAR_6 < VAR_2 ; VAR_0++, VAR_1++, VAR_6++) {
        register char VAR_11 = *VAR_1;

        if(!FUNC_0(VAR_11)) *VAR_0 = '_';
        else *VAR_0 = VAR_11;
    }

    if(VAR_6 == 2 && VAR_4[0] == '%') {
        VAR_6 = 0;
        VAR_0 = VAR_5;
        VAR_1 = "_percent";
        for( ; *VAR_1 && VAR_6 < VAR_2 ; VAR_6++) *VAR_0++ = *VAR_1++;
    }
    else if(VAR_6 > 3 && VAR_4[VAR_6-3] == '/' && VAR_4[VAR_6-2] == 's') {
        VAR_6 = VAR_6 - 2;
        VAR_0 -= 2;
        VAR_1 = "_persec";
        for( ; *VAR_1 && VAR_6 < VAR_2 ; VAR_6++) *VAR_0++ = *VAR_1++;
    }

    *VAR_0 = '\0';

    return VAR_5;
}
