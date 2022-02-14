
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct stat {int st_size; } ;
typedef int ssize_t ;
typedef int int32_t ;
struct TYPE_2__ {scalar_t__ ih_hcrc; } ;
typedef TYPE_1__ image_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int,struct stat*) ;
 int FUNC_4 (int,char**,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (char*,int,...) ;
 char* VAR_5 ;
 int FUNC_9 (int,int *,int) ;
 int VAR_6 ;
 int FUNC_10 (char*,int *,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int,int *,int) ;

int FUNC_13(int VAR_7, char *VAR_8[])
{
 struct stat VAR_9;
 u_int8_t *VAR_10;
 int VAR_11;
 int VAR_12;
 ssize_t VAR_13;
 u_int32_t VAR_14;
 image_header_t *VAR_15;
 int VAR_16;
 char *VAR_17 = ((void*)0);
 char *VAR_18 = ((void*)0);
 int VAR_19 = VAR_0;
 int VAR_20;

 while ((VAR_16 = FUNC_4(VAR_7, VAR_8, "i:o:l:")) != -1) {
  switch (VAR_16) {
  case 'i':
   VAR_17 = VAR_5;
   break;
  case 'o':
   VAR_18 = VAR_5;
   break;
  case 'l':
   VAR_20 = FUNC_10(VAR_5, ((void*)0), 0);
   if (VAR_20 > 0)
    VAR_19 = VAR_20;
   break;
  default:
   break;
  }
 }

 if (!VAR_17 || !VAR_18) {
  FUNC_11(VAR_8[0]);
  FUNC_1(1);
 }

 VAR_11 = FUNC_8(VAR_17, VAR_2);
 if (VAR_11 < 0) {
  FUNC_2(VAR_6,
   "could not open input file. (errno = %d)\n", VAR_4);
  FUNC_1(1);
 }

 VAR_12 = FUNC_8(VAR_18, VAR_3 | VAR_1, 0644);
 if (VAR_12 < 0) {
  FUNC_2(VAR_6,
   "could not open output file. (errno = %d)\n", VAR_4);
  FUNC_1(1);
 }

 if (FUNC_3(VAR_11, &VAR_9) < 0) {
  FUNC_2(VAR_6,
   "could not fstat input file. (errno = %d)\n", VAR_4);
  FUNC_1(1);
 }

 VAR_10 = FUNC_6(VAR_9.st_size + VAR_19);
 if (!VAR_10) {
  FUNC_2(VAR_6, "buffer allocation failed\n");
  FUNC_1(1);
 }

 VAR_13 = FUNC_9(VAR_11, VAR_10, sizeof(*VAR_15));
 if (VAR_13 != sizeof(*VAR_15)) {
  FUNC_2(VAR_6,
   "could not read input file (errno = %d).\n", VAR_4);
  FUNC_1(1);
 }

 FUNC_7(&(VAR_10[sizeof(*VAR_15)]), 0, VAR_19);

 VAR_13 = FUNC_9(VAR_11, &(VAR_10[sizeof(*VAR_15) + VAR_19]),
    VAR_9.st_size - sizeof(*VAR_15));
 if (VAR_13 != (int32_t)(VAR_9.st_size - sizeof(*VAR_15))) {
  FUNC_2(VAR_6,
   "could not read input file (errno = %d).\n", VAR_4);
  FUNC_1(1);
 }

 VAR_15 = (image_header_t *)VAR_10;

 VAR_15->ih_hcrc = 0;
 VAR_14 = FUNC_0(0, VAR_10, sizeof(*VAR_15) + VAR_19);
 VAR_15->ih_hcrc = FUNC_5(VAR_14);

 VAR_13 = FUNC_12(VAR_12, VAR_10, VAR_9.st_size + VAR_19);
 if (VAR_13 != (int32_t)VAR_9.st_size + VAR_19) {
  FUNC_2(VAR_6,
   "could not write output file (errnor = %d).\n", VAR_4);
  FUNC_1(1);
 }

 return 0;
}
