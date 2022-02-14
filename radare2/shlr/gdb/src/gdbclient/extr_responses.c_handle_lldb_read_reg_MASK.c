
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* read_buff; size_t data_len; int * data; TYPE_1__* registers; } ;
typedef TYPE_2__ libgdbr_t ;
struct TYPE_5__ {size_t offset; size_t size; scalar_t__* name; } ;


 int FUNC_0 (char) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (char*,int ,size_t) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (char*,int *,int) ;
 int FUNC_8 (char*,int ,char*) ;

int FUNC_9(libgdbr_t *VAR_0) {
 if (FUNC_3 (VAR_0) < 0) {
  return -1;
 }
 char *VAR_1, *VAR_2, *VAR_3;
 size_t VAR_4, VAR_5, VAR_6 = 0;


 for (VAR_4 = 0; *VAR_0->registers[VAR_4].name; VAR_4++) {
  if (VAR_0->registers[VAR_4].offset + VAR_0->registers[VAR_4].size > VAR_6) {
   VAR_6 = VAR_0->registers[VAR_4].offset + VAR_0->registers[VAR_4].size;
  }
 }
 VAR_5 = VAR_4;


 VAR_3 = VAR_0->read_buff;
 FUNC_2 (VAR_3, 0, VAR_6);

 if (!(VAR_1 = FUNC_6 (VAR_0->data, ";"))) {
  return -1;
 }
 while (VAR_1) {
  if (!FUNC_0 (*VAR_1)) {

   VAR_1 = FUNC_6 (((void*)0), ";");
   continue;
  }

  VAR_4 = (int) FUNC_7 (VAR_1, ((void*)0), 16);
  if (VAR_4 >= VAR_5 || !(VAR_2 = FUNC_4 (VAR_1, ':'))) {
   VAR_1 = FUNC_6 (((void*)0), ";");
   continue;
  }
  VAR_2++;

  FUNC_8 (VAR_2, FUNC_5 (VAR_2), VAR_3 + VAR_0->registers[VAR_4].offset);
  VAR_1 = FUNC_6 (((void*)0), ";");
  continue;
 }
 FUNC_1 (VAR_0->data, VAR_3, VAR_6);
 VAR_0->data_len = VAR_6;
 return 0;
}
