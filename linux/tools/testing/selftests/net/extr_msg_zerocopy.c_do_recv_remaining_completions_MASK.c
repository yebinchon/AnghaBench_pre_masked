
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_4(int VAR_7, int VAR_8)
{
 int64_t VAR_9 = FUNC_3() + VAR_3;

 while (VAR_4 < VAR_5 &&
        FUNC_3() < VAR_9) {
  if (FUNC_0(VAR_7, VAR_8 == VAR_0 ? VAR_2 : VAR_1))
   FUNC_1(VAR_7, VAR_8);
 }

 if (VAR_4 < VAR_5)
  FUNC_2(VAR_6, "missing notifications: %lu < %lu\n",
   VAR_4, VAR_5);
}
