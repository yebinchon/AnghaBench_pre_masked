
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct fuse_file_info {scalar_t__ fh; } ;
typedef int DIR ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, struct fuse_file_info *VAR_3)
{
  FUNC_0(VAR_2);
  DIR *VAR_4 = FUNC_1(VAR_1);
  VAR_3->fh = (uint64_t) VAR_4;
  return !VAR_4 ? -VAR_0 : 0;
}
