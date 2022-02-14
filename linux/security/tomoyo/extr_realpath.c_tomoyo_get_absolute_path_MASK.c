
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dentry; } ;
struct inode {int i_mode; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 char* FUNC_3 (struct path const*,char* const,int const) ;
 struct inode* FUNC_4 (int ) ;

__attribute__((used)) static char *FUNC_5(const struct path *VAR_1, char * const VAR_2,
          const int VAR_3)
{
 char *VAR_4 = FUNC_0(-VAR_0);

 if (VAR_3 >= 256) {

  VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3 - 1);
  if (!FUNC_1(VAR_4) && *VAR_4 == '/' && VAR_4[1]) {
   struct inode *VAR_5 = FUNC_4(VAR_1->dentry);

   if (VAR_5 && FUNC_2(VAR_5->i_mode)) {
    VAR_2[VAR_3 - 2] = '/';
    VAR_2[VAR_3 - 1] = '\0';
   }
  }
 }
 return VAR_4;
}
