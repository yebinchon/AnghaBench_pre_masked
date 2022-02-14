
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_8(void)
{
 FUNC_0(&VAR_1, !FUNC_6(&VAR_1));
 FUNC_1(&VAR_1);
 FUNC_3(&VAR_1);
 FUNC_4(&VAR_1, 0);
 FUNC_4(&VAR_1, 1024);
 FUNC_4(&VAR_1, 1024 * 64);
 FUNC_5(&VAR_1);
 FUNC_2(&VAR_1);

 FUNC_7("IDA: %u of %u tests passed\n", VAR_2, VAR_3);
 return (VAR_3 != VAR_2) ? 0 : -VAR_0;
}
