
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symsrc {int fd; int type; int name; } ;
struct dso {int load_errno; } ;
typedef enum dso_binary_type { ____Placeholder_dso_binary_type } dso_binary_type ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*) ;

int FUNC_3(struct symsrc *VAR_2, struct dso *VAR_3, const char *VAR_4,
          enum dso_binary_type VAR_5)
{
 int VAR_6 = FUNC_1(VAR_4, VAR_0);
 if (VAR_6 < 0)
  goto out_errno;

 VAR_2->name = FUNC_2(VAR_4);
 if (!VAR_2->name)
  goto out_close;

 VAR_2->fd = VAR_6;
 VAR_2->type = VAR_5;

 return 0;
out_close:
 FUNC_0(VAR_6);
out_errno:
 VAR_3->load_errno = VAR_1;
 return -1;
}
