
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int64_t ;
typedef int errcode_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 float FUNC_2 (int ,float) ;
 int FUNC_3 (char*) ;

errcode_t FUNC_4(int64_t VAR_7, int64_t VAR_8)
{
 static int64_t VAR_9 = -1;
 if (VAR_8 == 0)
  return 0;
 FUNC_1(VAR_3, VAR_2, (uint64_t)((VAR_6 * VAR_8) + (VAR_5 * VAR_7)), VAR_8);
 VAR_7 = (int64_t)(((float)VAR_7 / (float)VAR_8) * FUNC_2(VAR_4, (float)VAR_8));
 if ((VAR_7 < VAR_9) || (VAR_7 > VAR_9)) {
  VAR_9 = VAR_7;
  FUNC_3("+");
 }
 return FUNC_0(VAR_1) ? VAR_0 : 0;
}
