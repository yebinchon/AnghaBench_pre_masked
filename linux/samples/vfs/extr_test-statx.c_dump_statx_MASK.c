
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statx {int stx_mask; int stx_mode; int stx_dev_major; int stx_dev_minor; int stx_nlink; int stx_rdev_major; int stx_rdev_minor; int stx_uid; int stx_gid; int stx_attributes_mask; int stx_attributes; int stx_btime; int stx_ctime; int stx_mtime; int stx_atime; scalar_t__ stx_ino; scalar_t__ stx_blksize; scalar_t__ stx_blocks; scalar_t__ stx_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;





 int VAR_12 ;


 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char) ;
 int FUNC_3 (char*,char*,int,int) ;

__attribute__((used)) static void FUNC_4(struct statx *VAR_22)
{
 char VAR_23[256], VAR_24 = '?';

 FUNC_1("results=%x\n", VAR_22->stx_mask);

 FUNC_1(" ");
 if (VAR_22->stx_mask & VAR_9)
  FUNC_1(" Size: %-15llu", (unsigned long long)VAR_22->stx_size);
 if (VAR_22->stx_mask & VAR_1)
  FUNC_1(" Blocks: %-10llu", (unsigned long long)VAR_22->stx_blocks);
 FUNC_1(" IO Block: %-6llu", (unsigned long long)VAR_22->stx_blksize);
 if (VAR_22->stx_mask & VAR_10) {
  switch (VAR_22->stx_mode & VAR_12) {
  case 131: FUNC_1("  FIFO\n"); VAR_24 = 'p'; break;
  case 133: FUNC_1("  character special file\n"); VAR_24 = 'c'; break;
  case 132: FUNC_1("  directory\n"); VAR_24 = 'd'; break;
  case 134: FUNC_1("  block special file\n"); VAR_24 = 'b'; break;
  case 129: FUNC_1("  regular file\n"); VAR_24 = '-'; break;
  case 130: FUNC_1("  symbolic link\n"); VAR_24 = 'l'; break;
  case 128: FUNC_1("  socket\n"); VAR_24 = 's'; break;
  default:
   FUNC_1(" unknown type (%o)\n", VAR_22->stx_mode & VAR_12);
   break;
  }
 } else {
  FUNC_1(" no type\n");
 }

 FUNC_3(VAR_23, "%02x:%02x", VAR_22->stx_dev_major, VAR_22->stx_dev_minor);
 FUNC_1("Device: %-15s", VAR_23);
 if (VAR_22->stx_mask & VAR_5)
  FUNC_1(" Inode: %-11llu", (unsigned long long) VAR_22->stx_ino);
 if (VAR_22->stx_mask & VAR_8)
  FUNC_1(" Links: %-5u", VAR_22->stx_nlink);
 if (VAR_22->stx_mask & VAR_10) {
  switch (VAR_22->stx_mode & VAR_12) {
  case 134:
  case 133:
   FUNC_1(" Device type: %u,%u",
          VAR_22->stx_rdev_major, VAR_22->stx_rdev_minor);
   break;
  }
 }
 FUNC_1("\n");

 if (VAR_22->stx_mask & VAR_6)
  FUNC_1("Access: (%04o/%c%c%c%c%c%c%c%c%c%c)  ",
         VAR_22->stx_mode & 07777,
         VAR_24,
         VAR_22->stx_mode & VAR_15 ? 'r' : '-',
         VAR_22->stx_mode & VAR_18 ? 'w' : '-',
         VAR_22->stx_mode & VAR_21 ? 'x' : '-',
         VAR_22->stx_mode & VAR_13 ? 'r' : '-',
         VAR_22->stx_mode & VAR_16 ? 'w' : '-',
         VAR_22->stx_mode & VAR_19 ? 'x' : '-',
         VAR_22->stx_mode & VAR_14 ? 'r' : '-',
         VAR_22->stx_mode & VAR_17 ? 'w' : '-',
         VAR_22->stx_mode & VAR_20 ? 'x' : '-');
 if (VAR_22->stx_mask & VAR_11)
  FUNC_1("Uid: %5d   ", VAR_22->stx_uid);
 if (VAR_22->stx_mask & VAR_4)
  FUNC_1("Gid: %5d\n", VAR_22->stx_gid);

 if (VAR_22->stx_mask & VAR_0)
  FUNC_0("Access: ", &VAR_22->stx_atime);
 if (VAR_22->stx_mask & VAR_7)
  FUNC_0("Modify: ", &VAR_22->stx_mtime);
 if (VAR_22->stx_mask & VAR_3)
  FUNC_0("Change: ", &VAR_22->stx_ctime);
 if (VAR_22->stx_mask & VAR_2)
  FUNC_0(" Birth: ", &VAR_22->stx_btime);

 if (VAR_22->stx_attributes_mask) {
  unsigned char VAR_25, VAR_26;
  int VAR_27, VAR_28;

  static char VAR_29[64 + 1] =

   "????????"
   "????????"
   "????????"
   "????????"
   "????????"
   "????????"
   "???me???"
   "?dai?c??"
   ;

  FUNC_1("Attributes: %016llx (",
         (unsigned long long)VAR_22->stx_attributes);
  for (VAR_28 = 64 - 8; VAR_28 >= 0; VAR_28 -= 8) {
   VAR_25 = VAR_22->stx_attributes >> VAR_28;
   VAR_26 = VAR_22->stx_attributes_mask >> VAR_28;
   for (VAR_27 = 7; VAR_27 >= 0; VAR_27--) {
    int VAR_30 = VAR_28 + VAR_27;

    if (!(VAR_26 & 0x80))
     FUNC_2('.');
    else if (VAR_25 & 0x80)
     FUNC_2(VAR_29[63 - VAR_30]);
    else
     FUNC_2('-');
    VAR_25 <<= 1;
    VAR_26 <<= 1;
   }
   if (VAR_28)
    FUNC_2(' ');
  }
  FUNC_1(")\n");
 }
}
