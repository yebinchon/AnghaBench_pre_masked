
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct stat {int st_size; } ;
struct TYPE_13__ {int bytes_used; } ;
typedef TYPE_5__ squashfs_sb_t ;
typedef scalar_t__ op_mode_t ;
struct TYPE_10__ {scalar_t__ minor; scalar_t__ major; } ;
struct TYPE_9__ {scalar_t__ minor; scalar_t__ major; } ;
struct TYPE_11__ {scalar_t__ ih_ksz; int productid; TYPE_2__ fs; TYPE_1__ kernel; } ;
struct TYPE_12__ {char* ih_name; TYPE_3__ asus; } ;
struct TYPE_14__ {scalar_t__ ih_magic; scalar_t__ ih_size; TYPE_4__ tail; } ;
typedef TYPE_6__ image_header_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_6__*,void*,int) ;
 int FUNC_1 (int) ;
 int VAR_10 ;
 int FUNC_2 (int ,char*,char*,char*,...) ;
 scalar_t__ FUNC_3 (int,struct stat*) ;
 int FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_6__*,void*,int) ;
 int FUNC_7 (void*,int,int) ;
 scalar_t__ FUNC_8 (int ,int,int,int ,int,int ) ;
 int FUNC_9 (void*,int) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (char*,int ,int) ;
 int VAR_11 ;
 char* FUNC_12 (int ) ;
 int FUNC_13 (char*,char*,int) ;

int
FUNC_14(char *VAR_12, char *VAR_13, op_mode_t VAR_14)
{
 int VAR_15, VAR_16;
 void *VAR_17, *VAR_18;
 char VAR_19[VAR_4];
 struct stat VAR_20;
 uint32_t VAR_21, VAR_22, VAR_23, VAR_24,
    VAR_25, VAR_26, VAR_27;
 squashfs_sb_t *VAR_28;
 image_header_t *VAR_29;

 if ((VAR_15 = FUNC_11(VAR_13, VAR_7, 0666)) < 0) {
  FUNC_2 (VAR_11, "%s: Can't open %s: %s\n",
   VAR_12, VAR_13, FUNC_12(VAR_10));
  return (VAR_0);
 }

 if (FUNC_3(VAR_15, &VAR_20) < 0) {
  FUNC_2 (VAR_11, "%s: Can't stat %s: %s\n",
   VAR_12, VAR_13, FUNC_12(VAR_10));
  return (VAR_0);
 }

 if ((unsigned)VAR_20.st_size < sizeof(image_header_t)) {
  FUNC_2 (VAR_11,
   "%s: Bad size: \"%s\" is no valid image\n",
   VAR_12, VAR_13);
  return (VAR_0);
 }

 VAR_18 = (void *)FUNC_8(0, VAR_20.st_size,
    VAR_8 | VAR_9,
    VAR_6,
    VAR_15, 0);

 if ((caddr_t)VAR_18 == (caddr_t)-1) {
  FUNC_2 (VAR_11, "%s: Can't read %s: %s\n",
   VAR_12, VAR_13, FUNC_12(VAR_10));
  return (VAR_0);
 }

 VAR_29 = VAR_18;

 if (FUNC_10(VAR_29->ih_magic) != VAR_3) {
  FUNC_2 (VAR_11,
   "%s: Bad Magic Number: \"%s\" is no valid image\n",
   VAR_12, VAR_13);
  return (VAR_0);
 }

 if (VAR_14 == VAR_2) {
  FUNC_13(VAR_19, VAR_29->tail.ih_name, VAR_4);
  VAR_29->tail.asus.kernel.major = 0;
  VAR_29->tail.asus.kernel.minor = 0;
  VAR_29->tail.asus.fs.major = 0;
  VAR_29->tail.asus.fs.minor = 0;
  FUNC_13((char *)&VAR_29->tail.asus.productid, "RT-N56U", VAR_5);
 }

 if (VAR_29->tail.asus.ih_ksz == 0)
  VAR_29->tail.asus.ih_ksz = FUNC_5(FUNC_10(VAR_29->ih_size) + sizeof(image_header_t));

 VAR_22 = sizeof(image_header_t);
 VAR_23 = FUNC_10(VAR_29->tail.asus.ih_ksz);
 VAR_28 = VAR_18 + VAR_23;
 VAR_25 = VAR_23 + VAR_28->bytes_used;




 VAR_24 = VAR_25 + sizeof(image_header_t);
 VAR_26 = ((VAR_24>>16)+1)<<16;

 if (VAR_14 == VAR_2)
  VAR_27 = VAR_26 + 4;
 else
  VAR_27 = VAR_20.st_size;



 VAR_24 = VAR_25;
 VAR_25 = VAR_26 - sizeof(image_header_t);




 if (VAR_14 == VAR_2)
  FUNC_7(VAR_18+VAR_24, 0xff ,VAR_26 - VAR_24);




 if (VAR_27 > VAR_20.st_size) {
  (void) FUNC_9((void *)VAR_18, VAR_20.st_size);
  FUNC_4(VAR_15, VAR_27);
  VAR_18 = (void *)FUNC_8(0, VAR_27,
      VAR_8 | VAR_9,
      VAR_6,
      VAR_15, 0);



  if (VAR_14 == VAR_2) {
   *(uint8_t *)(VAR_18+VAR_27-4) = 0xde;
   *(uint8_t *)(VAR_18+VAR_27-3) = 0xad;
   *(uint8_t *)(VAR_18+VAR_27-2) = 0xc0;
   *(uint8_t *)(VAR_18+VAR_27-1) = 0xde;
  }
 }




 if (VAR_14 == VAR_2) {
  VAR_29 = VAR_18+VAR_25;
  FUNC_6(VAR_29, VAR_18, sizeof(image_header_t));
  FUNC_13(VAR_29->tail.ih_name, VAR_19, VAR_4);
  FUNC_0(VAR_29, VAR_18+VAR_22, VAR_23 - VAR_22);
  FUNC_0((image_header_t *)VAR_18, VAR_18+VAR_22, VAR_27 - VAR_22);
 } else {
  FUNC_0((image_header_t *)VAR_18, VAR_18+VAR_22, VAR_23 - VAR_22);
 }

 if (VAR_20.st_size > VAR_27)
  (void) FUNC_9((void *)VAR_18, VAR_20.st_size);
 else
  (void) FUNC_9((void *)VAR_18, VAR_27);

 FUNC_4(VAR_15, VAR_27);
 (void) FUNC_1 (VAR_15);

 return VAR_1;
}
