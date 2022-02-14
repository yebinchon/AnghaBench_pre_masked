
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_xattr {char const* name; } ;


 int FUNC_0 (char const*,char const**,int*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(struct ext2_xattr *VAR_0, int VAR_1,
          const char *VAR_2)
{
 struct ext2_xattr *VAR_3;
 int VAR_4;
 const char *VAR_5, *VAR_6;
 int VAR_7, VAR_8;
 int VAR_9, VAR_10;

 FUNC_0(VAR_2, &VAR_5, &VAR_7);
 VAR_9 = FUNC_2(VAR_5);

 for (VAR_4 = 0, VAR_3 = VAR_0; VAR_4 < VAR_1; VAR_4++, VAR_3++) {
  FUNC_0(VAR_3->name, &VAR_6, &VAR_8);
  if (VAR_7 < VAR_8)
   break;
  if (VAR_7 > VAR_8)
   continue;

  VAR_10 = FUNC_2(VAR_6);
  if (VAR_9 < VAR_10)
   break;
  if (VAR_9 > VAR_10)
   continue;

  if (FUNC_1(VAR_5, VAR_6, VAR_9) <= 0)
   break;
 }
 return VAR_4;
}
