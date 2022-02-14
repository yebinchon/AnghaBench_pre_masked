
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct path {TYPE_3__* dentry; TYPE_2__* mnt; } ;
struct TYPE_11__ {int fs; } ;
struct TYPE_10__ {TYPE_1__* d_sb; } ;
struct TYPE_9__ {int mnt_flags; } ;
struct TYPE_8__ {scalar_t__ s_magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct path const*,struct path*,char*,int) ;
 int VAR_8 ;
 TYPE_7__* VAR_9 ;
 char* FUNC_3 (struct path const*,char*,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 char* FUNC_6 (TYPE_3__*,char*,int) ;
 char* FUNC_7 (TYPE_3__*,char*,int) ;
 int FUNC_8 (struct path const*,char*,char**,int,char const*) ;
 int FUNC_9 (int ,struct path*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct path*) ;
 int FUNC_12 (char**,int,char*,int) ;
 int FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (char*,char*,int) ;

__attribute__((used)) static int FUNC_15(const struct path *VAR_10, char *VAR_11, char **VAR_12,
       int VAR_13, const char *VAR_14)
{
 char *VAR_15;
 int VAR_16 = 0;
 int VAR_17 = 1;
 int VAR_18 = (VAR_13 & VAR_5) ? 1 : 0;
 int VAR_19 = VAR_8 - VAR_18;

 if (VAR_10->mnt->mnt_flags & VAR_2) {

  VAR_15 = FUNC_6(VAR_10->dentry, VAR_11, VAR_19);
  *VAR_12 = VAR_15;
  if (FUNC_0(VAR_15)) {
   *VAR_12 = VAR_11;
   return FUNC_1(VAR_15);
  }
  if (VAR_10->dentry->d_sb->s_magic == VAR_7 &&
      FUNC_14(*VAR_12, "/sys/", 5) == 0) {



   VAR_16 = FUNC_12(VAR_12, *VAR_12 - VAR_11, "/proc", 5);
   goto out;
  } else
   VAR_16 = FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13,
        VAR_14);
  goto out;
 }


 if (VAR_13 & VAR_3) {
  struct path VAR_20;
  FUNC_9(VAR_9->fs, &VAR_20);
  VAR_15 = FUNC_2(VAR_10, &VAR_20, VAR_11, VAR_19);
  FUNC_11(&VAR_20);
 } else {
  VAR_15 = FUNC_3(VAR_10, VAR_11, VAR_19);
  if (!FUNC_10(VAR_10->mnt))
   VAR_17 = 0;
 }




 if (!VAR_15 || FUNC_0(VAR_15)) {
  if (FUNC_1(VAR_15) == -VAR_0) {
   VAR_16 = -VAR_0;
   *VAR_12 = VAR_11;
   goto out;
  }
  VAR_17 = 0;
  VAR_15 = FUNC_7(VAR_10->dentry, VAR_11, VAR_19);
  if (FUNC_0(VAR_15)) {
   VAR_16 = FUNC_1(VAR_15);
   *VAR_12 = VAR_11;
   goto out;
  };
 } else if (!FUNC_10(VAR_10->mnt))
  VAR_17 = 0;

 *VAR_12 = VAR_15;

 if (!VAR_17)
  VAR_16 = FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);







 if (FUNC_5(VAR_10->dentry) && FUNC_4(VAR_10->dentry) &&
     !(VAR_13 & (VAR_6 | VAR_4))) {
   VAR_16 = -VAR_1;
   goto out;
 }

out:




 if (!VAR_16 && VAR_18 && ((*VAR_12)[1] != '\0' || (*VAR_12)[0] != '/'))
  FUNC_13(&VAR_11[VAR_8 - 2], "/");

 return VAR_16;
}
