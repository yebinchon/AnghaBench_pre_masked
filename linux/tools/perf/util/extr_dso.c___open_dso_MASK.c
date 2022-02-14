
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine {char* root_dir; } ;
struct dso {int load_errno; int binary_type; } ;
typedef int newpath ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct dso*,char*,char*,size_t) ;
 scalar_t__ FUNC_2 (struct dso*) ;
 scalar_t__ FUNC_3 (struct dso*,int ,char*,char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct dso *VAR_4, struct machine *VAR_5)
{
 int VAR_6 = -VAR_0;
 char *VAR_7 = (char *)"";
 char *VAR_8 = FUNC_6(VAR_3);
 bool VAR_9 = 0;

 if (!VAR_8)
  return -VAR_1;

 if (VAR_5)
  VAR_7 = VAR_5->root_dir;

 if (FUNC_3(VAR_4, VAR_4->binary_type,
         VAR_7, VAR_8, VAR_3))
  goto out;

 if (!FUNC_5(VAR_8))
  goto out;

 if (FUNC_2(VAR_4)) {
  char VAR_10[VAR_2];
  size_t VAR_11 = sizeof(VAR_10);

  if (FUNC_1(VAR_4, VAR_8, VAR_10, VAR_11) < 0) {
   VAR_6 = -VAR_4->load_errno;
   goto out;
  }

  VAR_9 = 1;
  FUNC_7(VAR_8, VAR_10);
 }

 VAR_6 = FUNC_0(VAR_8);

 if (VAR_9)
  FUNC_8(VAR_8);

out:
 FUNC_4(VAR_8);
 return VAR_6;
}
