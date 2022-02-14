
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct buf_file_priv {int fd; } ;
struct TYPE_4__ {int priv; } ;
typedef TYPE_1__ RBuffer ;


 int FUNC_0 (int ) ;
 struct buf_file_priv* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(RBuffer *VAR_0) {
 struct buf_file_priv *VAR_1 = FUNC_1 (VAR_0);
 FUNC_2 (VAR_1->fd);
 FUNC_0 (VAR_0->priv);
 return 1;
}
