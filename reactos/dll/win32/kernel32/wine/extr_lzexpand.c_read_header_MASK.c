
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lzfileheader {char* magic; char compressiontype; char lastchar; char reallength; } ;
typedef int INT ;
typedef int HFILE ;
typedef int BYTE ;


 int LZERROR_BADINHANDLE ;
 int LZERROR_UNKNOWNALG ;
 int LZMagic ;
 int LZ_HEADER_LEN ;
 int LZ_MAGIC_LEN ;
 int SEEK_SET ;
 int _llseek (int ,int ,int ) ;
 int _lread (int ,int *,int) ;
 scalar_t__ memcmp (char*,int ,int) ;
 int memcpy (char*,int *,int) ;

__attribute__((used)) static INT read_header(HFILE fd,struct lzfileheader *head)
{
 BYTE buf[LZ_HEADER_LEN];

 if (_llseek(fd,0,SEEK_SET)==-1)
  return LZERROR_BADINHANDLE;




 if (_lread(fd,buf,LZ_HEADER_LEN)<LZ_HEADER_LEN)
  return 0;
 memcpy(head->magic,buf,LZ_MAGIC_LEN);
 memcpy(&(head->compressiontype),buf+LZ_MAGIC_LEN,1);
 memcpy(&(head->lastchar),buf+LZ_MAGIC_LEN+1,1);


 memcpy(&(head->reallength),buf+LZ_MAGIC_LEN+2,4);

 if (memcmp(head->magic,LZMagic,LZ_MAGIC_LEN))
  return 0;
 if (head->compressiontype!='A')
  return LZERROR_UNKNOWNALG;
 return 1;
}
