
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_xattr {int value_len; int ea_ino; int name; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char const**,int*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(struct ext2_xattr *VAR_0, int VAR_1)
{
 int VAR_2 = 0;
 struct ext2_xattr *VAR_3;
 const char *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 for (VAR_5 = 0, VAR_3 = VAR_0; VAR_5 < VAR_1; VAR_5++, VAR_3++) {
  FUNC_2(VAR_3->name, &VAR_4, &VAR_7);
  VAR_6 = FUNC_3(VAR_4);
  VAR_2 += FUNC_0(VAR_6);
  if (!VAR_3->ea_ino)
   VAR_2 += FUNC_1(VAR_3->value_len);
 }
 return VAR_2;
}
