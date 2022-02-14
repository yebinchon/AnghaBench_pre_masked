
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct record_opts {int affinity; } ;
struct option {scalar_t__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static int FUNC_1(const struct option *VAR_2, const char *VAR_3, int VAR_4)
{
 struct record_opts *VAR_5 = (struct record_opts *)VAR_2->value;

 if (VAR_4 || !VAR_3)
  return 0;

 if (!FUNC_0(VAR_3, "node"))
  VAR_5->affinity = VAR_1;
 else if (!FUNC_0(VAR_3, "cpu"))
  VAR_5->affinity = VAR_0;

 return 0;
}
