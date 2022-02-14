
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msdos_boot_sector {int dummy; } ;
struct TYPE_3__ {int info_sector; int fat32_length; } ;
struct TYPE_4__ {TYPE_1__ fat32; int fat_length; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 char* VAR_1 ;
 TYPE_2__ VAR_2 ;
 char* VAR_3 ;
 int FUNC_2 (char*) ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (char*,int,char*) ;

__attribute__((used)) static void
FUNC_5 (void)
{
  int VAR_11;
  int VAR_12;




  VAR_12 = (VAR_9 == 32) ?
        FUNC_0(VAR_2.fat32.fat32_length) : FUNC_1(VAR_2.fat_length);

  FUNC_3( 0, "start of device" );

  for( VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11 )
    FUNC_4( VAR_1, VAR_8, "reserved sector" );

  FUNC_3( 0, "boot sector" );
  FUNC_4( (char *) &VAR_2, sizeof (struct msdos_boot_sector), "boot sector" );

  if (VAR_9 == 32)
    {
      FUNC_3( FUNC_1(VAR_2.fat32.info_sector)*VAR_8, "info sector" );
      FUNC_4( VAR_4, 512, "info sector" );
      if (VAR_0 != 0)
 {
   FUNC_3( VAR_0*VAR_8, "backup boot sector" );
   FUNC_4( (char *) &VAR_2, sizeof (struct msdos_boot_sector),
      "backup boot sector" );
 }
    }

  FUNC_3( VAR_6*VAR_8, "first FAT" );
  for (VAR_11 = 1; VAR_11 <= VAR_5; VAR_11++)
    FUNC_4( VAR_3, VAR_12 * VAR_8, "FAT" );



  FUNC_4( (char *) VAR_7, VAR_10, "root directory" );

  if (VAR_4) FUNC_2( VAR_4 );
  FUNC_2 (VAR_7);
  FUNC_2 (VAR_3);
}
