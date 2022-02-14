
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const*,int,int) ;
 int FUNC_1 (unsigned char const*,int) ;

__attribute__((used)) static inline int
FUNC_2(const unsigned char *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 if (!VAR_0 || VAR_1 >= VAR_2)
  return VAR_2;

 VAR_1 = FUNC_0(VAR_0, (VAR_1 > 0 || !VAR_3) ? VAR_1 : -1, VAR_2);

 if (VAR_1 < VAR_2 && FUNC_1(VAR_0, VAR_1) != VAR_3)
  VAR_1 = FUNC_0(VAR_0, VAR_1, VAR_2);

 return VAR_1;
}
