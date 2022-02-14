
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,long) ;
 int FUNC_2 (long) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int,scalar_t__,int) ;
 int VAR_1 ;
 int FUNC_4 (int *,long,int ) ;

__attribute__((used)) static off_t FUNC_5(int VAR_2, off_t VAR_3, int VAR_4)
{
 long VAR_5, VAR_6;
 off_t VAR_7;

 FUNC_2(VAR_5);
 VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_4);
 FUNC_2(VAR_6);
 FUNC_0("\tlseek ret = 0x%llx\n", VAR_7);
 if (VAR_7 < 0)
  goto out;

 FUNC_1("\tlseek elapsed timed = %ld\n", VAR_6 - VAR_5);
 FUNC_4(&VAR_1, VAR_6 - VAR_5, 0);

out:
 (void)FUNC_3(VAR_2, 0, VAR_0);
 return VAR_7;
}
