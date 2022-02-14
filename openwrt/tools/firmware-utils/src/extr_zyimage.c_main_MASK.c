
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct signature TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sign ;
typedef int oldsign ;
struct signature {char const* magic; unsigned int device_id; char* firmware_version; unsigned int crc32; } ;
struct TYPE_5__ {char* member_0; } ;
struct TYPE_4__ {char member_0; char member_1; char member_2; char member_3; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (struct signature*,int,int,int *) ;
 int FUNC_8 (int *,int,int ) ;
 int FUNC_9 (TYPE_3__*,int,int,int *) ;
 int FUNC_10 (int,char**,char const*) ;
 int * VAR_4 ;
 size_t VAR_5 ;
 int FUNC_11 (char*,...) ;
 scalar_t__ FUNC_12 (char const*,char*,int) ;
 int FUNC_13 (char*,int *,int) ;
 scalar_t__ FUNC_14 (int *,int *,int) ;
 int FUNC_15 (char*) ;

int FUNC_16(int VAR_6, char *VAR_7[]) {
  struct signature
  {
    const char magic[4];
    unsigned int device_id;
    char firmware_version[48];
    unsigned int crc32;
  }
  VAR_8 =
  {
    { 'Z', 'N', 'B', 'G' },
    1,
    { "V.1.0.0(1.0.0)" },
    0
  };
  FILE *VAR_9;
  struct signature VAR_10;
  char *VAR_11;
  static const char *VAR_12;
  int VAR_13;

  if (VAR_6 < 1)
    FUNC_15(VAR_7[0]);

  VAR_12 = "v:d:h";
  VAR_13 = FUNC_10( VAR_6, VAR_7, VAR_12 );
  while( VAR_13 != -1 ) {
    switch( VAR_13 ) {
      case 'v':
        if (VAR_4 == ((void*)0))
          FUNC_15(VAR_7[0]);
        FUNC_13(VAR_8.firmware_version, VAR_4, sizeof(VAR_8.firmware_version)-1);
       VAR_8.firmware_version[sizeof(VAR_8.firmware_version)-1]='\0';
        break;

      case 'd':
        VAR_8.device_id = FUNC_1(VAR_4);
        if (VAR_8.device_id == 0)
          VAR_8.device_id = (int)FUNC_14(VAR_4, ((void*)0), 16);
        break;

      case '?':
      case 'h':
        FUNC_15(VAR_7[0]);
        break;

      default:
        break;
    }

    VAR_13 = FUNC_10( VAR_6, VAR_7, VAR_12 );
  }

  FUNC_3();

  VAR_11=VAR_7[VAR_5];
  if (FUNC_0(VAR_11, VAR_3) || FUNC_0(VAR_11, VAR_0))
  {
    FUNC_11("Not open input file %s\n", VAR_11);
    FUNC_4(1);
  }
  VAR_9 = FUNC_6(VAR_7[VAR_5], "r+");
  if (VAR_9 != ((void*)0))
  {
    FUNC_8(VAR_9, sizeof(VAR_8)*-1, VAR_1);
    FUNC_7(&VAR_10, sizeof(VAR_10), 1, VAR_9);

    if (FUNC_12(VAR_10.magic,"ZNBG", sizeof(VAR_10.magic)) == 0 )
    {
      FUNC_11("Image is already signed as:\nDevice ID: 0x%08x\nFirmware version: %s\nImage CRC32: 0x%x\n", VAR_10.device_id, VAR_10.firmware_version, VAR_10.crc32);
      FUNC_4(0);
    }

    FUNC_8(VAR_9, 0, VAR_2);
    VAR_8.crc32 = FUNC_2(VAR_9);
    FUNC_9(&VAR_8, sizeof(VAR_8), 1, VAR_9);
    FUNC_5(VAR_9);

    FUNC_11("Image signed as:\nDevice ID: 0x%08x\nFirmware version: %s\nImage CRC32: 0x%x\n", VAR_8.device_id, VAR_8.firmware_version, VAR_8.crc32);
  }
  return 0;
}
