
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {char* symsrc_filename; char* long_name; } ;


 int FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static const char *FUNC_1(struct dso *VAR_0)
{
 const char *VAR_1;

 if (VAR_0->symsrc_filename)
  VAR_1 = VAR_0->symsrc_filename;
 else
  VAR_1 = VAR_0->long_name;

 if (VAR_1[0] == '[')
  return ((void*)0);

 if (!FUNC_0(VAR_1, "/tmp/perf-", 10))
  return ((void*)0);

 return VAR_1;
}
