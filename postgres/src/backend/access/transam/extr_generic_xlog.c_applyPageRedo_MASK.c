
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int offset ;
typedef int length ;
typedef int Size ;
typedef int* Page ;
typedef int OffsetNumber ;


 int FUNC_0 (int*,char const*,int) ;

__attribute__((used)) static void
FUNC_1(Page VAR_0, const char *VAR_1, Size VAR_2)
{
 const char *VAR_3 = VAR_1;
 const char *VAR_4 = VAR_1 + VAR_2;

 while (VAR_3 < VAR_4)
 {
  OffsetNumber VAR_5,
     VAR_6;

  FUNC_0(&VAR_5, VAR_3, sizeof(VAR_5));
  VAR_3 += sizeof(VAR_5);
  FUNC_0(&VAR_6, VAR_3, sizeof(VAR_6));
  VAR_3 += sizeof(VAR_6);

  FUNC_0(VAR_0 + VAR_5, VAR_3, VAR_6);

  VAR_3 += VAR_6;
 }
}
