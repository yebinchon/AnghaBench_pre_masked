
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sobj; scalar_t__ fs_type; } ;
typedef int TCHAR ;
typedef int FRESULT ;
typedef TYPE_1__ FATFS ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__** VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__**,int const**,int ) ;
 int FUNC_5 (int const**) ;

FRESULT FUNC_6 (
 FATFS* VAR_4,
 const TCHAR* VAR_5,
 BYTE VAR_6
)
{
 FATFS *VAR_7;
 int VAR_8;
 FRESULT VAR_9;
 const TCHAR *VAR_10 = VAR_5;


 VAR_8 = FUNC_5(&VAR_10);
 if (VAR_8 < 0) return VAR_1;
 VAR_7 = VAR_3[VAR_8];

 if (VAR_7) {






  VAR_7->fs_type = 0;
 }

 if (VAR_4) {
  VAR_4->fs_type = 0;



 }
 VAR_3[VAR_8] = VAR_4;

 if (!VAR_4 || VAR_6 != 1) return VAR_2;

 VAR_9 = FUNC_4(&VAR_4, &VAR_5, 0);
 FUNC_0(VAR_4, VAR_9);
}
