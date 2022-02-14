
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct priv {int fd; } ;
struct TYPE_3__ {struct priv* priv; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,void*,int) ;

__attribute__((used)) static int FUNC_3(stream_t *VAR_1, void *VAR_2, int VAR_3) {
  struct priv *VAR_4 = VAR_1->priv;
  int VAR_5;
  FUNC_0(&VAR_0);
  VAR_5 = FUNC_2(VAR_4->fd,VAR_2,VAR_3);
  FUNC_1(&VAR_0);
  return VAR_5;
}
