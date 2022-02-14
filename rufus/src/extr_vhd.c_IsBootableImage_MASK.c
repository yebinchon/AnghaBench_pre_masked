
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ checksum; scalar_t__ disk_type; scalar_t__ file_format_version; int cookie; } ;
typedef TYPE_1__ vhd_footer ;
typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_10__ {scalar_t__ compression_type; int image_size; int is_vhd; } ;
struct TYPE_9__ {int QuadPart; } ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOLEAN ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (scalar_t__,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (char const*,int ,int ,int *,int ,int ,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__,TYPE_2__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (char const*) ;
 int VAR_7 ;
 int FUNC_4 (scalar_t__,TYPE_1__*,int,int*,int *) ;
 int FUNC_5 (scalar_t__,TYPE_2__,int *,int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_11 ;
 TYPE_4__ VAR_12 ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ,int ,int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char*,...) ;

BOOL FUNC_13(const char* VAR_13)
{
 HANDLE VAR_14 = VAR_6;
 LARGE_INTEGER VAR_15;
 vhd_footer* VAR_16 = ((void*)0);
 DWORD VAR_17;
 size_t VAR_18;
 uint32_t VAR_19, VAR_20;
 LARGE_INTEGER VAR_21;
 BOOL VAR_22 = VAR_1;

 FUNC_12("Disk image analysis:");
 VAR_14 = FUNC_1(VAR_13, VAR_5, VAR_4, ((void*)0),
  VAR_7, VAR_2, ((void*)0));
 if (VAR_14 == VAR_6) {
  FUNC_12("  Could not open image '%s'", VAR_13);
  goto out;
 }

 VAR_22 = (BOOLEAN)FUNC_3(VAR_13);
 if (VAR_12.compression_type == VAR_0)
  VAR_22 = (BOOLEAN)FUNC_0(VAR_14, "  Image", VAR_1);

 if (!FUNC_2(VAR_14, &VAR_15)) {
  FUNC_12("  Could not get image size: %s", FUNC_6());
  goto out;
 }
 VAR_12.image_size = (uint64_t)VAR_15.QuadPart;

 VAR_17 = sizeof(vhd_footer);
 if ((VAR_12.compression_type == VAR_0) && (VAR_12.image_size >= (512 + VAR_17))) {
  VAR_16 = (vhd_footer*)FUNC_8(VAR_17);
  VAR_21.QuadPart = VAR_12.image_size - VAR_17;
  if ( (VAR_16 == ((void*)0)) || (!FUNC_5(VAR_14, VAR_21, ((void*)0), VAR_3)) ||
    (!FUNC_4(VAR_14, VAR_16, VAR_17, &VAR_17, ((void*)0))) || (VAR_17 != sizeof(vhd_footer)) ) {
   FUNC_12("  Could not read VHD footer");
   goto out;
  }
  if (FUNC_9(VAR_16->cookie, VAR_11, sizeof(VAR_16->cookie)) == 0) {
   VAR_12.image_size -= sizeof(vhd_footer);
   if ( (FUNC_7(VAR_16->file_format_version) != VAR_9)
     || (FUNC_7(VAR_16->disk_type) != VAR_10)) {
    FUNC_12("  Unsupported type of VHD image");
    VAR_22 = VAR_1;
    goto out;
   }

   VAR_20 = FUNC_7(VAR_16->checksum);
   VAR_16->checksum = 0;
   for (VAR_19=0, VAR_18=0; VAR_18<sizeof(vhd_footer); VAR_18++)
    VAR_19 += ((uint8_t*)VAR_16)[VAR_18];
   VAR_19 = ~VAR_19;
   if (VAR_19 != VAR_20)
    FUNC_12("  Warning: VHD footer seems corrupted (checksum: %04X, expected: %04X)", VAR_20, VAR_19);

   FUNC_12("  Image is a Fixed Hard Disk VHD file");
   VAR_12.is_vhd = VAR_8;
  }
 }

out:
 FUNC_11(VAR_16);
 FUNC_10(VAR_14);
 return VAR_22;
}
