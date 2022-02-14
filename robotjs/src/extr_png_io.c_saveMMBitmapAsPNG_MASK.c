
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int info_ptr; int png_ptr; } ;
typedef TYPE_1__* PNGWriteInfoRef ;
typedef int MMBitmapRef ;
typedef int FILE ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ,int ,int *) ;

int FUNC_6(MMBitmapRef VAR_1, const char *VAR_2)
{
 FILE *VAR_3 = FUNC_3(VAR_2, "wb");
 PNGWriteInfoRef VAR_4;
 if (VAR_3 == ((void*)0)) return -1;

 if ((VAR_4 = FUNC_0(VAR_1)) == ((void*)0)) {
  FUNC_2(VAR_3);
  return -1;
 }

 FUNC_4(VAR_4->png_ptr, VAR_3);
 FUNC_5(VAR_4->png_ptr, VAR_4->info_ptr, VAR_0, ((void*)0));
 FUNC_2(VAR_3);

 FUNC_1(VAR_4);
 return 0;
}
