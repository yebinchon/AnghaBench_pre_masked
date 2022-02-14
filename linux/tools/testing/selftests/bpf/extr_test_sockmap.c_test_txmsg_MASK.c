
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_1(int VAR_9)
{
 int VAR_10;

 VAR_5 = VAR_4 = VAR_7 = VAR_2 = 0;
 VAR_0 = VAR_1 = 0;
 VAR_3 = VAR_8 = 0;

 VAR_5 = 1;
 VAR_10 = FUNC_0(VAR_9);
 VAR_5 = 0;
 if (VAR_10)
  goto out;

 VAR_6 = 1;
 VAR_10 = FUNC_0(VAR_9);
 VAR_6 = 0;
 if (VAR_10)
  goto out;

 VAR_2 = 1;
 VAR_10 = FUNC_0(VAR_9);
 VAR_2 = 0;
 if (VAR_10)
  goto out;

 VAR_6 = 1;
 VAR_3 = 1;
 VAR_10 = FUNC_0(VAR_9);
 VAR_6 = 0;
 VAR_3 = 0;
 if (VAR_10)
  goto out;
out:
 VAR_5 = 0;
 VAR_6 = 0;
 VAR_2 = 0;
 return VAR_10;
}
