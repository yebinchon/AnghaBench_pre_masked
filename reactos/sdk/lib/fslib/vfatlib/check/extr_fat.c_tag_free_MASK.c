
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int data_clusters; int fat; } ;
struct TYPE_11__ {scalar_t__ value; } ;
typedef TYPE_1__ FAT_ENTRY ;
typedef TYPE_2__ DOS_FS ;
typedef int DOS_FILE ;


 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,int,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int,int) ;
 int FUNC_5 (TYPE_2__*,int,int *) ;

__attribute__((used)) static void FUNC_6(DOS_FS * VAR_0, DOS_FILE * VAR_1, uint32_t *VAR_2,
       uint32_t VAR_3)
{
    int VAR_4;
    uint32_t VAR_5, VAR_6;

    if (VAR_3 == 0)
 VAR_3 = 2;

    for (VAR_5 = VAR_3; VAR_5 < VAR_0->data_clusters + 2; VAR_5++) {
 FAT_ENTRY VAR_7;
 FUNC_1(&VAR_7, VAR_0->fat, VAR_5, VAR_0);


 if (VAR_7.value && !FUNC_0(VAR_0, VAR_7.value) &&
     !FUNC_2(VAR_0, VAR_5) && !VAR_2[VAR_5]) {
     VAR_4 = 0;

     for (VAR_6 = VAR_5; VAR_6 != -1; VAR_6 = FUNC_3(VAR_0, VAR_6)) {
  if (!FUNC_2(VAR_0, VAR_6)) {
      FUNC_5(VAR_0, VAR_6, VAR_1);
  } else {




      FUNC_4(VAR_0, VAR_4, -1);







      VAR_2[VAR_6]--;
      break;
  }
  VAR_4 = VAR_6;
     }
 }
    }
}
