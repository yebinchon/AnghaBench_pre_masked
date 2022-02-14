
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent_header {int dummy; } ;
struct ext4_extent {int dummy; } ;
struct ext4_ext_path {struct ext4_extent_header* p_hdr; } ;
typedef int handle_t ;


 int FUNC_0 (int ) ;
 struct ext4_extent* FUNC_1 (struct ext4_extent_header*) ;
 int FUNC_2 (struct inode*,struct ext4_ext_path*,struct ext4_extent*) ;
 int FUNC_3 (void*,int *,struct inode*,struct ext4_ext_path*) ;
 unsigned int FUNC_4 (struct inode*) ;

__attribute__((used)) static void FUNC_5(void *VAR_0, handle_t *VAR_1,
  struct inode *VAR_2,
  struct ext4_ext_path *VAR_3,
  struct ext4_extent *VAR_4) {
 struct ext4_extent_header *VAR_5;
 unsigned int VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_4(VAR_2);
 FUNC_0(VAR_3[VAR_6].p_hdr == ((void*)0));
 VAR_5 = VAR_3[VAR_6].p_hdr;

 if (VAR_4 > FUNC_1(VAR_5))
  VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4 - 1);

 if (!VAR_7)
  (void) FUNC_2(VAR_2, VAR_3, VAR_4);

 FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
}
