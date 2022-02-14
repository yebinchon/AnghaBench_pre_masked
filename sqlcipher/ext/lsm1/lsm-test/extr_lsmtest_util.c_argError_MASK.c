
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,...) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, const char *VAR_1, int VAR_2, const char *VAR_3){
  struct Entry { const char *zName; };
  struct Entry *VAR_4;
  const char *VAR_5 = 0;

  FUNC_0("unrecognized %s \"%s\": must be ", VAR_1, VAR_3);
  for(VAR_4=(struct Entry *)VAR_0;
      VAR_4->zName;
      VAR_4=(struct Entry *)&((unsigned char *)VAR_4)[VAR_2]
  ){
    if( VAR_5 ){ FUNC_0("%s, ", VAR_5); }
    VAR_5 = VAR_4->zName;
  }
  FUNC_0("or %s\n", VAR_5);
}
