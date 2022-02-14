
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int FirstDataSector; } ;
typedef int LONGLONG ;
typedef int HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__ VAR_8 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (unsigned char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ,int,int,int,unsigned char*) ;

__attribute__((used)) static BOOL FUNC_9(HANDLE VAR_12, LONGLONG VAR_13, DWORD VAR_14, BOOL VAR_15)
{
 BOOL VAR_16 = VAR_4;
 uint64_t VAR_17, VAR_18, VAR_19 = VAR_13/VAR_14, VAR_20;
 unsigned char* VAR_21 = (unsigned char*) FUNC_4(VAR_14, 1);

 FUNC_2(0, VAR_7);
 if (VAR_21 == ((void*)0)) {
  VAR_5 = VAR_2|FUNC_1(VAR_3)|VAR_1;
  goto out;
 }
 VAR_20 = FUNC_5(VAR_8.FirstDataSector, (DWORD)((VAR_15 ? 2048 : 0) + VAR_6));

 if (VAR_20 < 4)
  VAR_20 = (DWORD)((VAR_15 ? 2048 : 0) + VAR_6);

 FUNC_7("Erasing %d sectors", VAR_20);
 for (VAR_17=0; VAR_17<VAR_20; VAR_17++) {
  for (VAR_18 = 1; VAR_18 <= VAR_10; VAR_18++) {
   VAR_0;
   if (FUNC_8(VAR_12, VAR_14, VAR_17, 1, VAR_21) != VAR_14) {
    if (VAR_18 >= VAR_10)
     goto out;
    FUNC_7("Retrying in %d seconds...", VAR_11 / 1000);

    FUNC_3(FUNC_0(VAR_11, VAR_4));
   }
  }
 }
 for (VAR_17 = VAR_19 - VAR_6; VAR_17 < VAR_19; VAR_17++) {
  for (VAR_18 = 1; VAR_18 <= VAR_10; VAR_18++) {
   VAR_0;
   if (FUNC_8(VAR_12, VAR_14, VAR_17, 1, VAR_21) != VAR_14) {
    if (VAR_18 < VAR_10) {
     FUNC_7("Retrying in %d seconds...", VAR_11 / 1000);
     FUNC_3(FUNC_0(VAR_11, VAR_4));
    } else {


     FUNC_7("Warning: Failed to clear backup GPT...");
     VAR_16 = VAR_9;
     goto out;
    }
   }
  }
 }
 VAR_16 = VAR_9;

out:
 FUNC_6(VAR_21);
 return VAR_16;
}
