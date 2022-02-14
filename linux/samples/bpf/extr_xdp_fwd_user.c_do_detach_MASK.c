
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int FUNC_2(int VAR_0, const char *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, -1, 0);
 if (VAR_2 < 0)
  FUNC_1("ERROR: failed to detach program from %s\n", VAR_1);




 return VAR_2;
}
