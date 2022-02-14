
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct priv {int fd; } ;
struct TYPE_3__ {int pos; struct priv* priv; } ;
typedef TYPE_1__ stream_t ;
typedef int off_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int64_t FUNC_3(stream_t *VAR_3) {
  struct priv *VAR_4 = VAR_3->priv;
  FUNC_0(&VAR_2);
  off_t VAR_5 = FUNC_2(VAR_4->fd,0,VAR_0);
  FUNC_2(VAR_4->fd,VAR_3->pos,VAR_1);
  FUNC_1(&VAR_2);
  return VAR_5;
}
