
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int size; TYPE_1__* dt; int internal_format_size; } ;
struct TYPE_4__ {scalar_t__ offset_in; int size; int value; int offset_out; } ;
typedef TYPE_2__ DataFormat ;
typedef int DWORD ;


 int FUNC_0 (char*,int ,int,...) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(void *VAR_0, DWORD VAR_1, const void *VAR_2, const DataFormat *VAR_3)
{
    int VAR_4;
    const char *VAR_5 = VAR_2;
    char *VAR_6 = VAR_0;

    FUNC_2(VAR_0, 0, VAR_1);
    if (VAR_3->dt == ((void*)0)) {

        FUNC_1(VAR_0, VAR_2, FUNC_3(VAR_1, VAR_3->internal_format_size));
    } else {
 for (VAR_4 = 0; VAR_4 < VAR_3->size; VAR_4++) {
     if (VAR_3->dt[VAR_4].offset_in >= 0) {
  switch (VAR_3->dt[VAR_4].size) {
      case 1:
          FUNC_0("Copying (c) to %d from %d (value %d)\n",
                              VAR_3->dt[VAR_4].offset_out, VAR_3->dt[VAR_4].offset_in, *(VAR_5 + VAR_3->dt[VAR_4].offset_in));
   *(VAR_6 + VAR_3->dt[VAR_4].offset_out) = *(VAR_5 + VAR_3->dt[VAR_4].offset_in);
   break;

      case 2:
   FUNC_0("Copying (s) to %d from %d (value %d)\n",
         VAR_3->dt[VAR_4].offset_out, VAR_3->dt[VAR_4].offset_in, *((const short *)(VAR_5 + VAR_3->dt[VAR_4].offset_in)));
   *((short *)(VAR_6 + VAR_3->dt[VAR_4].offset_out)) = *((const short *)(VAR_5 + VAR_3->dt[VAR_4].offset_in));
   break;

      case 4:
   FUNC_0("Copying (i) to %d from %d (value %d)\n",
                              VAR_3->dt[VAR_4].offset_out, VAR_3->dt[VAR_4].offset_in, *((const int *)(VAR_5 + VAR_3->dt[VAR_4].offset_in)));
                        *((int *)(VAR_6 + VAR_3->dt[VAR_4].offset_out)) = *((const int *)(VAR_5 + VAR_3->dt[VAR_4].offset_in));
   break;

      default:
   FUNC_1((VAR_6 + VAR_3->dt[VAR_4].offset_out), (VAR_5 + VAR_3->dt[VAR_4].offset_in), VAR_3->dt[VAR_4].size);
   break;
  }
     } else {
  switch (VAR_3->dt[VAR_4].size) {
      case 1:
          FUNC_0("Copying (c) to %d default value %d\n",
         VAR_3->dt[VAR_4].offset_out, VAR_3->dt[VAR_4].value);
   *(VAR_6 + VAR_3->dt[VAR_4].offset_out) = (char) VAR_3->dt[VAR_4].value;
   break;

      case 2:
   FUNC_0("Copying (s) to %d default value %d\n",
         VAR_3->dt[VAR_4].offset_out, VAR_3->dt[VAR_4].value);
   *((short *) (VAR_6 + VAR_3->dt[VAR_4].offset_out)) = (short) VAR_3->dt[VAR_4].value;
   break;

      case 4:
   FUNC_0("Copying (i) to %d default value %d\n",
         VAR_3->dt[VAR_4].offset_out, VAR_3->dt[VAR_4].value);
   *((int *) (VAR_6 + VAR_3->dt[VAR_4].offset_out)) = VAR_3->dt[VAR_4].value;
   break;

      default:
   FUNC_2((VAR_6 + VAR_3->dt[VAR_4].offset_out), 0, VAR_3->dt[VAR_4].size);
   break;
  }
     }
 }
    }
}
