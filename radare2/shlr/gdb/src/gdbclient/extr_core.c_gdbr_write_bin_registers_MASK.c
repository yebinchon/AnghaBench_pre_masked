
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {int data_len; int data; } ;
typedef TYPE_1__ libgdbr_t ;
struct TYPE_10__ {int valid; } ;


 char* VAR_0 ;
 char* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int,char*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int) ;
 TYPE_3__ VAR_1 ;
 scalar_t__ FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (char*,int,char*,char*) ;

int FUNC_9(libgdbr_t *VAR_2){
 int VAR_3 = -1;
 uint64_t VAR_4;
 char *VAR_5 = ((void*)0);

 if (!VAR_2) {
  return -1;
 }

 if (!FUNC_2 (VAR_2)) {
  goto end;
 }

 VAR_4 = VAR_2->data_len * 2 + 8;
 VAR_1.valid = 0;

 VAR_5 = FUNC_0 (VAR_4, sizeof (char));
 if (!VAR_5) {
  VAR_3 = -1;
  goto end;
 }
 FUNC_8 (VAR_5, VAR_4, "%s", VAR_0);
 FUNC_5 (VAR_2->data, VAR_2->data_len, VAR_5 + 1);
 if (FUNC_7 (VAR_2, VAR_5) < 0) {
  VAR_3 = -1;
  goto end;
 }
 if (FUNC_6 (VAR_2, 0) >= 0) {
  FUNC_4 (VAR_2);
 } else {
  VAR_3 = -1;
  goto end;
 }

 VAR_3 = 0;
end:
 FUNC_3 (VAR_2);
 if (VAR_5) {
  FUNC_1 (VAR_5);
 }
 return VAR_3;
}
