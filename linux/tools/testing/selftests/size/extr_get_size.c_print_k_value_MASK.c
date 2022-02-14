
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, unsigned long VAR_1, unsigned long VAR_2)
{
 unsigned long long VAR_3;
 int VAR_4;

 FUNC_0(VAR_0);

 VAR_3 = VAR_1;
 VAR_3 = (VAR_3 * VAR_2)/1024;
 VAR_1 = VAR_3;
 VAR_4 = FUNC_1(VAR_1);
 FUNC_0("\n");
 return VAR_4;
}
