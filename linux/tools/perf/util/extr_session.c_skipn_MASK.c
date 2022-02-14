
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
typedef int buf ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int,char*,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_0, off_t VAR_1)
{
 char VAR_2[4096];
 ssize_t VAR_3;

 while (VAR_1 > 0) {
  VAR_3 = FUNC_1(VAR_0, VAR_2, FUNC_0(VAR_1, (off_t)sizeof(VAR_2)));
  if (VAR_3 <= 0)
   return VAR_3;
  VAR_1 -= VAR_3;
 }

 return 0;
}
