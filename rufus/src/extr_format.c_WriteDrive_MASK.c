
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
struct TYPE_7__ {scalar_t__ DiskSize; int SectorSize; } ;
struct TYPE_6__ {scalar_t__ image_size; scalar_t__ compression_type; } ;
struct TYPE_5__ {scalar_t__ QuadPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef int * HANDLE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_1 (int *,int *,scalar_t__,scalar_t__*,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_4__ VAR_16 ;
 int FUNC_4 (int *,TYPE_1__,int *,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_17 ;
 int FUNC_6 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *,scalar_t__) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int *,int *,scalar_t__,scalar_t__*,int *) ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;
 int VAR_20 ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int ,int*) ;
 scalar_t__ FUNC_14 (int *,int *,scalar_t__) ;
 scalar_t__ VAR_21 ;
 TYPE_2__ VAR_22 ;
 int FUNC_15 (int *,int,scalar_t__) ;
 int FUNC_16 (int *) ;
 int VAR_23 ;
 int FUNC_17 (char*,...) ;

__attribute__((used)) static BOOL FUNC_18(HANDLE VAR_24, HANDLE VAR_25)
{
 BOOL VAR_26, VAR_27 = VAR_9;
 LARGE_INTEGER VAR_28;
 DWORD VAR_29, VAR_30, VAR_31, VAR_32;
 uint64_t VAR_33, VAR_34 = VAR_25?VAR_22.image_size:VAR_16.DiskSize;
 int64_t VAR_35;
 uint8_t *VAR_36 = ((void*)0);
 uint8_t *VAR_37 = ((void*)0);
 int VAR_38, *VAR_39, VAR_40, VAR_41 = 0;


 VAR_28.QuadPart = 0;
 if (!FUNC_4(VAR_24, VAR_28, ((void*)0), VAR_10))
  FUNC_17("Warning: Unable to rewind image position - wrong data might be copied!");
 FUNC_7(((void*)0), VAR_9);

 if (VAR_22.compression_type != VAR_0) {
  FUNC_17("Writing compressed image...");
  FUNC_13(VAR_20, VAR_23, &VAR_11);
  VAR_35 = FUNC_14(VAR_25, VAR_24, VAR_22.compression_type);
  FUNC_12();
  if ((VAR_35 < 0) && (FUNC_3(VAR_11) != VAR_3)) {

   FUNC_17("Could not write compressed image: %lld", VAR_35);
   VAR_11 = VAR_6 | FUNC_0(VAR_8) | VAR_7;
   goto out;
  }
 } else {
  FUNC_17(VAR_25?"Writing Image...":VAR_21?"Fast-zeroing drive...":"Zeroing drive...");

  VAR_32 = ((VAR_2 + VAR_16.SectorSize - 1) / VAR_16.SectorSize) * VAR_16.SectorSize;
  VAR_36 = (uint8_t*)FUNC_10(VAR_32, VAR_16.SectorSize);
  if (VAR_36 == ((void*)0)) {
   VAR_11 = VAR_6 | FUNC_0(VAR_8) | VAR_4;
   FUNC_17("Could not allocate disk write buffer");
   goto out;
  }
  FUNC_11((uintptr_t)VAR_36 % VAR_16.SectorSize == 0);


  FUNC_15(VAR_36, VAR_21 ? 0xff : 0x00, VAR_32);

  VAR_37 = (uint8_t*)FUNC_10(VAR_32, VAR_16.SectorSize);
  if (VAR_37 == ((void*)0)) {
   VAR_11 = VAR_6 | FUNC_0(VAR_8) | VAR_4;
   FUNC_17("Could not allocate disk comparison buffer");
   goto out;
  }
  FUNC_11((uintptr_t)VAR_37 % VAR_16.SectorSize == 0);




  VAR_29 = VAR_32;
  for (VAR_33 = 0, VAR_30 = 0; VAR_33 < (uint64_t)VAR_16.DiskSize; VAR_33 += VAR_30) {
   FUNC_6(VAR_15, VAR_25 ? VAR_12 : VAR_21 ? VAR_14 : VAR_13, VAR_33, VAR_34);
   if (VAR_25 != ((void*)0)) {
    VAR_26 = FUNC_1(VAR_25, VAR_36, VAR_32, &VAR_29, ((void*)0));
    if (!VAR_26) {
     VAR_11 = VAR_6 | FUNC_0(VAR_8) | VAR_5;
     FUNC_17("Read error: %s", FUNC_8());
     goto out;
    }
    if (VAR_29 == 0)
     break;
   }

   if (VAR_33 + VAR_29 > VAR_34) {
    VAR_29 = (DWORD)(VAR_34 - VAR_33);
   }


   if (VAR_29 % VAR_16.SectorSize != 0)
    VAR_29 = ((VAR_29 + VAR_16.SectorSize - 1) / VAR_16.SectorSize) * VAR_16.SectorSize;





   if (VAR_41) {
    VAR_41--;
   } else if (VAR_21) {
    FUNC_11(VAR_25 == ((void*)0));
    VAR_1;


    VAR_26 = FUNC_1(VAR_24, VAR_37, VAR_29, &VAR_31, ((void*)0));
    if ((!VAR_26) || (VAR_31 != VAR_29) ) {
     FUNC_17("Read error: Could not read data for comparison - %s", FUNC_8());
     goto out;
    }


    VAR_39 = (int*)(VAR_37);

    VAR_40 = VAR_39[0];

    if ((VAR_40 == 0) || (VAR_40 == -1)) {

     for (VAR_38 = 1; VAR_38 < (int)(VAR_29 / sizeof(int)); VAR_38++) {
      if (VAR_39[VAR_38] != VAR_40)
       break;
     }
     if (VAR_38 >= (int)(VAR_29 / sizeof(int))) {

      VAR_30 = VAR_29;
      continue;
     }
    }


    VAR_28.QuadPart = VAR_33;
    if (!FUNC_4(VAR_24, VAR_28, ((void*)0), VAR_10)) {
     FUNC_17("Error: Could not reset position - %s", FUNC_8());
     goto out;
    }

    VAR_41 = 15;
   }

   for (VAR_38 = 1; VAR_38 <= VAR_18; VAR_38++) {
    VAR_1;
    VAR_26 = FUNC_9(VAR_24, VAR_36, VAR_29, &VAR_30, ((void*)0));
    if ((VAR_26) && (VAR_30 == VAR_29))
     break;
    if (VAR_26)
     FUNC_17("Write error: Wrote %d bytes, expected %d bytes", VAR_30, VAR_29);
    else
     FUNC_17("Write error at sector %lld: %s", VAR_33 / VAR_16.SectorSize, FUNC_8());
    if (VAR_38 < VAR_18) {
     VAR_28.QuadPart = VAR_33;
     FUNC_17("Retrying in %d seconds...", VAR_19 / 1000);
     FUNC_5(VAR_19);
     if (!FUNC_4(VAR_24, VAR_28, ((void*)0), VAR_10)) {
      FUNC_17("Write error: Could not reset position - %s", FUNC_8());
      goto out;
     }
    } else {
     VAR_11 = VAR_6 | FUNC_0(VAR_8) | VAR_7;
     goto out;
    }
    FUNC_5(200);
   }
   if (VAR_38 > VAR_18)
    goto out;
  }
 }
 FUNC_2(VAR_24);
 VAR_27 = VAR_17;
out:
 FUNC_16(VAR_36);
 FUNC_16(VAR_37);
 return VAR_27;
}
