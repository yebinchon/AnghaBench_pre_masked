
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 void* FUNC_1 (int ,char const*) ;

__attribute__((used)) static void *FUNC_2(const char *VAR_1)
{
 void *VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_2) {
  FUNC_0("Could not load function: %s", VAR_1);
 }
 return VAR_2;
}
