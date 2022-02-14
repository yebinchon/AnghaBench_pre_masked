
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int errcode_t ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,...) ;

const char* FUNC_4(errcode_t VAR_4)
{
 static char VAR_5[256];

 switch (VAR_4) {
 case 155:
 case 157:
 case 158:
 case 150:
 case 149:
 case 148:
 case 156:
 case 151:
 case 153:
 case 152:
 case 154:
 case 199:
  return "Bad magic";
 case 138:
  return "Read-only file system";
 case 178:
 case 177:
 case 176:
  return "Bad map or table";
 case 131:
  return "Unexpected block size";
 case 190:
  return "Corrupted entry";
 case 175:
 case 174:
 case 170:
 case 171:
 case 195:
 case 196:
 case 165:
 case 166:
 case 145:
 case 135:
 case 134:
  return "read/write error";
 case 187:
  return "no space left";
 case 133:
  return "Too small";
 case 200:
  return "Bad device name";
 case 147:
  return "Missing inode table";
 case 191:
  return "Superblock is corrupted";
 case 194:
  return "Unhandled callback";
 case 203:
  return "Bad block in inode table";
 case 128:
 case 137:
 case 130:
  return "Unsupported feature";
 case 159:
  return "Seek failed";
 case 140:
 case 198:
 case 173:
  return "Out of memory";
 case 164:
  return "Invalid argument";
 case 143:
  return "No directory";
 case 181:
  return "File not found";
 case 180:
  return "File is read-only";
 case 188:
  return "Directory already exists";
 case 193:
  return "Cancel requested";
 case 179:
  return "File too big";
 case 161:
 case 141:
  return "No journal superblock";
 case 160:
  return "Journal too small";
 case 142:
  return "No journal";
 case 132:
  return "Too many inodes";
 case 144:
  return "No current node";
 case 139:
  return "Operation not supported";
 case 163:
  return "I/O Channel does not support 64-bit operation";
 case 201:
  return "Bad descriptor size";
 case 168:
 case 172:
 case 185:
 case 189:
 case 184:
 case 136:
 case 197:
 case 146:
  return "Invalid checksum";
 case 129:
  return "Unknown checksum";
 case 182:
  return "File exists";
 case 167:
  return "Inode is garbage";
 case 162:
  return "Wrong journal flags";
 case 183:
  return "File system is corrupted";
 case 202:
  return "Bad CRC";
 case 192:
  return "Journal Superblock is corrupted";
 case 169:
 case 186:
  return "Inode is corrupted";
 default:
  if ((VAR_4 > VAR_1) && VAR_4 < (VAR_1 + 1000)) {
   FUNC_3(VAR_5, "Unknown ext2fs error %ld (EXT2_ET_BASE + %ld)", VAR_4, VAR_4 - VAR_1);
  } else {
   FUNC_1((VAR_3 == 0) ? (VAR_0 | FUNC_0(VAR_2) | (VAR_4 & 0xFFFF)) : VAR_3);
   FUNC_3(VAR_5, FUNC_2());
  }
  return VAR_5;
 }
}
