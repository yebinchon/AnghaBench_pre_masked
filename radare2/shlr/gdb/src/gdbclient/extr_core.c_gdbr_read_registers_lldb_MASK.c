
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int data; int data_len; int sock; } ;
typedef TYPE_1__ libgdbr_t ;
struct TYPE_10__ {int valid; int buflen; int buf; scalar_t__ init; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 TYPE_3__ VAR_0 ;
 scalar_t__ FUNC_5 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_6(libgdbr_t *VAR_1) {


 int VAR_2 = -1;

 if (!VAR_1 || !VAR_1->sock) {
  return -1;
 }

 if (!FUNC_0 (VAR_1)) {
  goto end;
 }

 if (FUNC_5 (VAR_1, "?") < 0 || FUNC_4 (VAR_1, 0) < 0) {
  VAR_2 = -1;
  goto end;
 }
 if ((VAR_2 = FUNC_2 (VAR_1)) < 0) {
  goto end;
 }
 if (VAR_0.init) {
  VAR_0.buflen = VAR_1->data_len;
  FUNC_3 (VAR_0.buf, VAR_1->data, VAR_0.buflen);
  VAR_0.valid = 1;
 }

 VAR_2 = 0;
end:
 FUNC_1 (VAR_1);
 return VAR_2;
}
