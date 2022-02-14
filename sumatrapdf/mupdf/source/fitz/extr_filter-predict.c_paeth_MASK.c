
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(int VAR_0, int VAR_1, int VAR_2)
{

 int VAR_3 = VAR_1 - VAR_2, VAR_4 = VAR_0 - VAR_2, VAR_5 = VAR_3 + VAR_4;
 int VAR_6 = FUNC_0(VAR_3);
 int VAR_7 = FUNC_0(VAR_4);
 int VAR_8 = FUNC_0(VAR_5);
 return VAR_6 <= VAR_7 && VAR_6 <= VAR_8 ? VAR_0 : VAR_7 <= VAR_8 ? VAR_1 : VAR_2;
}
