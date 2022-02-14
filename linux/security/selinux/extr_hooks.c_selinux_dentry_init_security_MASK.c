
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qstr {int dummy; } ;
struct dentry {int d_parent; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,char**,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,struct qstr const*,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct dentry *VAR_1, int VAR_2,
     const struct qstr *VAR_3, void **VAR_4,
     u32 *VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_5(FUNC_4(FUNC_0()),
        FUNC_1(VAR_1->d_parent), VAR_3,
        FUNC_2(VAR_2),
        &VAR_6);
 if (VAR_7)
  return VAR_7;

 return FUNC_3(&VAR_0, VAR_6, (char **)VAR_4,
           VAR_5);
}
