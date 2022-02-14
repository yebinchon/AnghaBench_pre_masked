
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
struct usr_header {scalar_t__ len; int crc32; scalar_t__* reserved; int hardware_revision; int compatibility_id; int version; int magic; } ;
typedef int hdr ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct usr_header VAR_8 ;
 int FUNC_0 (int ,int *,size_t) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 size_t FUNC_3 (struct usr_header,int,int ,int *) ;
 int FUNC_4 (int *,long,int ) ;
 int FUNC_5 (struct usr_header*,int,int,int *) ;
 int VAR_9 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct usr_header,int ,int ) ;

__attribute__((used)) static int FUNC_8(FILE* VAR_10, FILE* VAR_11)
{
 struct usr_header VAR_12;
 size_t VAR_13;

 VAR_12.magic = VAR_7;
 VAR_12.len = 0;
 VAR_12.crc32 = VAR_2;
 VAR_12.version = VAR_3;
 VAR_12.compatibility_id = VAR_1;
 VAR_12.hardware_revision = VAR_4;
 VAR_12.reserved[0] = 0;
 VAR_12.reserved[1] = 0;
 FUNC_5(& VAR_12, sizeof(VAR_12), 1, VAR_11);
 while ((VAR_13 = FUNC_3(VAR_8, 1, VAR_0, VAR_10)))
 {
  if (VAR_12.len == 0 && FUNC_7(VAR_8, VAR_6, FUNC_6(VAR_6)) != 0)
  {
   break;
  }
  FUNC_5(& VAR_8, 1, VAR_13, VAR_11);
  VAR_12.len += VAR_13;
  VAR_12.crc32 = FUNC_0( VAR_12.crc32, (uint8 *) & VAR_8, VAR_13);
 }
 FUNC_4(VAR_11, 0L, VAR_5);
 FUNC_5(& VAR_12, sizeof(VAR_12), 1, VAR_11);
 if (VAR_13 != 0)
 {
  FUNC_2(VAR_9, "Input is not a TRX file\n");
  return 1;
 }
 if (VAR_12.len == 0)
 {
  FUNC_2(VAR_9, "Empty input\n");
  return 1;
 }
 if (FUNC_1(VAR_10))
 {
  FUNC_2(VAR_9, "Read error\n");
  return 1;
 }
 if (FUNC_1(VAR_11))
 {
  FUNC_2(VAR_9, "Write error\n");
  return 1;
 }
 return 0;
}
