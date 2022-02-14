
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,size_t) ;
 size_t FUNC_1 (char*,size_t,char*,char const*,char*) ;

int FUNC_2(const char *VAR_0, bool VAR_1,
          int VAR_2, char *VAR_3, size_t VAR_4)
{
 size_t VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_3, VAR_4, "Failed to load %s%s: ",
    VAR_0, VAR_1 ? " from source" : "");
 if (VAR_5 >= VAR_4) {
  VAR_3[VAR_4 - 1] = '\0';
  return 0;
 }
 VAR_3 += VAR_5;
 VAR_4 -= VAR_5;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);
 VAR_3[VAR_4 - 1] = '\0';
 return VAR_6;
}
