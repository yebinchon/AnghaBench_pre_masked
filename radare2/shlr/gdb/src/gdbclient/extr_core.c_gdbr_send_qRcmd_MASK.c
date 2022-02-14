
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int is_valid; } ;
struct TYPE_11__ {int data_len; char* data; TYPE_1__ stop_reason; } ;
typedef TYPE_2__ libgdbr_t ;
struct TYPE_12__ {int valid; } ;
typedef int (* PrintfCallback ) (char*,char*) ;


 char* FUNC_0 (size_t,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (char const*,int,char*) ;
 int FUNC_6 (TYPE_2__*,int) ;
 TYPE_5__ VAR_0 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,int,char*) ;

int FUNC_13(libgdbr_t *VAR_1, const char *VAR_2, PrintfCallback VAR_3) {
 int VAR_4 = -1;
 char *VAR_5;
 size_t VAR_6;

 if (!VAR_1 || !VAR_2) {
  return -1;
 }
 VAR_6 = FUNC_10 (VAR_2) * 2 + 8;
 if (!(VAR_5 = FUNC_0 (VAR_6, sizeof (char)))) {
  return -1;
 }
 FUNC_9 (VAR_5, "qRcmd,");

 if (!FUNC_2 (VAR_1)) {
  goto end;
 }
 VAR_1->stop_reason.is_valid = 0;
 VAR_0.valid = 0;
 FUNC_5 (VAR_2, FUNC_10 (VAR_2), VAR_5 + 6);
 if ((VAR_4 = FUNC_8 (VAR_1, VAR_5)) < 0) {
  goto end;
 }
 if ((VAR_4 = FUNC_6 (VAR_1, 0)) < 0) {
  goto end;
 }
 while (1) {
  if ((VAR_4 = FUNC_7 (VAR_1)) < 0) {
   goto end;
  }
  if (VAR_1->data_len == 0) {
   VAR_4 = -1;
   goto end;
  }
  if (VAR_1->data_len == 3 && VAR_1->data[0] == 'E'
       && FUNC_4 (VAR_1->data[1]) && FUNC_4 (VAR_1->data[2])) {
   VAR_4 = -1;
   goto end;
  }
  if (!FUNC_11 (VAR_1->data, "OK", 2)) {
   break;
  }
  if (VAR_1->data[0] == 'O' && VAR_1->data_len % 2 == 1) {

   FUNC_12 (VAR_1->data + 1, VAR_1->data_len - 1, VAR_1->data + 1);
   VAR_1->data[VAR_1->data_len - 1] = '\0';
   VAR_3 ("%s", VAR_1->data + 1);
  }
  if ((VAR_4 = FUNC_6 (VAR_1, 0)) < 0) {
   goto end;
  }
 }

 VAR_4 = 0;
end:
 if (VAR_5) {
  FUNC_1 (VAR_5);
 }
 FUNC_3 (VAR_1);
 return VAR_4;
}
