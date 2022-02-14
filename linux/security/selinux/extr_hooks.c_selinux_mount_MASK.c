
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {TYPE_1__* dentry; } ;
struct cred {int dummy; } ;
struct TYPE_2__ {int d_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 struct cred* FUNC_0 () ;
 int FUNC_1 (struct cred const*,struct path const*,int ) ;
 int FUNC_2 (struct cred const*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3,
    const struct path *VAR_4,
    const char *VAR_5,
    unsigned long VAR_6,
    void *VAR_7)
{
 const struct cred *VAR_8 = FUNC_0();

 if (VAR_6 & VAR_2)
  return FUNC_2(VAR_8, VAR_4->dentry->d_sb,
        VAR_0, ((void*)0));
 else
  return FUNC_1(VAR_8, VAR_4, VAR_1);
}
