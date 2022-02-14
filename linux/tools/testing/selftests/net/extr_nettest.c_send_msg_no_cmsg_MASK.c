
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ,int ,int ,void*,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_3(int VAR_5, void *VAR_6, socklen_t VAR_7)
{
 int VAR_8;

again:
 VAR_8 = FUNC_1(VAR_5, VAR_2, VAR_3, 0, VAR_6, VAR_7);
 if (VAR_8 < 0) {
  if (VAR_1 == VAR_0 && VAR_4) {
   VAR_4 = 0;
   if (!FUNC_2(VAR_5))
    goto again;
   VAR_1 = VAR_0;
  }

  FUNC_0("sendto failed");
  return 1;
 }

 return 0;
}
