
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static size_t
FUNC_2(size_t VAR_1, size_t VAR_2)
{
 if (VAR_0 / VAR_2 < VAR_1)
  FUNC_1(FUNC_0("size overflow"));
 return VAR_1 * VAR_2;
}
