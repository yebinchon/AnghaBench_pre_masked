
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long __u64 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 long FUNC_1 (int,int ,...) ;
 int FUNC_2 (char*,int,unsigned long long,unsigned long long) ;

__attribute__((used)) static int FUNC_3(int VAR_4, __u64 VAR_5)
{
 long VAR_6;
 __u64 VAR_7;

 VAR_6 = FUNC_1(VAR_4, VAR_2);
 if (VAR_6 < 0)
  VAR_7 = 0;
 else
  VAR_7 = VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_1, VAR_5);
 if (VAR_6 < 0 && VAR_3 != VAR_0) {
  FUNC_2("ADD_SEALS(%d, %llu -> %llu) didn't fail as expected with EBUSY: %m\n",
         VAR_4, (unsigned long long)VAR_7, (unsigned long long)VAR_5);
  FUNC_0();
 }

 return VAR_6;
}
