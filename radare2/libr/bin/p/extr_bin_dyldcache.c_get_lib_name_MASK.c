
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef int file ;
struct TYPE_3__ {int pathFileOffset; } ;
typedef TYPE_1__ cache_img_t ;
typedef int RBuffer ;


 int FUNC_0 (int *,int ,int *,int) ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static char *FUNC_2(RBuffer *VAR_0, cache_img_t *VAR_1) {
 char VAR_2[256];
 char *VAR_3 = VAR_2;
 if (FUNC_0 (VAR_0, VAR_1->pathFileOffset, (ut8*) &VAR_2, sizeof (VAR_2)) == sizeof (VAR_2)) {
  VAR_2[255] = 0;




  return FUNC_1 (VAR_3);
 }
 return FUNC_1 ("FAIL");
}
