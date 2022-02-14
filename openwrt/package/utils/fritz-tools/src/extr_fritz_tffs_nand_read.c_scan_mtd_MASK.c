
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct mtd_info_user {int erasesize; int size; } ;
typedef int off_t ;
struct TYPE_3__ {int num_sectors; int sectors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,int ,struct mtd_info_user*) ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (int ,int,int) ;
 int VAR_4 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(void)
{
 struct mtd_info_user VAR_7;

 if (FUNC_4(VAR_4, VAR_1, &VAR_7)) {
  return 0;
 }

 VAR_3 = VAR_7.erasesize;

 VAR_5 = FUNC_5(sizeof(*VAR_5) + (VAR_7.size / VAR_2 + 7) / 8);
 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_6, "ERROR: memory allocation failed!\n");
  FUNC_2(VAR_0);
 }
 VAR_5->num_sectors = VAR_7.size / VAR_2;
 FUNC_6(VAR_5->sectors, 0xff, (VAR_7.size / VAR_2 + 7) / 8);

 uint32_t VAR_8 = 0, VAR_9 = 0;
 uint8_t VAR_10 = 0;
 for (off_t VAR_11 = 0; VAR_11 < VAR_7.size; VAR_8++, VAR_11 += VAR_2) {
  if (VAR_11 % VAR_7.erasesize == 0) {
   VAR_10 = FUNC_0(VAR_11, VAR_8);


   FUNC_8(VAR_8);
   if (VAR_10) {
    VAR_9++;
   }
  } else if (!VAR_10 || !FUNC_7(VAR_8) || !FUNC_1(VAR_11)) {
   FUNC_8(VAR_8);
  }
 }

 return VAR_9;
}
