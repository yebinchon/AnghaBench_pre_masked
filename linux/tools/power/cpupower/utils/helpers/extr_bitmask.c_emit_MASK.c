
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (char*,int ,char*,...) ;

__attribute__((used)) static inline int FUNC_2(char *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 if (VAR_4 > 0)
  VAR_4 += FUNC_1(VAR_0 + VAR_4, FUNC_0(VAR_1 - VAR_4, 0), ",");
 if (VAR_2 == VAR_3)
  VAR_4 += FUNC_1(VAR_0 + VAR_4, FUNC_0(VAR_1 - VAR_4, 0), "%d", VAR_2);
 else
  VAR_4 += FUNC_1(VAR_0 + VAR_4, FUNC_0(VAR_1 - VAR_4, 0), "%d-%d",
    VAR_2, VAR_3);
 return VAR_4;
}
