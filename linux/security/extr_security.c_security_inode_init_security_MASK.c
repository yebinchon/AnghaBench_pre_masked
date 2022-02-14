
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr {int * value; int value_len; int name; } ;
struct qstr {int dummy; } ;
struct inode {int dummy; } ;
typedef int new_xattrs ;
typedef int (* initxattrs ) (struct inode*,struct xattr*,void*) ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int,struct inode*,struct inode*,struct qstr const*,int *,int **,int *) ;
 int FUNC_2 (struct inode*,struct xattr*,struct xattr*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct xattr*,int ,int) ;
 scalar_t__ FUNC_5 (int ) ;

int FUNC_6(struct inode *VAR_3, struct inode *VAR_4,
     const struct qstr *VAR_5,
     const initxattrs VAR_6, void *VAR_7)
{
 struct xattr VAR_8[VAR_1 + 1];
 struct xattr *VAR_9, *VAR_10, *VAR_11;
 int VAR_12;

 if (FUNC_5(FUNC_0(VAR_3)))
  return 0;

 if (!VAR_6)
  return FUNC_1(VAR_2, -VAR_0, VAR_3,
         VAR_4, VAR_5, ((void*)0), ((void*)0), ((void*)0));
 FUNC_4(VAR_8, 0, sizeof(VAR_8));
 VAR_9 = VAR_8;
 VAR_12 = FUNC_1(VAR_2, -VAR_0, VAR_3, VAR_4, VAR_5,
      &VAR_9->name,
      &VAR_9->value,
      &VAR_9->value_len);
 if (VAR_12)
  goto out;

 VAR_10 = VAR_9 + 1;
 VAR_12 = FUNC_2(VAR_3, VAR_9, VAR_10);
 if (VAR_12)
  goto out;
 VAR_12 = VAR_6(VAR_3, VAR_8, VAR_7);
out:
 for (VAR_11 = VAR_8; VAR_11->value != ((void*)0); VAR_11++)
  FUNC_3(VAR_11->value);
 return (VAR_12 == -VAR_0) ? 0 : VAR_12;
}
