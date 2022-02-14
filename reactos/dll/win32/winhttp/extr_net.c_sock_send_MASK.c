
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,void const*,size_t,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(int VAR_2, const void *VAR_3, size_t VAR_4, int VAR_5)
{
    int VAR_6;
    do
    {
        if ((VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5)) == -1) FUNC_0("send error %s\n", FUNC_2(VAR_1));
    }
    while(VAR_6 == -1 && VAR_1 == VAR_0);
    return VAR_6;
}
