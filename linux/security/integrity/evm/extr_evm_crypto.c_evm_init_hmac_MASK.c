
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr {int value_len; int value; } ;
struct shash_desc {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct shash_desc*) ;
 int FUNC_1 (struct shash_desc*) ;
 int FUNC_2 (struct shash_desc*,int ,int ) ;
 int FUNC_3 (struct shash_desc*,struct inode*,int ,char*) ;
 struct shash_desc* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct shash_desc*) ;
 int FUNC_6 (char*) ;

int FUNC_7(struct inode *VAR_2, const struct xattr *VAR_3,
    char *VAR_4)
{
 struct shash_desc *VAR_5;

 VAR_5 = FUNC_4(VAR_0, VAR_1);
 if (FUNC_0(VAR_5)) {
  FUNC_6("init_desc failed\n");
  return FUNC_1(VAR_5);
 }

 FUNC_2(VAR_5, VAR_3->value, VAR_3->value_len);
 FUNC_3(VAR_5, VAR_2, VAR_0, VAR_4);
 FUNC_5(VAR_5);
 return 0;
}
