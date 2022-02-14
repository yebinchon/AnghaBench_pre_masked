
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_3)
{
 int VAR_4 = 0;

 if (FUNC_0(VAR_3, VAR_1 * VAR_2, VAR_0)) {
  FUNC_1("madvise");
  VAR_4 = 1;
 }

 return VAR_4;
}
