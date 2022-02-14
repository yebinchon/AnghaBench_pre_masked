
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n_fatent; int database; int csize; } ;
typedef TYPE_1__ FATFS ;
typedef int DWORD ;



__attribute__((used)) static DWORD FUNC_0 (
 FATFS* VAR_0,
 DWORD VAR_1
)
{
 VAR_1 -= 2;
 if (VAR_1 >= VAR_0->n_fatent - 2) return 0;
 return VAR_0->database + VAR_0->csize * VAR_1;
}
