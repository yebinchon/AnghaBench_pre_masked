
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int errcode_t ;
typedef scalar_t__ blk64_t ;
typedef long long __u64 ;
typedef int HANDLE ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ,int *,long long*,long long*,int *,int *) ;
 int FUNC_2 (int ,long long*) ;

errcode_t FUNC_3(const char *VAR_1, int VAR_2, blk64_t *VAR_3)
{
 errcode_t VAR_4 = 0;
 __u64 VAR_5, VAR_6 = 0;
 HANDLE VAR_7;
 BOOLEAN VAR_8;

 if (!FUNC_1(VAR_1, VAR_0, &VAR_7, &VAR_5, &VAR_6, &VAR_8, &VAR_4))
  return VAR_4;

 if (VAR_6 == 0LL)
  FUNC_2(VAR_7, &VAR_6);
 FUNC_0(VAR_7);

 *VAR_3 = (blk64_t)(VAR_6 / VAR_2);
 return 0;
}
