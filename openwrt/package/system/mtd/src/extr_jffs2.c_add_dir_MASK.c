
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_unknown_node {int dummy; } ;
struct jffs2_raw_inode {int totlen; int ino; int mode; int version; scalar_t__ data_crc; void* node_crc; scalar_t__ dsize; scalar_t__ csize; scalar_t__ isize; scalar_t__ mtime; scalar_t__ ctime; scalar_t__ atime; scalar_t__ gid; scalar_t__ uid; void* hdr_crc; int nodetype; int magic; } ;
typedef int ri ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char const*,int ,int) ;
 void* FUNC_3 (int ,struct jffs2_raw_inode*,int) ;
 int VAR_3 ;
 int FUNC_4 (struct jffs2_raw_inode*,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(const char *VAR_4, int VAR_5)
{
 struct jffs2_raw_inode VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_4, FUNC_0(VAR_2), VAR_5);

 if (FUNC_7() < sizeof(VAR_6))
  FUNC_5(VAR_3);
 FUNC_6();

 FUNC_4(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.magic = VAR_0;
 VAR_6.nodetype = VAR_1;
 VAR_6.totlen = sizeof(VAR_6);
 VAR_6.hdr_crc = FUNC_3(0, &VAR_6, sizeof(struct jffs2_unknown_node) - 4);

 VAR_6.ino = VAR_7;
 VAR_6.mode = VAR_2 | 0755;
 VAR_6.uid = VAR_6.gid = 0;
 VAR_6.atime = VAR_6.ctime = VAR_6.mtime = 0;
 VAR_6.isize = VAR_6.csize = VAR_6.dsize = 0;
 VAR_6.version = 1;
 VAR_6.node_crc = FUNC_3(0, &VAR_6, sizeof(VAR_6) - 8);
 VAR_6.data_crc = 0;

 FUNC_1((char *) &VAR_6, sizeof(VAR_6));
 FUNC_5(4);
 return VAR_7;
}
