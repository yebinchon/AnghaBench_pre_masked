
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void const*,void const*,int ) ;
 int FUNC_1 (size_t,size_t) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, size_t VAR_1,
    const void *VAR_2, size_t VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_2, FUNC_1(VAR_1, VAR_3));
 if (!VAR_4) {
  if (VAR_1 < VAR_3)
   VAR_4 = -1;
  else if (VAR_1 > VAR_3)
   VAR_4 = 1;
 }
 return VAR_4;
}
