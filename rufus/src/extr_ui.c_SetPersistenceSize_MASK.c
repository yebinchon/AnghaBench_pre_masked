
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int WPARAM ;
struct TYPE_4__ {int DiskSize; } ;
struct TYPE_3__ {int projected_size; } ;
typedef int LPARAM ;
typedef int LONGLONG ;
typedef int HWND ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int,int) ;
 int VAR_12 ;
 int VAR_13 ;

void FUNC_11(void)
{
 int VAR_14, VAR_15 = 0;
 LONGLONG VAR_16 = VAR_2;
 HWND VAR_17;
 uint64_t VAR_18 = 0, VAR_19 = 0;

 if (FUNC_1(VAR_9) >= 0) {
  VAR_18 = VAR_4.DiskSize - VAR_11.projected_size;
  VAR_12 = FUNC_10(VAR_12, VAR_18);
  VAR_19 = VAR_12;


  VAR_17 = FUNC_5(VAR_10, VAR_1);
  FUNC_6(FUNC_2(VAR_17));
  for (VAR_14 = 0; VAR_14 < 3; VAR_14++) {
   FUNC_6(FUNC_4(VAR_17, FUNC_0(VAR_17, FUNC_9(VAR_3 + VAR_14)), VAR_14));

   if (VAR_4.DiskSize > 7 * VAR_16)
    VAR_15 = VAR_14;
   VAR_16 *= 1024;

   if (VAR_4.DiskSize < 2 * VAR_16)
    break;
  }
  if (VAR_13 < 0)
   VAR_13 = VAR_15;

  FUNC_6(FUNC_3(VAR_17, VAR_13));
  VAR_19 /= VAR_2;
  VAR_18 /= VAR_2;
  for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
   VAR_19 /= 1024;
   VAR_18 /= 1024;
  }
 }

 VAR_17 = FUNC_5(VAR_10, VAR_0);


 FUNC_7(VAR_17, VAR_7, (WPARAM)VAR_8, (LPARAM)0);
 FUNC_7(VAR_17, VAR_6, (WPARAM)VAR_8, (LPARAM)VAR_18);
 FUNC_7(VAR_17, VAR_5, (WPARAM)VAR_8, (LPARAM)VAR_19);

 FUNC_8(VAR_19);
}
