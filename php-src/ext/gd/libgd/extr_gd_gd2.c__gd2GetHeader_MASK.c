
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ offset; scalar_t__ size; } ;
typedef TYPE_1__ t_chunk_info ;
typedef int gdIOCtxPtr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__*,int ) ;
 int FUNC_6 (int*,int ) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (int,int) ;
 int FUNC_9 (char*,int,int) ;
 scalar_t__ FUNC_10 (char*,int ) ;

__attribute__((used)) static int FUNC_11(gdIOCtxPtr VAR_9, int *VAR_10, int *VAR_11, int *VAR_12, int *VAR_13, int *VAR_14, int *VAR_15, int *VAR_16, t_chunk_info ** VAR_17)
{
 int VAR_18;
 int VAR_19;
 char VAR_20[5];
 t_chunk_info *VAR_21;
 int VAR_22;
 int VAR_23;

 FUNC_0(FUNC_7("Reading gd2 header info"));

 for (VAR_18 = 0; VAR_18 < 4; VAR_18++) {
  VAR_19 = FUNC_4(VAR_9);
  if (VAR_19 == VAR_0) {
   goto fail1;
  }
  VAR_20[VAR_18] = VAR_19;
 }
 VAR_20[4] = 0;

 FUNC_0(FUNC_7("Got file code: %s", VAR_20));


 if (FUNC_10(VAR_20, VAR_7) != 0) {
  FUNC_0(FUNC_7("Not a valid gd2 file"));
  goto fail1;
 }


 if (FUNC_6(VAR_13, VAR_9) != 1) {
  goto fail1;
 }
 FUNC_0(FUNC_7("Version: %d", *VAR_13));

 if ((*VAR_13 != 1) && (*VAR_13 != 2)) {
  FUNC_0(FUNC_7("Bad version: %d", *VAR_13));
  goto fail1;
 }


 if (!FUNC_6(VAR_10, VAR_9)) {
  FUNC_0(FUNC_7("Could not get x-size"));
  goto fail1;
 }
 if (!FUNC_6(VAR_11, VAR_9)) {
  FUNC_0(FUNC_7("Could not get y-size"));
  goto fail1;
 }
 FUNC_0(FUNC_7("Image is %dx%d", *VAR_10, *VAR_11));


 if (FUNC_6(VAR_12, VAR_9) != 1) {
  goto fail1;
 }
 FUNC_0(FUNC_7("ChunkSize: %d", *VAR_12));

 if ((*VAR_12 < VAR_2) || (*VAR_12 > VAR_1)) {
  FUNC_0(FUNC_7("Bad chunk size: %d", *VAR_12));
  goto fail1;
 }


 if (FUNC_6(VAR_14, VAR_9) != 1) {
  goto fail1;
 }
 FUNC_0(FUNC_7("Format: %d", *VAR_14));

 if ((*VAR_14 != VAR_4) && (*VAR_14 != VAR_3) && (*VAR_14 != VAR_6) && (*VAR_14 != VAR_5)) {
  FUNC_0(FUNC_7("Bad data format: %d", *VAR_14));
  goto fail1;
 }


 if (FUNC_6(VAR_15, VAR_9) != 1) {
  goto fail1;
 }
 FUNC_0(FUNC_7("%d Chunks Wide", *VAR_15));


 if (FUNC_6(VAR_16, VAR_9) != 1) {
  goto fail1;
 }
 FUNC_0(FUNC_7("%d Chunks vertically", *VAR_16));

 if (FUNC_1(*VAR_14)) {
  if (*VAR_15 <= 0 || *VAR_16 <= 0 || *VAR_15 > VAR_8 / *VAR_16) {
   FUNC_0(FUNC_9 ("Illegal chunk counts: %d * %d\n", *VAR_15, *VAR_16));
   goto fail1;
  }
  VAR_23 = (*VAR_15) * (*VAR_16);
  FUNC_0(FUNC_7("Reading %d chunk index entries", VAR_23));
  if (FUNC_8(sizeof(t_chunk_info), VAR_23)) {
   goto fail1;
  }
  VAR_22 = sizeof(t_chunk_info) * VAR_23;
  if (VAR_22 <= 0) {
   goto fail1;
  }
  VAR_21 = FUNC_2(VAR_22, 1);
  if (VAR_21 == ((void*)0)) {
   goto fail1;
  }

  for (VAR_18 = 0; VAR_18 < VAR_23; VAR_18++) {
   if (FUNC_5(&VAR_21[VAR_18].offset, VAR_9) != 1) {
    FUNC_3(VAR_21);
    goto fail1;
   }
   if (FUNC_5(&VAR_21[VAR_18].size, VAR_9) != 1) {
    FUNC_3(VAR_21);
    goto fail1;
   }
   if (VAR_21[VAR_18].offset < 0 || VAR_21[VAR_18].size < 0) {
    FUNC_3(VAR_21);
    goto fail1;
   }
  }
  *VAR_17 = VAR_21;
 }

 FUNC_0(FUNC_7("gd2 header complete"));

 return 1;

fail1:
 return 0;
}
