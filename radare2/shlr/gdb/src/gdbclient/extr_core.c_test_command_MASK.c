
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int data_len; int read_buff; } ;
typedef TYPE_1__ libgdbr_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,char const*) ;

int FUNC_5(libgdbr_t *VAR_0, const char *VAR_1) {
 int VAR_2 = -1;

 if (!FUNC_0 (VAR_0)) {
  goto end;
 }

 if ((VAR_2 = FUNC_4 (VAR_0, VAR_1)) < 0) {
  goto end;
 }
 FUNC_3 (VAR_0, 0);
 FUNC_2 (VAR_0->read_buff, VAR_0->data_len, 0);

 VAR_2 = 0;
end:
 FUNC_1 (VAR_0);
 return VAR_2;
}
