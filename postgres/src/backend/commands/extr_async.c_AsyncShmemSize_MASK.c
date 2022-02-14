
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;
typedef int QueueBackendStatus ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int ,int ) ;

Size
FUNC_4(void)
{
 Size VAR_4;


 VAR_4 = FUNC_2(VAR_1 + 1, sizeof(QueueBackendStatus));
 VAR_4 = FUNC_1(VAR_4, FUNC_3(VAR_0, VAR_3));

 VAR_4 = FUNC_1(VAR_4, FUNC_0(VAR_2, 0));

 return VAR_4;
}
