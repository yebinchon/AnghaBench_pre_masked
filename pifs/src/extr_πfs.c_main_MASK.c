
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct options {int dummy; } ;
struct fuse_args {int argv; int argc; } ;
struct TYPE_4__ {char* mdd; } ;


 struct fuse_args FUNC_0 (int,char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,char*,...) ;
 int FUNC_3 (int ,int ,int *,int *) ;
 int FUNC_4 (struct fuse_args*) ;
 int FUNC_5 (struct fuse_args*,TYPE_1__*,int ,int *) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_7 (int ) ;

int FUNC_8 (int VAR_8, char *VAR_9[])
{
  int VAR_10;
  struct fuse_args VAR_11 = FUNC_0(VAR_8, VAR_9);

  FUNC_6(&VAR_4, 0, sizeof(struct options));
  if (FUNC_5(&VAR_11, &VAR_4, VAR_6, ((void*)0)) == -1) {
    return -1;
  }

  if (!VAR_4.mdd) {
    FUNC_2(VAR_7,
            "%s: Metadata directory must be specified with -o mdd=<directory>\n",
            VAR_9[0]);
    return -1;
  }

  if (FUNC_1(VAR_4.mdd, VAR_0 | VAR_1 | VAR_2) == -1) {
    FUNC_2(VAR_7, "%s: Cannot access metadata directory '%s': %s\n",
            VAR_9[0], VAR_4.mdd, FUNC_7(VAR_3));
    return -1;
  }

  VAR_10 = FUNC_3(VAR_11.argc, VAR_11.argv, &VAR_5, ((void*)0));
  FUNC_4(&VAR_11);
  return VAR_10;
}
