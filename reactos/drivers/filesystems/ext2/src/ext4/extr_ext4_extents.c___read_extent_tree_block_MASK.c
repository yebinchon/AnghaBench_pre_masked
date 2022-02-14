
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int ext4_fsblk_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct buffer_head* FUNC_0 (int) ;
 int FUNC_1 (char const*,unsigned int,struct inode*,int ,int,int ) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 struct buffer_head* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;

__attribute__((used)) static struct buffer_head *
FUNC_8(const char *VAR_2, unsigned int VAR_3,
  struct inode *VAR_4, ext4_fsblk_t VAR_5, int VAR_6,
  int VAR_7)
{
 struct buffer_head *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_5(VAR_4->i_sb, VAR_5);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 if (!FUNC_2(VAR_8)) {
  VAR_9 = -VAR_0;
  goto errout;
 }
 if (FUNC_3(VAR_8))
  return VAR_8;
 VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4,
   FUNC_4(VAR_8), VAR_6, VAR_5);
 if (VAR_9)
  goto errout;
 FUNC_7(VAR_8);
 return VAR_8;
errout:
 FUNC_6(VAR_8);
 return FUNC_0(VAR_9);

}
