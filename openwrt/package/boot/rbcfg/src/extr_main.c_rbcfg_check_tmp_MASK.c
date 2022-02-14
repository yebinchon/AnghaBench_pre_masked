
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; scalar_t__ st_size; } ;
struct rbcfg_ctx {scalar_t__ buflen; int tmp_file; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct stat*) ;

__attribute__((used)) static int
FUNC_1(struct rbcfg_ctx *VAR_1)
{
 struct stat VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1->tmp_file, &VAR_2);
 if (VAR_3 < 0)
  return 0;

 if ((VAR_2.st_mode & VAR_0) == 0)
  return 0;

 if (VAR_2.st_size != VAR_1->buflen)
  return 0;

 return 1;
}
