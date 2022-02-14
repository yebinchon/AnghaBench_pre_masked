
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,unsigned long,int ) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,unsigned long,...) ;
 scalar_t__ FUNC_6 (int,char const*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(const char *VAR_3, const char *VAR_4,
     unsigned long VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_0);
 if (VAR_6 < 0) {
  FUNC_5("changing sum in %s failed: %s\n",
   VAR_3, FUNC_3(VAR_2));
  return;
 }

 if (FUNC_1(VAR_6, VAR_5, VAR_1) == (off_t)-1) {
  FUNC_5("changing sum in %s:%lu failed: %s\n",
   VAR_3, VAR_5, FUNC_3(VAR_2));
  goto out;
 }

 if (FUNC_6(VAR_6, VAR_4, FUNC_4(VAR_4)+1) != FUNC_4(VAR_4)+1) {
  FUNC_5("writing sum in %s failed: %s\n",
   VAR_3, FUNC_3(VAR_2));
  goto out;
 }
out:
 FUNC_0(VAR_6);
}
