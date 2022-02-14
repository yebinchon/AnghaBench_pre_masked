
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;


 int VAR_0 ;
 struct super_block* FUNC_0 (int ) ;
 int FUNC_1 (struct super_block*) ;
 struct super_block* VAR_1 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_2)
{





 if (!FUNC_1(VAR_1) && VAR_2 == VAR_1) {
  VAR_1 = FUNC_0(-VAR_0);
  FUNC_2("umount pinned fs: refusing further loads\n");
 }
}
