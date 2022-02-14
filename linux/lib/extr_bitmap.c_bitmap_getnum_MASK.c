
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char const* FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 unsigned int FUNC_1 (char const*,int,unsigned long long*) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_3, unsigned int *VAR_4)
{
 unsigned long long VAR_5;
 unsigned int VAR_6;

 VAR_6 = FUNC_1(VAR_3, 10, &VAR_5);
 if (!VAR_6)
  return FUNC_0(-VAR_0);
 if (VAR_6 & VAR_2 || VAR_5 != (unsigned int)VAR_5)
  return FUNC_0(-VAR_1);

 *VAR_4 = VAR_5;
 return VAR_3 + VAR_6;
}
